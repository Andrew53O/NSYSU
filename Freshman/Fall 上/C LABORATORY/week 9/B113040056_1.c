#include <stdio.h>

int main(void)
{
	
	char arr_groot[] = "I am Groot";
	
	int index = 0;
	
	printf("%s\n", arr_groot);
	
	while(arr_groot[index] != '\0')
	{
		printf("The %d charaters : %c\n", index ,arr_groot[index]);
		index++;
	}
	
	
	return 0;
}
