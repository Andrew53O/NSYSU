#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int number;
	char charater;
	
	printf("Please enter a number:");
	scanf("%d", &number);
	fflush(stdin);
	printf("Please enter a charater:");
	scanf("%c", &charater);
	
	printf("I have %d %c\n", number, charater);
		
	system("pause");
	return 0;
}
