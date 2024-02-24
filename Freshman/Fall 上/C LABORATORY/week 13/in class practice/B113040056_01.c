#include <stdio.h>


int main(void)
{
	int a = 500;
	
	printf("Value of a = %d\n", a);
	printf("Address of a = %p\n", &a);
	printf("Value of Address '&a' = %d \n", *&a);
	
	
	return 0;
}
