#include <stdio.h>
#include <stdlib.h>


struct node
{
	char name[30];
	int score;
};

struct node person1;


int main(void)
{
	printf("Your name is :");
	scanf("%s", &person1.name);

	printf("Your score is : ");
	scanf("%d", &person1.score);
	
	
	printf("\n");
	printf("Your name is %s\n", person1.name);
	printf("Your score is %d\n", person1.score);


	return 0;
}



