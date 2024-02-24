#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	float number;
	
	scanf("%f", &number);
	
	printf("%10.1f\n", number);
	printf("%010.2f\n", number);
	printf("%+10.4f\n", number);
	printf("%-10.3f\n", number);

	return 0;
}
