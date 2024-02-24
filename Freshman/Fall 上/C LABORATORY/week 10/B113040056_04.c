#include <stdio.h>


int small;

int FPB(int num1, int num2)
{
	
	
	int temp;
	
	while(num2 != 0)
	{
		temp = num1%num2;
		num1 = num2;
		num2 = temp;
	}
	
	
	small = num1;
	return small;	
}

int KPK(int num1, int num2, int small)
{
	int big;
	
	big = (num1 * num2) / small;
	
	
	return big;
	
}



int main(void)
{
	int num1, num2;
	
	printf("Please input 2 numbers:");
	scanf("%d %d", &num1, &num2);
	
	printf("Least common multiple of %d %d  is : %d\n", num1, num2, FPB(num1, num2));
	
	printf("Greatest common divisor of %d %d is : %d\n", num1, num2, KPK(num1, num2, small));

	
	
	return 0;
}
