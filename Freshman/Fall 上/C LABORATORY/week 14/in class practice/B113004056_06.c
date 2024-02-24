#include <stdio.h>
#include <stdlib.h>

//*int three_num;
void create()
{

	int *new = malloc(sizeof(int[3]));
	int i;
	
	for (i = 0; i < 3; i++)
	{
		printf("Please input the %d number :", i + 1);
		scanf("%d", &new[i]);
	}
	//printf("hello");
	
	printf("first number : %d\nsecond number : %d\nthird number %d\n", new[0], new[1], new[2]);
	free(new);
	
}

int main(void)
{
	create();
	
	//printf("hello");

	//printf("first number : %d\nsecond number : %d\nthird number %d\n", three_num[0], three_num[1], three_num[2]);

	return 0;
}



