#include <stdio.h>


int main(void)
{
	int arr[100];
	int number;
	int i, j, k;
	int same_flag;
	int different_flag;
	int count = 0;
	int count_for_number = 0;
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
				count_for_number++;
			
				// dpt yang sama tapi valuenya,
			}
		}
		
	}
	
	
	
	if (count_for_number > count/2)
	{
		printf("Output : %d", arr[i]);
	}
//	else if (count )
	

	return 0;
}
