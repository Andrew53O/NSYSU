#include <stdio.h>
#include <time.h>


#define SIZE 9
int main(void)
{
	int i, j, number, random_number, random_exponent;
	int arr[10];
	srand(time(NULL));
	
	random_exponent = 9;
	
	int base = random_exponent;
	
	
	for (i = 0; i <= base; i++)
	{
		arr[i]  = rand() % 10;
		printf("%d * x^%d ", arr[i], random_exponent);
		if (i < base)
		{
			printf("+ ");
		}
		random_exponent--;
	}
	
	printf("\n");
	
	int second_line_exponent = base ;
	for (j = 0; j < base; j++)
	{
		printf("%d * x^%d ", arr[j] * second_line_exponent, second_line_exponent - 1);
		if (j < base - 1)
		{
			printf("+ ");
		}
		second_line_exponent--;
	}

	
	
	
	
	
	
	return 0;
}

