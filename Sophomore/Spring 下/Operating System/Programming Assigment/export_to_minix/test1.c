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
void debug_print(char* array[]);
void checkRedirection(char* array[], int* io_value, char* file_name);

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
    int background = 0;
    checkAmpersand(array, &background); // Check '&'

    pid_t pid = fork(); // Create a new process

    if (pid < 0)
    {
        // Fork Failed
        perror("fork");
    }
    else if (pid > 0)
    {
        // Parent process
        if (background == 0)
        {
            int status;
            waitpid(pid, &status, 0); // Wait for the child process to finish and free the child memory, prevent zombie process
        }
    }
    else
    {
        // Child process
        int io_value = 0;
        char* file_name = "";
        checkRedirection(array, &io_value, file_name);

        printf("io value->%dEND",io_value);
        printf("file name->%sEND",file_name);



        // execvp(array[0], array);
        // perror("execvp");
        // exit(EXIT_FAILURE); // macro that represent failure exit, usually set to 1
    }

}


// Checking whether exists redirection 
void checkRedirection(char* array[], int* io_value, char* file_name)
{
    printf("masuk function1");
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
        i++;
    }
     printf("masuk function2");
    if (*io_value != 0) // found "<" or ">"
    {
        printf("masuk function3");
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
            printf("copied file");
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

        printf("\n");
    }


    return 0;
}