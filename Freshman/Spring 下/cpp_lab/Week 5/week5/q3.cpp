#include <iostream>

using namespace std;


void order();
void order(char);


int  main(void)
{
	char ans1, ans2;
	cout << "Would you like to have today's special? (y/n): "; cin >> ans1;
	
	if (ans1 == 'y')
	{
		order();
	}
	else if (ans1 == 'n')
	{
		cout << "What would you like to order?(A/B): "; cin >> ans2;
		order(ans2);
		
	}
	else
	{
		cout << "wrong input" <<endl;
	}

	return 0;
}


void order()
{
	cout << "steak" << endl;
}

void order(char aOrB)
{
	if(aOrB == 'A')
	{
		cout << "pork chop" << endl;
	
	}
	else if (aOrB == 'B')
	{
		cout << "chichken steak" << endl;
	
	}

}
