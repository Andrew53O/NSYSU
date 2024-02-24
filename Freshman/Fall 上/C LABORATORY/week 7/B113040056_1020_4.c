#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main(void)
{
	
	int i,j,k, random_number,searched_number, random_guess;
	int arr[20];
	srand(time(NULL));
	
	printf("Linear Search:\n");
	printf("Numbers : ");
	for (i = 0; i < SIZE; i++)
	{
		random_number = rand() % 15 + 1;
		printf("%d ", random_number);
		arr[i] = random_number;
	}
	printf("\nSearch for number :");
	random_guess = random_number = rand() % 15 + 1;
	printf("%d\n", random_guess);
//	scanf("%d", &searched_number);
	
	printf("Your searched number is  ");
	for (j = 0; j < SIZE; j++)
	{
		if (arr[j] == random_guess)
		{
			printf("%d ", j + 1);
		}
		
	
	}
	
	return 0;
}
	
	
	
	
	
	
