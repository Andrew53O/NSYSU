#include <stdio.h>

int fact(int a, int b)
{
	int result;
	
	if (b == 0)
	{
		return 1;
	}

	return a * fact(a, b - 1);
}



int main(void)
{
	int num1, num2;
	int res;
	printf("Please input 2 numbers :");
	scanf("%d %d", &num1, &num2);
	//scanf("%d          %d", &num1, &num2); // ga ada beda ama atas
	
	res = fact(num1, num2);
	
	printf("%d^%d = %d",num1, num2, res);
	
	return 0;
}
