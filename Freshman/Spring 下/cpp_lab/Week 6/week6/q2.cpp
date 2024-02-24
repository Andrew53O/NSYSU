#include <iostream>

using namespace std;

char graph[10][10] = {" "};


void fill();
void display();


int main(void)
{
// init
	int row, col;
	fill();
	while(true)
	{
		display();
		cout << "row :"; cin >> row;
		if (row < 0)
		{
			cout << "End of system" << endl;
			break;
		}
		cout << "col :"; cin >> col;
		
		if (!(graph[row][col] == ' '))
		{
			cout << "Booking Eror" << endl;
			
		}
		else
		{
			graph[row][col] = 'o';
		}
	}
	
	

	return 0;
}

void fill()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			graph[i][j] = ' ';
		
		}
	}		

	for (int j = 8; j <= 9; j++)
	{
		for (int i = 0; i < 2; i++)
		{
			graph[i][i] = 'X';
			graph[j][i] = 'X';
			graph[i][j] = 'X';
			graph[j][j] = 'X';
			
			// haven't covered
			graph[1][0] = 'X';
			graph[0][1] = 'X';
			graph[9][8] = 'X';
			graph[8][9] = 'X';
		}
	}
	

}

void display()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << graph[i][j] << " ";
		
		}
		cout << endl;
	}	
	

}
