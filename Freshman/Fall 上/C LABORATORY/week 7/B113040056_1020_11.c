#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main(void)
{
	
	int i,j,k, random_number,container;
	int arr[20];
	srand(time(NULL));
	
	printf("Sorting (from big to small)\n");
	printf("Before sorting :");
	for (i = 0; i < SIZE; i++)
	{
		random_number = rand() % 200 + 1;
		printf("%d ", random_number);
		arr[i] = random_number;
	}
	
	
	printf("\nAfter Sorting :");

	for (j = 0; j < SIZE; j++)
	{
		
	for (i = 0; i < SIZE - 1 ; i++)
	{
		if (arr[i] > arr[i+1])
		{
			container = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = container;
		}
		
	}
	}
	
	
	for (k = 19; k > -1; k--)
 	{

		printf("%d ", arr[k]);
	}
	
	return 0;
}
