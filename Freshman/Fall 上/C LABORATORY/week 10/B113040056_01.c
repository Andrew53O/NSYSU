#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int method;
	
	
	// for getc
	char Char_In_File = NULL;
	
	// for fscanf
	char line_1[50];
	char line_2[50];
	char line_3[50];
	char line_4[50];
	// for fgets
	int length = 16;
	char string_fgets[50];
	int i;
	
	// for fread
	char string_fread[50];
	int read_count = 1;
	
	
	do
	{
		FILE *fptr = fopen("text.txt", "r");
		
		
		if (fptr == NULL)
		{
			printf("File doesn't exixt");
			return 0;
		}
		
		
		
		
		
		printf("Choose how to read file:\n");
		printf("1.Use getc() to read\n");
		printf("2.Use fscanf() to read\n");
		printf("3.Use fgets() to read\n");
		printf("4.Use fread() to read\n");
		printf("0.Exit\n");
		
		scanf("%d", &method);
		
		if (method == 0)
		{
			printf("success exit");
			exit(0);
		}
		
		switch(method)
		{
			
			
			
			// getc
			case 1:
				do
				{
					Char_In_File = getc(fptr);
					printf("%c", Char_In_File);
					
				}
				while (Char_In_File != EOF);
				printf("\n");
				printf("------------------------------------------------\n\n");
				break;
				
			//fscanf
			case 2:
				
				while(feof(fptr) == 0)
				{
					
					fscanf(fptr, "%s %s %s %s\n",line_1, line_2, line_3, line_4);
					printf("%s %s %s %s\n", line_1, line_2, line_3, line_4);
		
				}
				printf("\n");
				printf("------------------------------------------------\n\n");
				
				break;
				
				
			// fgets
			case 3:
				
				do
				{
					fgets(string_fgets, length, fptr);
					printf("%s\n", string_fgets);
					
				}while(fgets(string_fgets, length, fptr) != NULL);
				
				printf("\n");
				printf("------------------------------------------------\n\n");
				
				break;
			
			// fread
			case 4:
				
				do
				{
					fread(string_fread, 50, read_count, fptr);
					printf("%s\n", string_fread);
					
				}while(feof(fptr) == 1);
				
				printf("\n");
				printf("------------------------------------------------\n\n");
				
				break;
				
				
			default:
				printf("Please select 0-4 next time");
			
			return 0;
		}
		
		
		fclose(fptr);
	}
	while (method != 0);
	
	
	
	
	
	return 0;
}
