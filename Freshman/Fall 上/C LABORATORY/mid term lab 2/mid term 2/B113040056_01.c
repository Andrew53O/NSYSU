#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
	FILE *fptr = fopen("1.txt", "r");
	
	if (fptr == NULL)
	{
		printf("file not exist");
		return 0;
	}
	

	int count = 0;
	int indexx = 0;
	
	int num[100];
//	
//	while (feof(fptr))
//	{
//		
//	}
	
	do 
	{
		fscanf(fptr, "%d", &num[count]);
		
		
		if (num[count] == -1)
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
	
	
	int i;
	for (i = 0; i < count; i++)
	{
		//printf("num %d", num[i]);
	}
	int x = 1;
	printf("%d", x);
	
	int j;
	
	
	

	
	
	
	
	
	
	fclose(fptr);
	return 0;
}
