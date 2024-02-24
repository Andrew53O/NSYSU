#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char alphabet;
	scanf("%c", &alphabet);
	
	alphabet = alphabet + 'a'- 'A';
	printf("%c", alphabet );
	
	return 0;
}
