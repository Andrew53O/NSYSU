#include <stdio.h>
#include <time.h>

#define SIZE 10
int main(void)
{
	int random_number, i;
	int arr[10];
	srand(time(NULL));
	
	for (i = 0; i < SIZE; i++)
	{
		
		arr[i] = rand() % 100 + 1;

		printf("Number %d is: %d\n", i, arr[i] );
	}

	
	
	return 0; 
}
