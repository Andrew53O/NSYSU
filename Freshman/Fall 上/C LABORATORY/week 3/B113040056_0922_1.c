#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592 

int main (void)
{
	float f;
	double d;
	int radius;
	
	printf("Please enter the radius:");
	scanf("%d", &radius);
	
	f = radius * radius * radius * PI * 4/3;
	d = radius * radius * radius * PI * 4/3;
	
	printf("Volume f: %.12f\n", f);
	printf("Volume d: %.12lf", d);
	
	
	return 0;
}
