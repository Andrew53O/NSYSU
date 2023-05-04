#include <iostream>
#include <cstdlib>
#include <time.h>



using namespace std;

char graph[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
int roundd = 1;


void display();
char detect();
int main(void)
{
	int num, computer_num;
	srand(time(NULL));
	
	while (true)
	{
		int coutt = 0;
		fflush(stdin);
		display();
		cout << "Round " << roundd << endl;
		cout << "player: " << endl;
		cin >> num;
		graph[num] = 'O';

		// to make sure computer have not the same number
		computer_num = num;

		for (int i =0; i < 9; i++)
		{
			if (graph[i] == 'O' || graph[i] == 'X')
			{
				coutt++;
			}
		
		}
		
		
		
		while(coutt < 9)
		{
		//cout << "hello" << endl;
		// check number
			if(num == computer_num)
			{
				computer_num = rand() % 9;
			}
			
			if(graph[computer_num] != 'O')
			{
				if(graph[computer_num] != 'X')
				{
					
					break;

				}
				else
				{
					computer_num = rand() % 9;
				}
			}
			else
			{
				computer_num = rand() % 9;
			}
			
			
			
		}
		
		graph[computer_num] = 'X';	
		char who = detect();
		
		if (who == 'X')
		{
			cout << "you lose!" << endl;
			break;
			
		}
		else if (who == 'O')
		{
			cout << "you win!" << endl;
			break;
		}
		else if (who == 'd')
		{
		
			cout << "draw" << endl;
			break;
		}
		else
		{
		
		}
		
		roundd++;
	}

	

	return 0;
}

void display()
{
	for (int i = 0 ; i < 9; i++)
	{
		cout << graph[i] << " ";
		if (i == 2 || i == 5 || i == 8)
		{
			cout << endl;
		}
	}
	
	cout << endl;


}

char detect()
{
	// manual
	// 8 posibbleliy
	char det = 'a';
	if (graph[0] == graph[3]  && graph[3] == graph[6])
	{
		det = graph[0];
	}
	else if (graph[1] == graph[4] && graph[4] == graph[7])
	{
		det = graph[1];
	}
	else if (graph[2] == graph[5] && graph[5] == graph[8])
	{
		det = graph[2];
	}
	else if (graph[0] == graph[1] && graph[1] == graph[2])
	{
		det = graph[0];
	}
	else if (graph[3] == graph[4] && graph[4] == graph[5])
	{
		det = graph[3];
	}
	else if (graph[6] == graph[7] && graph[7] == graph[8])
	{
		det = graph[6];
	}
	else if (graph[0] == graph[4] && graph[4] == graph[8])
	{
		det = graph[0];
	}
	else if (graph[2] == graph[4] && graph[4] == graph[6])
	{
		det = graph[2];
	}
	
	
	if (roundd == 5)
	{
		return 'd';
	}
	
	return det;
}


