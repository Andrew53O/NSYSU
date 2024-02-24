#include "stdio.h"
#include "stdlib.h"
#include "time.h"

struct Student{
	int id;
	int scores[3];
	double average;
};

void calculate(struct Student *student){
	int index;
	for(index = 0 ;index < 3; index++)
	{
		student->average += student->scores[index];
	}
	
	student->average/=3.0;
}

int main(void){
	int index, scoreIndex;
	
	srand(time(NULL));
	
	struct Student array[10];
	
	for(index=0;index<10;index++)
	{
		array[index].id = index+100;
		
		for(scoreIndex=0;scoreIndex<3;scoreIndex++)
		{
			array[index].scores[scoreIndex] = rand()%100;
		}
		
		array[index].average = 0;
	}
	
	for(index=0;index<10;index++)
	{
		calculate(&array[index]);
	}
	
	for(index=0;index<10;index++)
	{
		printf("Student ID %d average score is %.2lf\n",array[index].id,array[index].average);
	}
	puts("");
}

