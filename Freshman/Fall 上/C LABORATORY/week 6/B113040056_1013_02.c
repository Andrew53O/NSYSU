#include <stdio.h>
#include <time.h>

#define SIZE 10
int main(void)
{
	int i,k, random_number;
	int sum = 0;
	int arr[SIZE];
	
	
	srand(time(NULL));
	
	
	for (i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100 + 1;		
		sum += arr[i];
		//printf("array %d\n", arr[i]);
	}
	
	printf("Total = %d\n", sum);
	printf("Average = %d\n", sum/SIZE);
	
	
	return 0;
}
