#include <iostream>
#include <string>
#include <cstring>


using namespace std;


void prompt();


int main(void)
{
	prompt();
	char first_char;
	
	first_char = cin.peek();
	double number = 0;
	if(first_char == 'U' || first_char == 'T')
	{
	
		cin.ignore(3);
		cin >> number;
		
		cout << number << endl; 
		
		if(first_char == 'U')
		{
			cout << "Convert USD to TWD : TWD " << (number * 30) << endl; 
		}
		else
		{
			cout << "Convert TWD to USD : USD " << (number/30) << endl;
		}
	}
	else
	{
		cout << "The currency you input is not provided." << endl;
	}
	
	return 0;	
}

void prompt()
{
	cout << "Welcome to Currency Exchange System. We accept USD and TWD: " << endl;
}
