#include <stdio.h>

int main(void)
{
	int number, i;
	int total = 1;
	int base_number;
	printf("Please input a number :");
	scanf("%d", &number);
	
	base_number = number;
	
	for (i = 1; i <= number; number--)
	{
		total *= number;
	}
	
	printf("%d! = %d", base_number, total);
	return 0;
}
