#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{
	
	
	int x_axis, y_axis;
	printf("Please input coordinate : ");
	scanf("%d %d", &x_axis, &y_axis);
	
	
	int x1, x2, x3, x4, y1, y2, y3, y4;
	
	x1 = x_axis - 2;
	x2 = x_axis - 2;
	x3 = x_axis + 2;
	x4 = x_axis + 2;
	
	y1 = x_axis - 2;
	y2 = x_axis + 2;
	y3 = x_axis + 2;
	y4 = x_axis - 2;
	printf("square coordinates : (%d, %d) (%d, %d) (%d, %d) (%d, %d)", x1, y1, x2, y2, x3, x4, y3, y4);
	
	
	srand(time(NULL));
	
	int arr_x[5];
	int arr_y[5];
	
	int i;
	
	for (i = 0; i < 5; i++)
	{
		arr_x[i] = rand ()% 21;
		arr_y[i] = rand ()% 21;
	}
	
	printf("\nproduce coordinate :\n");
	
	
	for (i = 0; i < 5; i++)
	{
		if (arr_x[i]  < x1|| arr_x[i] > x3 || arr_y[i] < y1 || arr_y[i] > y3)
		{
			printf("(%d, %d) is in outter\n", arr_x[i], arr_y[i]);
		}
		else if (arr_x[i]  == x1|| arr_x[i] == x3 || arr_y[i] == y1 || arr_y[i] == y3)
		{
			printf("(%d, %d) is in the line\n", arr_x[i], arr_y[i]);
		}
		else if ((arr_x[i]  >= x1|| arr_x[i] <= x3) || (arr_y[i] >= y1 || arr_y[i] <= y3))
		{
			printf("(%d, %d) is in inside\n", arr_x[i], arr_y[i]);
		}
	}
	
	
	return 0;
}
