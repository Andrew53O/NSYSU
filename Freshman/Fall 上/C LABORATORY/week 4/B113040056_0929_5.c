#include <stdio.h>

int main(void)
{
	int number;
	
	printf("Plase enter a number:\n");
	scanf("%d", &number);
	
	switch(number)
	{
		case 99:
			printf("You inputted 99");
			break;
		default:
			printf("You inputted %d", number);
	}
	
	
	return 0;
}
