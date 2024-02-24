#include <stdio.h>

int main(void)
{
	int i;
	char arr_printf[50];
	
	printf("Please input a string : ");
	scanf("%s", arr_printf);
	
	for (i = 0; i < 3; i++)
	{
		printf("The string: %s\n", arr_printf); // ampe space stop
	}
	
	
	printf("===========================\n");
	fflush(stdin);
	//char arr_printf[50];
	printf("Please input a string : ");
	gets(arr_printf);
	
	for (i = 0; i < 3; i++)
	{
		puts("The string: ");
		puts(arr_printf);
		//puts("\n");
	}
	
	
	
	return 0;
}
