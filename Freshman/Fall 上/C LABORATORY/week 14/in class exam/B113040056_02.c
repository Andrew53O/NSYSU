#include "stdio.h"
#include "stdlib.h"
#include "time.h"

struct Student{
	int id;
	double average;
	int scores[3];
};

void calculate(struct Student *student){
	
	// calculate
	student->average = (student->scores[0] + student->scores[1] + student->scores[2]) /3.0;
	
}

int main(void){
	srand(time(NULL));
	struct Student array[10];
	int index;
	
	
	for(index=0;index<10;index++){
		
		array[index].id = index+100;
		
		int scoreIndex;
		
		for(scoreIndex = 0; scoreIndex < 3;scoreIndex++){
			
			array[index].scores[scoreIndex] = rand()%100;
		}
		array[index].average = 0;
	}
	
	
	for(index=0;index<10;index++){
		
		calculate(&array[index]);
	}
	
	
	for(index=0;index<10;index++){
		// print hasil nilai
		
		printf("Student id %d average score %.2lf\n",array[index].id,array[index].average);
	}
	puts("");
}
