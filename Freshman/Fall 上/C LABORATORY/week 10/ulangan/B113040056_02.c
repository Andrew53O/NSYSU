#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char string[100];
	char string2[100];
	char string3[100];
	
	FILE *fptr = fopen("phone.txt", "w");
	
	printf("Name :");
	scanf("%s", string);
	fprintf(fptr, "Name :%s", string);
	fprintf(fptr,"\n");
	
	
	
	fflush(stdin);
	printf("Telephone :");
	scanf("%s", &string2);
	fprintf(fptr, "Telephone : %s", string2);
	fprintf(fptr,"\n");
	
	fflush(stdin);
	printf("Addresss :");
	scanf("%s", string3);
	fprintf(fptr, "Addresss :%s", string3);
		fprintf(fptr,"\n");
	
	
	
	
	
	
	fclose(fptr);
		
	
	
	return 0;
}
