#include <stdio.h>
#include <string.h>

int main(void)
{
	char palindrome[50];
	
	int i;
	
	while(1)
	{
		printf("Please input a string (0 to exit):");
		scanf("%s", palindrome);
		
		int length = strlen(palindrome);
		
		if(strcmp(palindrome, "0") == 0)
		{
			break;
		}
		
		
		char reversed[length+ 1];
		int index = 0;
		for (i = length - 1; i >= 0; i--)
		{
			reversed[i] = palindrome[index];
			
			index++;
			//printf("hello");
		}
		reversed[length] = '\0';
		printf("|%s|", reversed);
		
		if (strcmp(palindrome, reversed) == 0)
		{
			printf("It is a palindrome");
		}
		else 
			printf("It is not a palindrome");
		
		
	}	
	
	
	return 0;
}
