#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // execvp()
#include <sys/types.h> // waitpid()
#include <sys/wait.h> // waitpid()



#define MAX_LINE_LENGTH 256
#define MAX_ARGUMENT 50

// 
void process_input(char* buffer, char* array[])
{
    char* token; 
    int i = 0;

    buffer[strcspn(buffer, "\n")] = 0; // remove newline 

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
    // Check if the last argument is '&'
    int background = 0;
    char **last_arg;
    for (last_arg = array; *last_arg != NULL; last_arg++)
        ; // Moving pointer to the last argument

    if (last_arg > array && strcmp(*(last_arg - 1), "&") == 0)
    {
        background = 1;
        *(last_arg - 1) = NULL; // Remove '&' from arguments
    }

    pid_t pid = fork(); // Create a new process

    if (pid < 0)
    {
        // Fork Failed
        perror("fork");
    }
    else if (pid > 0)
    {
        // Parent process
        if (!background)
        {
            int status;
            waitpid(pid, &status, 0); // Wait for the child process to finish and free the child memory, prevent zombie process
        }
    }
    else
    {
        // Child process
        execvp(array[0], array);
        perror("execvp");
        exit(EXIT_FAILURE); // macro that represent failure exit, usually set to 1
    }


    // char *args[] = { "ls", "-l", NULL }; // Command and its arguments
    // execvp(args[0], args); // Execute ls command
    //perror("execvp");
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