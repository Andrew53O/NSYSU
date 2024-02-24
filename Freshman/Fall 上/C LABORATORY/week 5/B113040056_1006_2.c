#include <stdio.h>
#include <time.h>

int main(void)
{
	int  number, random_number;
	int sum =0;
	int i = 1;
	printf("Please input a number (0~100):");
	scanf("%d", &number);
	
	if (number < 0 || number > 100)
	{
		printf("Please run the code again");
		return 0;
	}
	srand(time(NULL));
	
	for (i; i <= number; i++)
	{
		random_number = rand() % 500 + 1;
		
		printf("%d random number is:%3d\n", i, random_number);
		sum += random_number;
	}
	
	printf("The total of all is %d", sum);
	return 0;
}
