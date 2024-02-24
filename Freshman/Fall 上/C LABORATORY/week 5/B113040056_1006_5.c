#include <stdio.h>
#include <time.h>

int main(void)
{
	int height, width, i, j;
	
	srand(time(NULL));
	
	height = rand() % 10 + 1;
	width = rand() % 10 + 1;
	
	printf("Height : %d Width : %d\n", height, width);
	
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			printf("* ");
			
		}
		printf("\n");
	}
	
	return 0;
}
