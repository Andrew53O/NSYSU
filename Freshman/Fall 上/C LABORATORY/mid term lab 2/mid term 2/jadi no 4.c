#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int main(void)
{
	
	FILE *fptr = fopen("4.txt", "r");
	
	if (fptr == NULL)
	{
		printf("file not exist");
		return 0;
	}
	//int indexx = 0;
	char array[100];
	int count = 0;
	int indexx = 0;
	
	
//	printf("hello");
	
//	int i;
//	int indexx = 0;
//	for (i = 0; i < 100; i++)
//	{
//		//printf("berhasil");
//		while(feof(fptr))
//		{
//			printf("%d",fscanf(fptr, "%c", array ));
//			while(fscanf(fptr, "%c", *(array + indexx)) != '\n')
//			{
//				printf("hello\n");
//				printf("%d", indexx);
//				indexx++;
//			//fscanf(fptr, "%c", &array[i]);
//			}
//		}
//	}
//	
	

	
	
	int blabla = 0;
	while(1)
	{
		
		if (fscanf(fptr, "%c", &array[count]) != EOF)
		{
			if (array[count] == ' ')
			{
				blabla++;
			}
			count++;
		}
		break;
		//printf("%c\n", array[count]);
		//count++;
		
		
//		if (array[count] == 0)
//		{
//			indexx++;
//		}
		
		
		if (count > 100)
		{
			printf("erorr, stackoverflow");
			exit(0);
		}
		
		
		
	}
	
	printf("%d\n", count);
	//printf("\n\n\n indexx %d", indexx);
//	int length;
//	length = strlen(array);
//	printf("\n\nstrlen %d\n\n", length);
//	
//	
	
//	printf("\n\n\n\n\n\n new line\n\n");

	
	

	
//	while(fscanf(fptr, "%c", array) != '\n')
//	{
//		printf("loop baru\n");
//	}
	
	
	fclose(fptr);
	
	
	
	return 0;
}

