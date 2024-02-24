#include <stdio.h>

int main (void)
{
	int number;
	
	printf("Please input a number:");
	scanf("%d", &number);
	
	if (number < 0)
	{
		printf("Absolute value is %d", number * -1);
	}
	else
		printf("Absolute value is %d", number );

	return 0;
}
