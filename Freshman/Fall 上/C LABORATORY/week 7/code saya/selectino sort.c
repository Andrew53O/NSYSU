#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main(void)
{
	
	int i,j, random_number;
	int arr[20];
	srand(time(NULL));
	

	
	printf("Sorting (from small to big)\n");
	printf("Before sorting :");
	for (i = 0; i < SIZE; i++)
	{
		random_number = rand() % 200 + 1;
		printf("%d ", random_number);
		arr[i] = random_number;
	}
	
	printf("\nAfter Sorting :");
	
	
	int min, temp;

	for(i = 0; i < 20;i ++)
 	{
  		temp=arr[i];
  		
  	for(j = i; j < 20; j++)
  	{
  		
   		if(temp > arr[j])
   		
   			{
    		temp = arr[j];
    		arr[j] = arr[i];
    		arr[i] = temp;
    	
   			}
  		}
 	}
 


//	for (k = 0; k < SIZE - 1; k++)
//	{
//		min = arr[k];
//	for (j = 1; j < SIZE - count; j++)
//	{
//		if (min > arr[j])
//		{
//			min = arr[j];
//			arr[j] =arr[k];
//			arr[k] = min;
//		}
//		
//	}
//	count++;



	
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
//	printf("paling kecil %d", min);
	
	
	
	
	return 0;
}
