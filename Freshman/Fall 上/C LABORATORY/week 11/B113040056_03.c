#include <stdio.h>

#define PI 3.1415926

#define AREA PI*num*num

int main(void)
{
	double num;
	printf("Please input circle radius :");
	scanf("%lf", &num);

	printf("Area : %lf", AREA);
	
	
	return 0;
}
