#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main(void)
{
	
	int i,j, temp, random_number;
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
	
 	for(i = 0; i < SIZE; i++)
 	{
  		temp = arr[i];
  		for(j = i ; j < SIZE ; j++)
  		{
   			if(temp > arr[j])
   			{
    			temp = arr[j];
    			arr [j] = arr[i];
    			arr [i] = temp;
   			}
  		}
 	}
 
 	for( i = 0 ; i < 20 ; i++)
 	{	 
 		printf("%d ",arr[i]);
 	
	}
 	return 0;	
}

	
	
	
	
	
