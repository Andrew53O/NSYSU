#include <stdio.h>
#include <time.h>

#define SIZE 10

int main(void)
{
	int i,j,k , max, min, digit_max, digit_min;
	int arr[SIZE];
	
	srand(time(NULL));
	
	
	for (i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100 + 1;
		printf("array %d \n", arr[i]);
	}	
	
	max = arr[0];
	min = arr[0];
	for (j = 0; j < SIZE; j++)
	{
		
		if (arr[j] > max)
		{
			max = arr[j];

		}
		
		if (arr[j] < min)
		{
			min = arr[j];
			
		}
	}
	
	for (k =0; k < SIZE; k++)
	{
		if (arr[k] == max)
		{
			digit_max = k + 1;
		}
		
		if (arr[k] == min)
		{
			digit_min = k + 1;
		}
	}
	
	printf("The biggest number is in %d number, and the value is %d\n", digit_max, max);
	printf("The smallest number is in %d number, and the value is %d\n", digit_min, min);
	
	return 0;
}

