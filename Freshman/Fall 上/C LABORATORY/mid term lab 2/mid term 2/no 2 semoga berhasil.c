#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int main(void)
{
	
	FILE *fptr = fopen("2.txt", "r");
	
	if (fptr == NULL)
	{
		printf("file not exist");
		return 0;
	}
	
	char array[100];
	int count = 0;
	fscanf(fptr, "%d", array);
	
	printf("%d", array);

	
	
	
	fclose(fptr);
	
	
	
	return 0;
}

