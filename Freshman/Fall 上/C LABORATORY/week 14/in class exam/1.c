#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void swap(int *a, int *b){
	// 交換整數 
	
}

void sort(int array[],int size){
	// 選擇排序演算法 
	
}


int main(void){
	srand(time(NULL));
	int array[10];
	puts("排序前");
	for(int index=0;index<10;index++){
		array[index] = rand();
		printf("%d ",array[index]);
	}
	puts("");
	puts("排序後");
	sort(array,10);
	for(int index=0;index<10;index++){
		printf("%d ",array[index]);
	}
	puts("");
}
