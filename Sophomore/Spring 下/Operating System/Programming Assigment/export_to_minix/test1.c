#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // execvp 

#define MAX_LINE_LENGTH 256
#define MAX_ARGUMENT 50

// 
void process_input(char* buffer, char* array[], int *argumentCount)
{
    char* token; 
    int i = 0;

    token = strtok(buffer, " ");

    while (token != NULL)
    {
        array[i++] = token;
        token = strtok(NULL, " ");
        printf("token%s\n", token);
    }
    array[i] = NULL;

    *argumentCount = i;

    for (int j = 0; j < i; j++)
    {
        printf("in array %s\n", array[j]);
    }

    printf("\n");
}

// Executing the input
void execute_input(char* array[], int *argumentCount)
{
    int i = 0;
    while(array[i] != NULL) 
    {
        printf("inside array%s\n", array[i]);
        i++;
    }
    // execvp(array[0], array);
    // perror("execvp");


    char *args[] = { "ls", NULL }; // Command and its arguments
    execvp(args[0], args); // Execute ls command
    //perror("execvp");

    printf("andrew\n");
}

int main()
{
    char buffer[MAX_LINE_LENGTH];
    char* arguments[MAX_ARGUMENT];
    

    while(1)
    {
        // count of argument in current line 
        int argumentCount = -1; 

        printf("# ");
        if (fgets(buffer, sizeof(buffer), stdin) != NULL) 
        {
            if (strcmp(buffer, "exit\n") == 0)
            {
                return 0;
            }

            process_input(buffer, arguments, &argumentCount);
            execute_input(arguments , &argumentCount);

            for(int i = 0; i < argumentCount; i++)
                printf("%s", arguments[i]);



            printf("%s\n", buffer);
        }
        else 
        {
            printf("%s: not found.\n", buffer);
        }

    }


    return 0;
}