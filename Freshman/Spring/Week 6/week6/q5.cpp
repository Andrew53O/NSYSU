#include <iostream>
#include <ctime>
#include <time.h>
#define MAX 20	
#define X 5
#define Y 5
using namespace std;

int board[X][Y] = {};
int game[X][Y] = {};


/////////////////////////////////////// copy punya ko steven hehe ga cukpu waktunya

void init();
void populate();
int used(int, int);
void place_mine(int, int);
void show_mine();
void show();
int see(int, int);
int count_around(int, int);
int place(int, int);
int win();

int main(void)
{
	init();
	show_mine();

	
	int num, x, y;
	char choose;
	
	while(1)
	{
		show();
		cout<<"Choose the above options: "<<endl;
		cout<<"1(mine)  2(exit)"<<endl;
	
		while(1)
		{
			cin >> choose;
			if(choose == '2')
			{
				return 0;
			}
			else if(choose != '1')
			{
				cout<<"Input Error!"<<endl;
			}
			else
			{
				break;
			}
		}
		// check the input
		while(1)
		{
			cout<<"Enter (x,y): ";
			cin >> x;	
			cin >> y;
			if((y>Y || y<1)||(x>X || x<1))
			{
				cout<<"Input Error!"<<endl;				
				continue;
			}
			break;
		}

		
		if(place(x-1,y-1) == -1)
		{
			cout<<"You died!"<<endl;
			return 0;
		}

		if(win())
		{
			cout<<"Congratulation! You Win!"<<endl;
			return 0;
		}
	}
	
	
	
	return 0;
}


void init()
{
	int y, x;
	for(y=0;y<Y;y++)
	{
		for(x=0; x<X; x++)
		{
			game[x][y] = -1;
		}
	}
	populate();
}

int used(int x, int y)
{
	if(board[x][y] != 0)
	{
		return -1;
	}
	return 0;
}

void place_mine(int x, int y)
{
	board[x][y] = -1;
	return;
}

void populate()
{

	int x, y, i=0; 
	srand(time(NULL));
	while(i < MAX){
		x = rand()%5;
		y = rand()%5;
		if(!used(x,y)){
			place_mine(x,y);
			i++;			
		}
	}
	return;
}

void show_mine()
{
	int y, x;
	for(y = 0; y<Y;y++)
	{
		for(x = 0; x<X; x++)
		{
			if(board[x][y] == -1)
			{
				cout<<"X"<<"  ";
			}else if(board[x][y] == 0)
			{
				cout<<"O"<<"  ";
			}else
			{
				cout<<board[x][y]<<"  ";
			}
			
		}
		cout<<endl;
	}
	return;
}

void show()
{
	int x, y, num;
	for(y=0;y<Y;y++)
	{
		for(x=0;x<X;x++)
		{
			num = game[x][y];
			if(num == -1)
			{
				cout<<"   "<<"_"<<"   ";
			}else
			{
				cout<<"   "<<num<<"   ";
			}
			
		}
		cout<<endl;
	}
}

int see(int x, int y)
{
	if(x<0 || y<0)
	{
		return 0;
	}
	if(x>=X||y>=Y)
	{
		return 0;
	}
	if(board[x][y] == -1)
	{
		return 1;
	}
	return 0;
}

int count_around(int x, int y)
{
	int i=0;
	i += see(x-1,y-1);
	i += see(x-1,y);
	i += see(x-1,y+1);
	i += see(x,y-1);
	i += see(x,y+1);
	i += see(x+1,y-1);
	i += see(x+1,y);
	i += see(x+1,y+1);		
	return i;
}

int place(int x, int y)
{
	if(!see(x,y))
	{
		game[x][y] = count_around(x, y);
		return 0;
	}else
	{
		return -1;
	}
}

int win()
{
	int y, x, count=0, mines=0;
	mines = (X*Y)-MAX;
	for(y=0; y<Y; y++)
	{
		for(x=0; x<X; x++)
		{
			if(game[x][y]!=-1)
			{
				count++;
			}
		}
	}
	if(count == mines)
	{
		return 1;
	}
	return 0;
}
