#include <stdio.h>
#include <stdlib.h>

int myswitch(int a, int b);

int a = 0, b_global = 1;

int main(void)
{
	
	a = myswitch(a,b_global);
	
	printf("a=%d, b=%d\n", a, b_global);
	
}

int myswitch(int a, int b)
{
	int tmp;
	tmp = a; // TEMP JADI 0
	a=b_global ; // A JADI 1
	b_global =tmp; // B JADI 0
	
	return a;
}
