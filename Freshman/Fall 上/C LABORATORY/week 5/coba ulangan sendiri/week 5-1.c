#include <stdio.h>

int main(void)
{
	int number = 5;
	int i = 1;
	int total = 1;
	
//	for (i = number; i > 1; i--)
//	{
//		total = total * i;
//	}
//	

	for (i = 1; i <=number;i++)
	{
		total = total * i;
	}

	printf("total %d", total);
	
	return 0;
}
