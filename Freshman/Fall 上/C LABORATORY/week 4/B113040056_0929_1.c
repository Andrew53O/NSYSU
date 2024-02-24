#include <stdio.h>

int main (void)
{
	int number;
	
	printf("Please enter an integer (0-100):");
	scanf("%d", &number);
	
	if (number < 0 || number > 100)
	{
		printf("Your inputed number is not in range, please input again");
		
	}
	else if (number < 34)
	{
		printf("Lucky area");
	}
	else if (number < 73)
	{
		printf("GG");
	}
	else if(number < 101)
	{
		printf("Lucky area");
	}
	return 0;
}
