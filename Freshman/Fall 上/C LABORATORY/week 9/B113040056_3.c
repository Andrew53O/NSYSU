#include <stdio.h>

int main(void)
{
	int i;
	char names[3][15];
	
	printf("Please input 3 string: \n");

	for (i = 0; i < 3; i++)
	{
		scanf("%s", names[i]);
	}
	
	printf("three strings:");
	for (i = 0; i < 3; i++)
	{
		printf("%s", names[i]);
		if (i < 2)
		{
			printf(",");
			
		}
	}
	
	printf("\nReverse:");
	for (i = 2; i >= 0; i--)
	{
		printf("%s", names[i]);
		if (i != 0)
		{
			printf(",");
		}
	}
	
	
	
	return 0;
}
