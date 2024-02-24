#include <stdio.h>




int FPB(int num1, int num2)
{
	int smaller = (num1 < num2) ? num1 : num2;
	
	int i;
	
	for (i = 1; i <= smaller; i++)
	{
		
	}
	
	
	

	

	return small;	
}

int KPK(int num1, int num2)
{

	
	
	return big;
	
}



int main(void)
{
	int num1, num2;
	
	printf("Please input 2 numbers:");
	scanf("%d %d", &num1, &num2);
	
	printf("Least common multiple of %d %d  is : %d\n", num1, num2, FPB(num1, num2));
	
	printf("Greatest common divisor of %d %d is : %d\n", num1, num2, KPK(num1, num2));

	
	
	return 0;
}
