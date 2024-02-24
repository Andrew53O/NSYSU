#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int i = 32767;
	short s = 32767;
	int sum_integer;
	short sum_short;
	
	printf("int i = 32767\n");
	printf("short s = 32767\n");
	
	sum_integer = i + 1;
	printf("i + 1 =%d\n", sum_integer);
	
	sum_short = s + 1;
	printf("s + 1 = %d\n", sum_short);
	
	
	system("pause");
	return 0;
}
