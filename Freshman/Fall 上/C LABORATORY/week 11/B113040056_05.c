#include <stdio.h>


int fibonacci(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	
	return fibonacci (n - 2) + fibonacci(n-1);
}

int main(void)
{
	int num_inputted;
	
	printf("Please input a integer :");
	scanf("%d", &num_inputted);
	int i;
	
	printf("Array :");
	for(i = 1; i <= num_inputted; i++)
	{
		printf("%4d", fibonacci(i));
	}
	
	return 0;
}
