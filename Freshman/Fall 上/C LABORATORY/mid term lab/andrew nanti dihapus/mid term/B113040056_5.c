#include <stdio.h>


int main(void)
{
	int arr[100];
	int number;
	int i, j, k;
	
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
		//printf("isi array %d\n", arr[i]);
		
	}
	return 0;
}


