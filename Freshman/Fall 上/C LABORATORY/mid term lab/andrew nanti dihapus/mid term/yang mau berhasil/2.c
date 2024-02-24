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
		for (j = 1; j < count -1; j++)
		{
			
		if (arr[i] == arr[i + j])
		{
			printf("hello");
			printf("arr%d", arr[i]);
		
		}
		}
		
	}
	
	
//	for (j = 0; j < count; j++)
//	{
//		
//		for (k = 0; k < count - 1; k++)
//		if (arr[j] == arr[j + k])
//		{
//			printf("arr[j]%d\n", arr[j] );
//			printf("arr[j + k]%d\n", arr[j + k] );
//			same_flag += 1;
//		}
//		
//	}
	
	
//	for ( j = 0; j < count; j++)
//	{
//		for (k = j + 1; k < count - 1; k++)
//		{
//			if (arr[k] != arr[j])
//			{
//				different_flag++;
//				printf("different%d\n", different_flag);
//				printf("yang beda%d", arr[k]);
//			}
//			else if (arr[k] == arr[k+1])
//			{
//				same_flag++;
//				printf("same%d\n", same_flag);
//			}
//		}
//		
//	}
//	printf("isinya%d", arr[1]);
	
	
//	for (j = 0; j < count; j++)
//	{
//		for (k = 0 + 1; k < count - 1; k++)
//		{
//			if (arr[k] == arr[j])
//			{
//				printf("%d", arr[k]);
//				
//			}
//			
//		}
//		
//		
//	}
//	
	
	return 0;
}
