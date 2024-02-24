#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char chara = 1;
	char flag = 1;
	
		
	while (flag == 1)
	{
		fflush(stdin);
		printf("Plase enter a charater:");
		scanf("%c", &chara);
		
		switch(chara)
		{
		case 'A':
		case 'a':
			printf("Entering the new features\n");
			break;
			
		case 'D':
		case 'd':
			printf("Entering the delete function\n");
			break;
			
		case 'U':
		case 'u':
			printf("Entering the modification function\n");
			break;
			
		case 'Q':
		case 'q':
			printf("Leaving the system");
			flag = 0;
			break;
			
		
			
		default:
			printf("This is not an option!");
		
		
		
		}
	}
		
	
	return 0;
}
