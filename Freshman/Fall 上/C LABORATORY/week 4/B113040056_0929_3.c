#include <stdio.h>

int main(void)
{
	int number;
	
	printf("Please enter an integer (1-13):");
	scanf("%d", &number);
	
	if (number <= 0 || number > 13)
	{
		printf("Your inputed number is not in range, please input again");
		
	}
	else if (number < 7)
	{
		printf("The number is smaller than 7");
	}
	else if (number > 7)
	{
		printf("The number is bigger than 7");
	}
	else 
	{
		printf("The number is 7");
	}
	
	
	return 0;
}
