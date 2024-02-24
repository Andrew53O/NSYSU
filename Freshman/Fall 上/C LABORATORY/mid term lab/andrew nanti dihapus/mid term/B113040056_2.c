#include <stdio.h>


int main(void)
{
	int arr[100];
	int number;
	int i, j, k;
	int same_flag;
	int different_flag;
	int count = 0;
	
	printf("Input: ");
	for (i = 0; i < 100; i++)
	{
		scanf("%d", &number);
		if (number == -1)
		{
			break;
		}
		
		arr[i]	= number;	
		count++;
		//printf("count %d", count);
	}
	
	for (i = 0; i < count - 1; i++)
	{
		for (j = 1; j < count ; j++)
		{
			
		if  (arr[i] == arr[i + j])
			{
				different_flag++;
//				printf("hello");
//				printf("arr%d", arr[i]);
				// know what value is the same, but doesn't know how to print index that value is not the same;
			
			}
		}
		
	}
	
	printf("\nOutput : %d",different_flag );

	
	return 0;
}
