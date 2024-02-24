#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int *b, int *c)
{
	int temp;
	if (*a < *b && *b < *c)
	{
		return;
	}
	else if (*a > *b) // b or c is the smallest
	{
		if (*a > *c)
		{
			if (*b > *c) // c is the smallest
			{
				temp = *c;
				*c = *b;
				*b = temp;
			}
			else    // b is the smallest
			{
				temp = *a;
				*a = *b;
				*b = temp;
			}
			
			temp = *b;
			*b = *c;
			*c = temp;
			

		}
		
//		if (*b > *c)
//		{
//			if (*b > *a)
//			{
//				
//			}
//		}
	}
}

int main(void)
{

	int a, b, c;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	sort(&a,&b,&c);
	printf(" a = %d b = %d c = %d ",a,b,c);
}
