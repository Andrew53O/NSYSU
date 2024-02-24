#include <iostream>

using namespace std;



void who_wins(char, char);


int scoreP1 = 0, scoreP2 = 0;

int main(void)
{
	char player_one, player_two;
	
	char ans = 'n';
	do
	{
		
		cout << "Please enter either R)ock, P)aper, or S)cissors: "; cin >> player_one;
		cout << "Please enter either R)ock, P)aper, or S)cissors: "; cin >> player_two;
		
		who_wins(player_one, player_two);
		
		cout << "Player 1: " << scoreP1 << endl;
		cout << "Player 2: " << scoreP2 << endl;
		
		cout << "Play Again? Y/y continues, other quits: "; cin >> ans;
		
	}
	while(ans == 'y' || ans == 'Y');
	
	
	return 0;
}



void who_wins(char one, char two)
{
	int flag = 0;
	// filter the same
	if(one == two)
	{	
		cout << "No winner."<< endl;
		return;
	}	
	switch(one)
	{
		case 'R':
			if(two == 'S')
			{
				scoreP1++;
				flag = 1;
			}
			else if (two == 'P')
			{
				scoreP2++;
				flag = 2;
			}
			else
			{
				return;
			}
			break; // perlu ga ya ini?
			
		
		case 'P':
			if(two == 'S')
			{
				scoreP2++;
				flag = 2;
			}
			else if (two == 'R')
			{
				scoreP1++;
				flag = 1;
			}
			else
			{
				return;
			}
			break; // perlu ga ya ini?
		
		case 'S':
			if(two == 'R')
			{
				scoreP2++;
				flag = 2;
			}
			else if (two == 'P')
			{
				scoreP1++;
				flag = 1;
			}
			else
			{
				return;
			}
			break; // perlu ga ya ini?
		
		
		default:
			cout << "Please enter from R P and S"<< endl;
			return;
		
	}
	
	if(flag == 1)
	{
		cout << "Player 1 wins.\n";
		
	}
	else if (flag == 2)
	{
		cout << "Player 2 wins.\n";
	}
	
	return;
}
