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
	
	while(fscanf(fptr, "%c", &array[count]) != EOF)
	{
		//printf("%c\n", array[count]);
		count++;
		//indexx++;
		
		if (count > 100)
		{
			printf("erorr, stackoverflow");
			exit(0);
		}
	
	}
	
	int i;
	
	for (i = 0; i < count; i++)
	{
		//printf("%c", array[i]);
	}
	
	printf("%d", count);
	
	
	fclose(fptr);
	
	
	
	return 0;
}

