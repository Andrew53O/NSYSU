#include <stdio.h>

#define LENGTH 11

int middling(int low, int high)
{
	int number;
	number = (low + high) / 2 ;
	
	return number; 
}

int main(void)
{
	int i,j,k, searched_number, middle, position;
	int bottom = 1;
	int upper = 11;
	int array[LENGTH] = {2, 5, 8, 12, 13, 18, 21, 29, 37, 49, 97};
	
	printf("Binary Search\n");
	printf("Number :");
	for (j = 0; j < LENGTH; j++)
	{
		printf("  %d", array[j]);
	}
	
	printf("\nSearch number :");
	scanf("%d", &searched_number);
	
	middle = middling(bottom, upper);
//	while (searched_number != array[middle - 1])
//	{
	
		if (array[middle - 1] == searched_number)
	{
		printf("your searched number is at position %d", middle);
		return 0;
	} 
	
	printf("Rest of File: ");
	for (j = bottom - 1; j < upper; j++)
	{
		// rest the file sisanya
		printf("  %d", array[j]);
	}
	
	for (i = bottom - 1; i < upper; i++)
	{
		if (array[i] == searched_number)
		{
			position = i;
		}
		
	}
	
	if (position < middle)
	{
		upper = middle - 1;
		
	}
	else if (position > middle)
	{
		bottom = middle;
	}
	

	printf("  Middle number: %d, position %d", array[middle - 1], middle);
	
	///////////////////////////////////////////////////////////////////////////
	
		middle = middling(bottom, upper);
	
		if (array[middle - 1] == searched_number)
	{
		printf("your searched number is at position %d", middle);
		return 0;
	} 
	
	printf("\nRest of File: ");
	for (j = bottom - 1; j < upper; j++)
	{
		// rest the file sisanya
		printf("  %d", array[j]);
	}
	
	for (i = bottom - 1; i < upper; i++)
	{
		if (array[i] == searched_number)
		{
			position = i;
		}
		
	}
	
	if (position < middle)
	{
		upper = middle - 1;
		
	}
	else if (position > middle)
	{
		bottom = middle;
	}

	printf("  Middle number: %d, position %d", array[middle - 1], middle);
	
	/////////////////////////////
	
	
//	printf("\nRest of File: ");
//	if (position < middle)
//	{
//		for (i = 0; i < middle - 1; i++)
//		{
//			printf("  %d", array[i]);
//		}
//	}
//	else if (position > middle)
//	{
//		for (i = middle; i < upper; i++)
//		{
//			printf("  %d", array[i]);
//			
//		}
//	
//	}
//	else 
//		printf("Your searched number is at %d ", position);
//		
//	bottom = middle	;
//
//	
//	//printf("\n%d ", position + 1);
//	middle = middling(bottom, upper);
//	printf("  Middle number: %d, position %d", array[middle ], middle - 5);
//	
	return 0;
}
