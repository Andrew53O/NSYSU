#include <stdio.h>

int main(void)
{
	
	FILE *file_pointer = fopen("text2.txt", "w");
	
	
	fputs("Example writing from file", file_pointer);
	fputs("Successfully", file_pointer);
	
	
	
	fclose(file_pointer);
	
	printf("Check the file. Thank you");
	return 0;
}
