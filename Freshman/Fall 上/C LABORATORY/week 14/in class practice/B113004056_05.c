#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct node
{
	char name[50];
	int age;
	int money;
	int debt;
};

void starting(struct node *person)
{
	strcpy(person->name, "");
	person->age = 0;
	person->money = 0;
	person->debt = 0;


}

void input(struct node *person, char *name)
{
	strcpy(person->name, name);
	person->age = rand() % 51 + 10;
	person->money = rand() % 150001 + 150000;
	person->debt = rand() % 50001 + 50000;
	
}

int main(void)
{
	srand(time(NULL));
	
	struct node person1;
	starting(&person1);
	
	char name[50];
	printf("Your name is :");
	scanf("%[^\n]s", name);
	
	input(&person1, name);


	printf("Name :%s\nage :%d\nmoney :%d\ndebt : %d", person1.name, person1.age, person1.money, person1.debt);

	return 0;
}



