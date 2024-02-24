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
	int brp = 0;
	int sementara = 0;
	while(fscanf(fptr, "%c", &array[count]) != EOF)
	{
		if (array[count] == '\n')
		{
			count++;
			//printf("count %d", count);
			count = 0;
			brp++;
			sementara = brp; // harusnya 5 ga si
			printf("%d\n", brp); // ke print 5 diakhir
			
			
			brp = 0;
			
		}
		else if (array[count] == ' ')
		{
			count++;
			//printf("count %d", count);
			brp++;
			printf("%d", brp);
		}
		//printf("%c\n", array[count]);
		
		//indexx++;
//		if (array[count] == ' ');
//		{
//			printf("a");
//			//printf("ada spaci\n");
//			//printf("tambah 1");
//		}
		count++;
		if (count > 100)
		{
			printf("erorr, stackoverflow");
			exit(0);
		}
		
	
	}
	printf("semen %d", sementara); 
	//printf("\n%d\n", count);
//	printf("\n\n\n indexx %d", indexx);
	
//	while(fscanf(fptr, "%c", &array[count]) != EOF)
//	{
//		printf("%c\n", array[count]);
//		count++;
//		
//		
////		if (array[count] == 0)
////		{
////			indexx++;
////		}
//		
//		
//		if (count > 100)
//		{
//			printf("erorr, stackoverflow");
//			exit(0);
//		}
//		
//		
//		
//	}
	

//	int length;
//	length = strlen(array);
//	printf("\n\nstrlen %d\n\n", length);
//	
//	
	
////	printf("\n\n\n\n\n\n new line\n\n");
//	printf("\n\n\n");
//	int i;
//	int berhasil = 0;
//	for (i = 0; i < count; i++)
//	{
//		if (array[i] == ' ')
//		{
//			berhasil++;
//		}
//		if (array[i]== '\n'); // all char is now with \n;
//		{
//			//printf("ketintung ga sekarng");
//			//printf("%c", array[i]);
//		}
//		//printf("%c", array[i]);
//	}
//	printf("berhasil %d", berhasil + 1);
//	
	
//	while(fscanf(fptr, "%c", array) != '\n')
//	{
//		printf("loop baru\n");
//	}
	
	
	fclose(fptr);
	
	
	
	return 0;
}

