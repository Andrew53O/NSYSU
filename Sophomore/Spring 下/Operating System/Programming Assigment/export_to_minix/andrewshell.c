#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h> // execvp()
#include <sys/types.h> // waitpid()
#include <sys/wait.h> // waitpid()
#include <fcntl.h> // arguments use by open() 

#define MAX_LINE_LENGTH 256
#define MAX_ARGUMENT 50

char* input_file = NULL;
char* output_file = NULL;

void process_input(char* buffer, char* array[], int* place_inputBracket, int* place_outputBracket, int* place_ampersand, int* count_pipe)
{
    char* token; 
    int i = 0;

    buffer[strcspn(buffer, "\n")] = 0; // remove newline 

    // tokenize the input 
    token = strtok(buffer, " ");

    while (token != NULL)
    {
        if (strcmp(token, "|") == 0) (*count_pipe)++;
        else if (strcmp(token, "<") == 0)
        {
            token = strtok(NULL, " ");
            if (token != NULL)
            {
                input_file = token;
                (*place_inputBracket) = i;
            }
            else
            {
                fprintf(stderr, "Wrong format\n");
                return;
            }
        } 
        else if (strcmp(token, ">") == 0)
        {
            token = strtok(NULL, " ");
            if (token != NULL)
            {
                output_file = token;
                (*place_outputBracket) = i;
            }
            else
            {
                fprintf(stderr, "Wrong format\n");
                return;
            }
        } 
        else if (strcmp(token, "&") == 0) *place_ampersand = i;

        array[i++] = token;
        token = strtok(NULL, " ");
    }
    array[i] = NULL;

}

// Executing the input
void execute_input(char* array[], int i, int* place_inputBracket, int* place_outputBracket, int* place_ampersand, int* count_pipe)
{
    pid_t pid = fork();

    if (pid == 0)
    {
        // Children process
        if(array[i] != NULL)
        {
            // More than 1 arguments
            if(array[i + 1] != NULL)
            {
                // Special treatment
                if (!(*place_ampersand < 0 && *place_inputBracket < 0 && *place_outputBracket < 0 && *count_pipe == 0))
                {
                    // exists ampersand
                    if(*place_ampersand >= 0)
                    {
                        // Exists argument in the right side of ampersand
                        if(array[*place_ampersand + 1] != NULL)
                        {
                            printf("Wrong '&' format, can't have any arguments");
                            return;
                        }
                        else
                        {
                            // Executed in the background
                            array[*place_ampersand] = NULL; // replace the ampersand 
                            signal(SIGCHLD,SIG_IGN);
                        }
                    }

                    // output result 
                    if(*place_outputBracket >= 0)
                    {
                        int file_output = open(output_file, O_WRONLY | O_CREAT, 0777);
                        if (file_output == -1)
                        {
                            fprintf(stderr, "File error while opening in redirecting output, File name : %s\n", output_file);
                            exit(EXIT_FAILURE);
                        }

                        // overwrite the stdout with the file 
                        int file_output2 = dup2(file_output, STDOUT_FILENO);
                        close(file_output); // close the additional process 

                        array[*place_outputBracket] = NULL; // replace the output bracket 
                    }

                    // Input file to a command
                    if(*place_inputBracket >= 0)
                    {
                        int file_read = open(input_file, O_RDONLY);
                        if (file_read == -1)
                        {
                            fprintf(stderr, "File error while opening in redirecting input, File name %s\n", input_file);
                            exit(EXIT_FAILURE);
                        }
                        
                        // Duplicate the file descriptor to standard input
                        if (dup2(file_read, STDIN_FILENO) == -1)
                        {
                            printf("Error redirecting input");
                        }

                        close(file_read);
                        array[*place_inputBracket] = NULL; // replace the input bracket 
                    }
                }
            }
            // No special treatmaent
            if(execvp(array[0], array) == -1)
            {
                perror("execvp");
                exit(EXIT_FAILURE); // Exit the child process if the command is not found
            }
        }
        else
        {
            return;
        }
    }
    else if (pid > 0)
    {
        // Parent process
        if (*place_ampersand < 0)
        {
            waitpid(-1, NULL, 0);
        }
        return;
    }
    else
    {
        perror("fork");
    }   
}

// Trim the trailing whitespace from a string
void trim(char* s)
{
    int i = strlen(s) - 1;

    while(i > 0)
    {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        {
            i--;
        }
        else
            break;
    }
    s[i + 1] = '\0';
}

int main()
{
    char buffer[MAX_LINE_LENGTH];
    char* arguments[MAX_ARGUMENT];
    
    while(1)
    {
        int count_pipe = 0; 
        int place_inputBracket = -1;
        int place_outputBracket = -1;
        int place_ampersand = -1;
        printf("andrew shell# ");
        if (fgets(buffer, sizeof(buffer), stdin) != NULL) 
        {
            trim(buffer);
            if (strcmp(buffer, "exit") == 0)
            {
                return 0;
            }
            process_input(buffer, arguments, &place_inputBracket, &place_outputBracket, &place_ampersand, &count_pipe);
            execute_input(arguments, 0,  &place_inputBracket, &place_outputBracket, &place_ampersand, &count_pipe);
        }
        else 
        {
            printf("%s: not found.\n", buffer);
        }
    }
    return 0;
}

