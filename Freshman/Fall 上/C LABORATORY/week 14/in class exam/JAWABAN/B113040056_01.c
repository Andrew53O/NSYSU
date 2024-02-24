#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int array[], int size){

	int i,j, min_index;
	
	for (i = 0; i < size -1 ;i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_index] > array[j])
			{
				min_index = j;
			}
		}
		
		if (min_index != i)
		{
			swap(&array[min_index], &array[i]);
		}
		
	}
}


int main(void){
	srand(time(NULL));
	int array[10], index;
	puts("Before sort");
	for(index=0;index<10;index++){
		array[index] = rand();
		printf("%d ",array[index]);
	}
	puts("");
	puts("After sort");
	sort(array,10);
	for(index=0;index<10;index++){
		printf("%d ",array[index]);
	}
	puts("");
}



