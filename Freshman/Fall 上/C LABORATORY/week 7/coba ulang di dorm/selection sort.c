#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 21
int main(void)
{
	int i,j,k;
	int random_number;
	int arr[SIZE];
	
	srand(time(NULL));
	
	for (i = 1; i <= SIZE - 1; i++) // starts from 1 to easily index
	{
		random_number = rand() % 100 + 1;
		arr[i] = random_number;
		printf("%d ", arr[i]);
	}
	
	int min, temp;
	
	for (k = 1; k <= SIZE; k++)
	{
		min = arr[k];
		for (j = 1 + k; j < SIZE; j++)
		{
			if (min > arr[j])
			{
				temp = min;
				min = arr[j];
				arr[j] = temp;
				arr[k] = min;
			}
		}	
	}
	printf("\n");
	for (i = 1; i < SIZE; i++)
	{
		printf("%d ", arr[i] );
	}
	

	return 0;
}
