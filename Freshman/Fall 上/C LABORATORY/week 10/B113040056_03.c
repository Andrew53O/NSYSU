#include <stdio.h>



int fact(int num)
{
	int result = 1;
	int i;
	
		for (i = 1; i  <= num; i++)
		{
			result = result * i;
		}
		
	return result;
}

int main(void)
{
	
	int num;
	int i;
	int result;
	
	do
	{
		
		
		printf("Welcome to factorial world (press 0 to exit)\n");
		printf("A: Please input the number you want to know the factorial:\n");
		scanf("%d", &num);
		
		if (num == 0 || num < 0)
		{
			break;
		}
		
		
		printf("B : %d\n", fact(num));
		
		
	}
	while (num != 0);
	
	
	
	
	
	return 0;
}
