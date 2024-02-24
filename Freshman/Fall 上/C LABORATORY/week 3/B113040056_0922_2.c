#include <stdio.h>
#include <stdlib.h> 

int main (void)
{
	char letter;
	
	printf("Input a letter:");
	scanf("%c", &letter); // save the charater with %c
	
	printf("\nASCII code of %c is %d",letter , letter); // print the letter and the number using d;
	
	
	
	return 0;
}
