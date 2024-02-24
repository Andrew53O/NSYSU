#include <stdio.h>
#include <string.h>

int main(void)
{
	char sentence[500000];
	
	printf("Input :");
	scanf("%s", sentence);
	
	int digits = 0;
	
//	while (number != 0)
//	{
//		number /= 10;
//		digits++;
//	}
//	
//	printf("digits %d", digits);
//	char arr[digits];
//	int i;
//	for (i = 0; i < digits; i++)
//	{
//		
//	}
//	
	int i, j;
	int same_digit;
	int index = 0;
	int count = 0;
	for (i = 0; i < 5000; i++)
	{
		printf("%c ", sentence[i]);
		
		if (sentence[i] == NULL)
		{
			break;
		}
		count++;
	}
	printf("count == %d\n", count);
	
	char sentence2[count];
	
	for (j = count - 1; j >= 0; j--)
	{	
	
		if (sentence[j] == sentence[index])
		{
			printf("hello j %c world %c ", sentence[j], sentence[index]);
			same_digit++;
		}
		index++;
//		printf("\nj%d\n", j);
//		
//		
//		printf("index%d\n", index);
//		printf("charater|%c|\n", sentence[index]);
//		strcpy(sentence2[j], sentence[index]);//sentence2[j] == sentence[index];
//		printf("charater  yang paling penting |%c|\n", sentence2[j]);
//		index++;
	}
	
	if (same_digit == count)
	{
		printf("Output : true");
		
	}
	else 
	{
		printf("Output : false");
	}
	
	//stringcomp
	//strcmp(
	
	return 0;
}


