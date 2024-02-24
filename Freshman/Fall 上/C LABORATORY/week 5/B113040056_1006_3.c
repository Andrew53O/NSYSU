#include <stdio.h>

int main (void)
{
	int number;
	int i,j;
	printf("Please input a number (1-100): ");
	scanf("%d", &number);
	
	if (number < 1 || number > 100)
	{
		printf("Please run the code again");
		return 0;
	}
	
	for (i = 1; i <= number; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
