#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 20

void printArr(int arr[]);

int main()
{
 int arr[SIZE], i, j, temp, count=0;
 srand(time(NULL));
 
 for(i=0;i<SIZE;i++)
  arr[i]=rand()%200+1;
  
 for (i = 0; i < SIZE - 1; i++)
 {
  temp = arr[i];
  for (j = 1; j < SIZE - count; j++)
  {
   if (temp > arr[j])
   {
    temp = arr[j];
    arr[j] =arr[i];
    arr[i] = temp;
   }
   
   printArr(arr);
  }
  count++;
 }
 
 return 0;
}

void printArr(int arr[])
{
 int i;
 for(i=0;i<SIZE;i++)
  printf("%d ",arr[i]);
 printf("\n");
}
