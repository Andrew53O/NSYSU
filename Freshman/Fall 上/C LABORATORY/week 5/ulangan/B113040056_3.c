#include <stdio.h>

int main (void)
{
	int i,j= 0;
	int base = 1;
	int upper, blank;
	int height;
	
	printf("Please input height of the triangle:");
	scanf("%d", &height);
	
	upper = 2 * height - 1;
	blank = upper;
	
	for (i = 1; i <= height; i++)
	{
		for (j = 0; j < upper; j++)
		{
			if (j == blank/2 )
			{
				printf("*");
				blank -=2;
			}
			else if (j + (2 * i) == blank/2)
			{
				printf("-");
				
			}
			else
			{
				printf("(");
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
