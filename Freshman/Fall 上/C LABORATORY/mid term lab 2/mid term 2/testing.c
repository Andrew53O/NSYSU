#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int main(void)
{
	
	FILE *fptr = fopen("testing.txt", "r");
	
	if (fptr == NULL)
	{
		printf("file not exist");
		return 0;
	}
	
	int array[100];
	
	fread(array, 5, 100, fptr);
	
	printf("%s", array);
	
	printf("|%c|\n\n\n\n", array[4]);
	
	
	int count = 0;
	int i = 0;
	while(array[i] != 0)
	{
		if (array[i] == '\n')
		{
			count++;
		}
		i++;
	}
	
	
	
	printf("count %d\n", count);
	
	return 0;
}

