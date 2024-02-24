#include <stdio.h>
#include <stdlib.h>

void calculate(char operand, int *a, int *b)
{
	printf("\nresult : ");
	if (operand == '+')
	{
		printf("%d", (*a) + (*b));
		
	}
	else if (operand == '-')
	{
		printf("%d", (*a) - (*b));
	}
	else if (operand == '*')
	{
		printf("%d", (*a) * (*b));
	}
	else if (operand == '/')
	{
		printf("%d", (*a) / (*b));
	}
}


int main(void)
{
	char op;
	int num1, num2;
	printf("Please input operand :");
	scanf("%c", &op);
	printf("Please input 2 numbers :");
	scanf("%d %d", &num1, &num2);
	
	printf("Processing function");
	calculate(op, &num1, &num2);



	return 0;
}



