#include <stdio.h>
#include <time.h>
#include <ctype.h>
int main(void)
{
	int number, guess_number;

	srand(time(NULL));
	guess_number = rand() % 10 + 1;
	do
	{
		printf("Please guess a number (1-10):");
		scanf("%d", &number);
		
		if (number < 1 || number > 10)
		{
			
			printf("Out of range");
			return 0;
		}
		
		if(number == guess_number)
		{
			printf("Right answer");
		}
		else
		{
			printf("Wrong number\n");
		}
	}
	while(number != guess_number);
	
	
	return 0;
}
