#include <stdio.h>
#include <stdlib.h>

int myswitch(int* a, int* b);



int main(void)
{
	int a = 0, b = 1;
	a  = myswitch(&a,&b);
	printf("a=%d, b=%d\n", a,b);
	
}

int myswitch(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a= *b;
	*b = tmp;
	
	return *a;
}
