#include <stdio.h>
#include <stdlib.h>

struct node
{
	char name[50];
	int score;
};

struct node file[3];


int main(void)
{
	int i;
	
	for (i = 0; i < 3; i++)
	{
		printf("Student %d name is :", i + 1);
		scanf("%[^\n]s", &file[i].name);
		fflush(stdin);
		printf("Student %d score is : ", i + 1);
		scanf("%d", &file[i].score);
		fflush(stdin);
	}

	printf("\n\nResult:\n");
	for(i = 0; i < 3; i++)
	{
		printf("Student %d name is %s\n",i + 1, file[i].name);
		printf("Student %d score is %d\n", i + 1 ,file[i].score);
	}

	return 0;
}



