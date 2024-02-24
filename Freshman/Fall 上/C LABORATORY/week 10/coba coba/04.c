#include <stdio.h>
#include <stdlib.h>

int myswitch(int a, int b_myswitch);


int a = 10, b = 5;
int main(void)
{
	
	a  = myswitch(a,b);
	printf("a=%d, b=%d\n", a,b);
	
}

int myswitch(int a, int b_myswitch)
{
	int tmp;
	
	tmp = a;
	a= b_myswitch;
	b_myswitch = tmp;
	b = b_myswitch;
	return a;
}
