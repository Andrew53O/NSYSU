#include <stdio.h>


int main(void)
{
	int arr[9] = {1,1,3,0,4,0,0,5,6};
	int sum = 0;
	int i, j;
	
	
	

	for (i = 0; i < 9; i++)
	{
		sum += arr[i];
	}
	
	sum = sum % 10;
	
	printf("Name : ¬x²z¤t\n");
	printf("Student ID : 113040056\n");
	printf("My secret code is %d", sum);
	
	
	return 0;
}
