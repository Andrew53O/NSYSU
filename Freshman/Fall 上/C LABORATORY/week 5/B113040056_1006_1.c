#include <stdio.h>

int main (void)
{
	int number;
	int i = 0;
	
	printf("Plese input a number (0-100): ");
	scanf("%d", &number);
	

	
	for (i; i < number; i+=2)
	{
		printf("%d is an even number\n", i);
	}
	
	
	
	return 0;
}
