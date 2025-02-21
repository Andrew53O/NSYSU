#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // execvp()
#include <sys/types.h> // waitpid()
#include <sys/wait.h> // waitpid()
#include <fcntl.h> // arguments use by open() 

#define MAX_LINE_LENGTH 256
#define MAX_ARGUMENT 50

void checkAmpersand(char* array[], int* background);
void checkPipe(char* array[], int* pipe, char* array2[]);
void debug_print(char* array[]);
void checkRedirectionPipe(char* array[], int* io_value, char* file_name);

void process_input(char* buffer, char* array[])
{
    char* token; 
    int i = 0;

    buffer[strcspn(buffer, "\n")] = 0; // remove newline 

    // tokenize the input 
    token = strtok(buffer, " ");
    while (token != NULL)
    {
        array[i++] = token;
        token = strtok(NULL, " ");
    }

    array[i] = NULL;
}

// Executing the input
void execute_input(char* array[])
{
    char* array2[MAX_ARGUMENT];
    int background = 0, pipeExist = 0;
    int file_descriptor[2];
    checkAmpersand(array, &background); // Check '&'
    // check '|' and create array2 for the right argument
    checkPipe(array, &pipeExist, array2); 

    debug_print(array2);
    if(pipeExist == 1)
    {
        if (pipe(file_descriptor) == -1) // create pipe for the file_descriptor
        {
            perror("file failed");
            return;
        }
    }

    pid_t pid = fork(); // Create a new process

    if (pid < 0)
    {
        // Fork Failed
        perror("fork");
    }
    else if (pid == 0)
    {
        // Child process
        int io_value = 0;
        int file2, file_read;
        char file_name[256] = "";
        checkRedirectionPipe(array, &io_value, file_name);

        // check valid input 
        if (!(io_value == 0 || strcmp(file_name, "") == 0))
        {
            if (io_value == 1)
            {
                file_read = open(file_name, O_RDONLY);
                if (file_read == -1)
                {
                    printf("File error while opening in redirecting input");
                    return;
                }
                
                // Duplicate the file descriptor to standard input
                if (dup2(file_read, STDIN_FILENO) == -1)
                {
                    printf("Error redirecting input");
                }

                close(file_read);
            }
            else if (io_value == 2)
            {
                int file = open(file_name, O_WRONLY | O_CREAT, 0777);
                if (file == -1)
                {
                    printf("File error while opening in redirecting output");
                    return;
                }

                // overwrite the stdout with the file 
                file2 = dup2(file, STDOUT_FILENO);
                close(file); // close the additional process 
            }
            else if (io_value == 3) // pipe
            {
                // copy the write file descriptor to the pipe
                dup2(file_descriptor[1], STDOUT_FILENO); 
            }
            
        }
        execvp(array[0], array);
        perror("execvp");

        close(file2);
        close(file_descriptor[0]);
        close(file_descriptor[1]);
        exit(EXIT_FAILURE); // macro that represent failure exit, usually set to 1
    }
    else
    {
        // Parent process
        if (background == 0 && pipeExist == 0)
        {
            int status;
            waitpid(pid, &status, 0); // Wait for the child process to finish and free the child memory, prevent zombie process
        }

        // Parent process
        if (pipeExist == 1)
        {
            pid_t pid2 = fork();

            if (pid2 == 0) 
            {
                // Child process
                close(file_descriptor[1]); // Close the unused write end
                dup2(file_descriptor[0], STDIN_FILENO); // Read from pipe
               
                execvp(array2[0], array2);
                close(file_descriptor[0]);
                perror("execvp");
                exit(EXIT_FAILURE);
            } 
            else if (pid2 > 0) 
            {
                // Parent process
                close(file_descriptor[0]);
                close(file_descriptor[1]);

                int status;
                int status2;
                waitpid(pid, &status, 0); // Wait for the child process to finish and free the child memory, prevent zombie process
                waitpid(pid2, &status2, 0); // Wait for the second child process to finish
            }
            else
            {
                // Fork Failed
                perror("fork");
            }

            
        }
    }

    close(file_descriptor[0]);
    close(file_descriptor[1]);
}

// Checking whether exists redirection 
void checkRedirectionPipe(char* array[], int* io_value, char* file_name)
{
    int i = 0;
    while(array[i] != NULL && *io_value == 0) // check "<" or ">"
    {
        if(strcmp(array[i], "<") == 0)
        {
            *io_value = 1;
        }
        else if(strcmp(array[i], ">") == 0)
        {
            *io_value = 2;
        }
        else if (strcmp(array[i], "|") == 0)
        {
            *io_value = 3;
        }
        i++;
    }

    if (*io_value == 1 || *io_value == 2) // found "<" or ">"
    {
        // Check how much argument provided
        int count_redirected_argument = 0;
        int temp_i = i; // the file_name position 
        while(array[i] != NULL)
        {
            count_redirected_argument++;
            i++;
        }

        if(count_redirected_argument == 1)
        {
            strcpy(file_name, array[temp_i]); // copy the file name
            array[temp_i - 1] = NULL; // overwite the angle bracket
        }
        else if (count_redirected_argument == 0)
        {
            printf("Please input the redirected file name");
            return;
        }
        else
        {
            printf("Too much argument");
            return;
        }
    }

}


// Checking whether exists '&'
void checkAmpersand(char* array[], int* background)
{
    // Check if the last argument is '&'
    char **last_arg;
    for (last_arg = array; *last_arg != NULL; last_arg++)
        ; // Moving pointer to the last argument

    if (last_arg > array && strcmp(*(last_arg - 1), "&") == 0)
    {
        *background = 1;
        *(last_arg - 1) = NULL; // Remove '&' from arguments
    }
}

// Checking whether exists '|'
void checkPipe(char* array[], int* pipeExist, char* array2[])
{
    int j = 0;
    int i = 0;
    while(array[i] != NULL) 
    {
        if (*pipeExist == 1)
        {
            array2[j] = array[i];
            j++;
        }
        else if (strcmp(array[i], "|") == 0)
        {
            *pipeExist = 1;
            array[i] = NULL; // replace the "|" to end the array
        }
        i++;
    }
    array2[j] = NULL;
}

void debug_print(char* array[])
{
    int i = 0;
    while(array[i] != NULL) 
    {
        printf("inside array%sEND\n", array[i]);
        i++;
    }
}

int main()
{
    char buffer[MAX_LINE_LENGTH];
    char* arguments[MAX_ARGUMENT];
    
    while(1)
    {
        // count of argument in current line 
        int argumentCount = -1; 

        printf("andrew shell# ");
        if (fgets(buffer, sizeof(buffer), stdin) != NULL) 
        {
            if (strcmp(buffer, "exit\n") == 0)
            {
                return 0;
            }

            process_input(buffer, arguments);
            execute_input(arguments);
        }
        else 
        {
            printf("%s: not found.\n", buffer);
        }

        printf("newline\n");
    }


    return 0;
}

