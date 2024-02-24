#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 21

void swap(int x, int y);

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
	
	int first, temp, back_up;
	
	
//	
//	for (i = 0; i < SIZE; i++)
//	{
//		first= arr[1 + i];
//		
//		if (first > arr[2 + i])
//		{
//			
//			temp = first;
//			first = arr[2];
//			arr[2] = temp;
//			
//		}	
//	}
//	
	
	for (i = 1; i <= 5; i++)
	{
		j =1;
		while (j > 0 && arr[j-1] > arr[j])
		{
			swap(arr[j-1], arr[j]);
			j--;
		}
	}
	
	void swap( int x, int y) 
	{ 
  		int temp = y;
  		y = x;
  		x = temp;
	} 

	return 0;
}
