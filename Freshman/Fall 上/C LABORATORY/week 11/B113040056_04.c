#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num_input;

void show(int arr[]);

int main(void)
{
	srand(time(NULL));
	
	int i;	
	printf("Please input array length :");
	scanf("%d", &num_input);
	
	int array[num_input];

	for (i = 0; i < num_input; i++)
	{
		array[i] = rand() % 100 + 1;
		
	}
	
	show(array);
	
	return 0;
}

void show(int arr[])
{
	int i;
	for (i = 0; i < num_input ; i++)
	{
		printf("%4d", arr[i]);
	}
	printf("\n");
}
