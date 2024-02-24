#include <stdio.h>

#define ROW 2
#define COLUMN 3

int main(void)
{
	int arr[ROW][COLUMN];
	int number, i, j;
	
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COLUMN; j++)
		{
			printf("arr[%d][%d] = ", i, j); 
			scanf("%d", &arr[i][j]);
		}
	
	}
	
	printf("Original\n");
	
	for (i = 0; i < ROW; i++)
	{
	for (j = 0; j < COLUMN; j++)
	{
		
		printf("%d ", arr[i][j]);
	}
		printf("\n");
	}
	
	
	printf("\nEdited\n\n");
	
	for (i = 0; i < COLUMN; i++)
	{
	for (j = 0; j < ROW; j++)
	{
		
		printf("%d ", arr[j][i]);
	}
		printf("\n");
	}
	
	
	
	
	
	
	return 0;
}
