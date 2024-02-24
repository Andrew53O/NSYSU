#include <stdio.h>



int  main(void)
{
	char string[256];
	printf("inserted string :");
	scanf("%[^\n]s", &string);

	//printf("%s", string);
	char *pointer = string;
	
	int i = 0;
	while(*(pointer + i) != '\0')
	{
		i++;
	}
	int j = 0;
	printf("reversed string :");
	
	for (j = i - 1; j >= 0; j--)
	{
		printf("%c", (*(pointer + j)));
	}
	//printf("success");
	
	return 0;
}
