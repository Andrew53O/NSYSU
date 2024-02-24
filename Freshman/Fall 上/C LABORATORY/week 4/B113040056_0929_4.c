#include <stdio.h>

int main (void)
{
	int number;
	
	printf("Please enter a Year:");
	scanf("%d", &number);
	
	
	if (number % 4 == 0 && number % 100 != 0)
	{
		printf("%d is a leap year", number);
	}
	else if (number % 400 == 0 && number % 3200 != 0)
	{
		printf("%d is a leap year", number);
	}
	else
	{
		printf("%d is not a leap year", number);
	}

	return 0;
}
