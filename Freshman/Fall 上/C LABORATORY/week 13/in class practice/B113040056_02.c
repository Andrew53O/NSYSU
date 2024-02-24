#include <stdio.h>

int main(void)
{
	int n1, n2;
	
	printf("n1 :");
	scanf("%d", &n1);
	printf("n2 :");
	scanf("%d", &n2);
	
	int *pointer_n1;
	int *pointer_n2;
	
	pointer_n1 = &n1;
	pointer_n2 = &n2;
	
	printf("address of n1: %p\n", pointer_n1);
	printf("address of n2: %p\n", pointer_n2);
	
	int sum;
	
	sum = *pointer_n1 * (*pointer_n2);
	
	printf("%d x %d = %d", *pointer_n1, *pointer_n2, sum);

	return 0;
}
