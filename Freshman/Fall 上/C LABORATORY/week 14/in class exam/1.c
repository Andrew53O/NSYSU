#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void swap(int *a, int *b){
	// �洫��� 
	
}

void sort(int array[],int size){
	// ��ܱƧǺt��k 
	
}


int main(void){
	srand(time(NULL));
	int array[10];
	puts("�Ƨǫe");
	for(int index=0;index<10;index++){
		array[index] = rand();
		printf("%d ",array[index]);
	}
	puts("");
	puts("�Ƨǫ�");
	sort(array,10);
	for(int index=0;index<10;index++){
		printf("%d ",array[index]);
	}
	puts("");
}
