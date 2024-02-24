#include <stdio.h>
#include <string.h>

int main(void)
{
	char sentence[500000];
	
	printf("Input :");
	scanf("%s", sentence);
	
	int digits = 0;
	
	int i, j, k;
	int same_digit = 0;
	int index = 0;
	int count = 0;
	for (i = 0; i < 5000; i++)
	{
		//printf("%c ", sentence[i]);
		
		if (sentence[i] == NULL)
		{
			break;
		}
		count++;
	}
	//printf("count == %d\n", count);
	
	char sentence2[count];
	for (j = count - 1; j >= 0; j--)
	{	
	
		if (sentence[j] == sentence[index])
		{
			//printf("hello j %c world %c ", sentence[j], sentence[index]);
			same_digit++;
		}
		index++;

	}
	//printf("same diggit %d", same_digit);
	if (same_digit == count)
	{
		printf("\nOutput : true\n\n");
		printf("Explanation : %s reads as %s from the left to right and from right to left.", sentence, sentence);
		return 0;
	}
	else if (count > 2 && same_digit != count)
	{
		printf("\nOutput : false\n\n");
		printf("Explanation : From left to right, it read %s. From right to left, it becomes", sentence);
		for (k = count; k >= 0; k--)
		{
		
			printf("%c", sentence[k]);
		}
	 	printf(" Therefore it is not a palindrome.");
	}
	else
	{
		printf("\nOutput : false\n\n");
		printf("Reads");
		for (k = count; k >= 0; k--)
		{
		
			printf("%c", sentence[k]);
		}
		printf(" from right to left. Therefore it is not a palindrome");
	}

	
	return 0;
}


