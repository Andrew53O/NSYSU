#include "stdio.h"
#include "stdlib.h"
#include "time.h"

struct Student{
	//�Ǹ��B���Z�}�C�B�������Z�]double�^ 
};

void calculate(struct Student *student){
	// �p�⥭�����Z	
}

int main(void){
	srand(time(NULL));
	struct Student array[10];
	for(int index=0;index<10;index++){
		array[index].id = index+100;
		for(int scoreIndex=0;scoreIndex<3;scoreIndex++){
			array[index].scores[scoreIndex] = rand()%100;
		}
		array[index].average = 0;
	}
	for(int index=0;index<10;index++){
		calculate(&array[index]);
	}
	for(int index=0;index<10;index++){
		// �L�X�������Z 
		printf("�Ǹ� %d ���������Z�� %.2lf\n",array[index].id,array[index].average);
	}
	puts("");
}
