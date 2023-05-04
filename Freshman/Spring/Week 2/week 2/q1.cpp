#include <iostream>


using namespace std;



int main(void)
{
	int number = 0;
	cout << "Please Enter an integer :";
	cin >> number;
	
	
	if (number != 0)
	{
		if (number % 2 == 0)
		{
			cout << number << " is even !\n";
		}
		else
		{
			cout << number << " is odd !\n";
		
		}
	}
	else
	{
		cout << number << " is odd !\n";
	}
	


}
