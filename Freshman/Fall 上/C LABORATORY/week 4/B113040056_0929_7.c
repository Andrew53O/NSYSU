#include <stdio.h>

int main(void)
{
	int number, second_digit, first_digit;
	 
	printf("Plase enter a two digit number:");
	scanf("%d", &number);
	
	if (number < 10 || number > 99 )
	{
		printf("It is out of range");
		return 0;
	}
	
	second_digit = number/10;
	first_digit = number % 10;
	
	printf("English name is: ");
	
	if (number < 20)
	{
		switch(number)
		{
		case 11:
			printf("Eleven");
			break;
		case 12:
			printf("Twelve");
			break;
		case 13:
			printf("Thirteen");
			break;
		case 14:
			printf("Fourteen");
			break;
		case 15:
			printf("Fifteen");
			break;
		case 16:
			printf("Sixteen");
			break;
		case 17:
			printf("Seventeen");
			break;
		case 18:
			printf("Eighteen");
			break;
		case 19:
			printf("Nineteen");
			break;
		
		}
		return 0;
	}
	
	
	

	switch(second_digit)
	{
		case 2:
			printf("twenty");
			break;
		case 3:
			printf("thirty");
			break;
		case 4:
			printf("fourty");
			break;
		case 5:
			printf("fifty");
			break;
		case 6:
			printf("sixty");
			break;
		case 7:
			printf("seventy");
			break;
		case 8:
			printf("eighty");
			break;
		case 9:
			printf("ninety");
			break;
		
	}
	
	switch (first_digit)
	{
		case 1:
			printf("-one");
			break;
		case 2:
			printf("-two");
			break;
		case 3:
			printf("-three");
			break;
		case 4:
			printf("-four");
			break;
		case 5:
			printf("-five");
			break;
		case 6:
			printf("-six");
			break;
		case 7:
			printf("-seven");
			break;
		case 8:
			printf("-eight");
			break;
		case 9:
			printf("-nine");
			break;
	}
	
	
	return 0;
}
