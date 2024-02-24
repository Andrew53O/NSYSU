#include <stdio.h>

int main(void)
{
	char array[5] = {'a', 'b', 'c', 'd', 'e'};
	
	char *pointer = array;
	
	int i;
	
	for (i = 0; i < 5; i++)
	{
		printf("Value of array 1: %c \n", *(pointer + i));
		printf("adress of array 1: %p \n", &array[i]);
		printf("adress that pointed by pointer 1 %p\n", pointer+i);
		printf("\n");
	}
	
}
