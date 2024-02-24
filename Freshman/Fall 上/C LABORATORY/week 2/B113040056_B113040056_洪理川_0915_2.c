#include <stdio.h>

int main(void)
{
	int n1 = 123;
	float f1 = 123.4567;
	double f2 = 123.4567;
	
	printf("n1 Integer: %i\n", n1);
	
	printf("-------------------\n");
	
	printf("%%8d   results: %8d \n", n1);
	printf("%%.8d  results: %.8d \n", n1);
	printf("%%06d  results: %06d \n", n1);
	
	printf("------------ I'm Line Divider------------\n");
	printf(" The value of Float f1: %f\n", f1);
	printf("The value of Double f1: %lf\n", f2);
	
	printf("-------------------\n");
	
	printf("%%.4f   results: %.4f \n", f1);
	printf("%%10.4f results: %10.4f \n", f1);
	printf("%%lf    results: %lf \n", f2);
	
	return 0;
}
