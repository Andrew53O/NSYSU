#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int main(void)
{
	
	FILE *fptr = fopen("3.txt", "r");
	
	if (fptr == NULL)
	{
		printf("file not exist");
		return 0;
	}
	
	int array1[100];
	int array2[100];
	
	int count = 0;
	do 
	{
		fscanf(fptr, "%d", &array1[count]);
		
		
		if (array1[count] == -1)
		{
			//fscanf(fptr, "%d\r", &num[count]);
			break;
		}
		count++;
		if (count > 100)
		{
			printf("erorr, stackoverflow");
			exit(0);
		}
	}
	while(1);
	
	fclose(fptr);
	
	printf("%d", array1[1]);
	
	return 0;
}

