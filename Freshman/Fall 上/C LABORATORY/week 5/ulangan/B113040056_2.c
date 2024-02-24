#include <stdio.h>
#include <time.h>



int main(void)
{
	int number, guess_number;
	int lower = 1;
	int upper = 99;
	int base_lower, base_upper;
	
	
	srand(time(NULL));
	guess_number = rand() % upper + lower;
	printf("guess number %d", guess_number);

	do
	{
		printf("Please guess the number, range of %d ~ %d : ", lower, upper);
		scanf("%d", &number);
		
		if (number < 1 || number > 99)
		{
			printf("Out of range");
			return 0;
		}
		
		if (number < guess_number)
		{
			
			lower = number;
			if(guess_number < lower)
			{
				lower = number;
				continue;
			}
		}
		if (number > guess_number)
		{
			
			upper = number;
			if(guess_number > lower)
			{
				upper = number;
				continue;
			}
		}
		
		if (number == guess_number)
		{
			printf("Right answer");
		}
		
		
	}
	while (number != guess_number);
		
	
	FILE *ptr
	return 0;
}
