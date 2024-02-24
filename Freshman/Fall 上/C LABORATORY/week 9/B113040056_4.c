#include <stdio.h>
#include <string.h>


int main(void)
{
	char arr[50];
	int out, i, length;
	int same;
	
	while (1) // it is a string so '0' not 0
	{
	
		same = 0;
		int counter = 1;
		
		printf("Please input a string (input 0 to exit):");
		scanf("%s", arr);
		length = strlen(arr);
		if (arr[0] == '0' && length == 1)
		{
			return 0;
		}
		
		//printf("length%d", length);
		
		for (i = 0; i < length; i++)
		{	
			
			
			if (arr[i] == arr[length - counter])
			{
				same++;
				//printf("same %d arr %c\n", same, arr[i]);
				//printf("counter %d\n", counter);
			}
			else
			{
				//printf("arr = %c \n", arr[i]);
				//printf("arr 2 %c", arr[length - counter]);
				printf("Not a palindrome\n");
				break;
			}
			
			counter++;
	
		}
		//printf("same %d", same);
		if (same == length)
		{
			printf("It is a palindrome\n");
		}
		
		
		//fflush(stdin);
	}
	
	
	
	
	
	return 0;
}
