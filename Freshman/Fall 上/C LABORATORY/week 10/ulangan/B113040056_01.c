#include <stdio.h>
#include <string.h>

int main(void)
{
	char palindrome[20];
	
	int i;
	
	while(1)
	{
		printf("Please input the string that want to test: ");
		scanf("%s", palindrome);
		
		int length = strlen(palindrome);
		
		if(strcmp(palindrome, "0") == 0)
		{
			break;
		}
		
		
		char reversed[length];
		int index = 0;
		for (i = length - 1; i >= 0; i--)
		{
			reversed[i] = palindrome[index];
			
			index++;
			
		}

		if (strncmp(palindrome, reversed, length) == 0)
		{
			printf("It is a palindrome");
			break;
		}
		else 
		{
			printf("It is not a palindrome");
			break;
		}
			
		
		
	}	
	
	
	return 0;
}
