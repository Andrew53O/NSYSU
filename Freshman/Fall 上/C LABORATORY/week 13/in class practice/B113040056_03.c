#include <stdio.h>


void sort(int *n1, int *n2, int *n3)
{
	int temp_swap = 0;
	if(*n1 > *n2)
	{
		temp_swap = *n1;
		*n1 = *n2;
		*n2 = temp_swap;
	}
	if(*n1 > *n3)
	{
		temp_swap = *n1;
		*n1 = *n3;
		*n3 = temp_swap;
	}

	if (*n2 > *n3)
	{
		temp_swap = *n2;
		*n2 = *n3;
		*n3 = temp_swap;
	}
}

int main(void)
{
	int n1, n2, n3;
	printf("Please enter 3 variable(eg. 3 1 2):");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("n1 = %d\n", n1);
	printf("n2 = %d\n", n2);
	printf("n3 = %d\n", n3);
	
	printf("\nsorting three number from smallest to biggest:\n");
	
	sort(&n1, &n2, &n3);
	printf("n1 = %d\n", n1);
	printf("n2 = %d\n", n2);
	printf("n3 = %d\n", n3);
	
	return 0;
}
