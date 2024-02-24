#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	int i = 0;
	number = 1;
	
	for (i = 0; i < 10; i++)
	{
		number++;
	}
	
	
	printf("%d", number);
	return 0;
}
