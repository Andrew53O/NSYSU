#include <stdio.h>



int i,j;

int smaller_var;

int gcd;
int lcm_var;

void lcm(int a, int b)
{
//	METHOD 1
	
	lcm_var = a > b ? a: b;
	
	while(1)
	{
		if (lcm_var % a == 0 && lcm_var % b == 0)
		{
			break;
		}
		lcm_var++;
	}
	
	printf("%d %d lcm : %d\n", a, b, lcm_var);

//// METHOD 2
//	lcm_var = (a * b) / gcd;
//	
//	printf("lcm_var %d", lcm_var);
}

void big(int a, int b)
{
	
	for (i = 1; i <= smaller_var; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
		}
	}
	
	printf("%d %d gcd = %d\n", a, b, gcd);
	
}

void smaller(int a, int b)
{
	smaller_var = a > b ? b : a;

}

int main(void)
{
	int num1, num2, num_small, num_big;
	printf("Please input 2 number =");
	scanf("%d %d", &num1, &num2);
	
	smaller(num1, num2);
	
	big(num1, num2);

	lcm(num1, num2);
	return 0;
}
