#include <iostream>

using namespace std;


int digits(int);

int main(void)
{
	int num, score;
	char ans;
	do
	{
		cout << "Please input a number: "; cin >> num;

		int sum = digits(num);
	
		cout << "		sum = " << sum << endl;
		
		cout << "Again?(y for yes) "; cin >> ans;
	}
	while(ans == 'y');
	
	
	
	

	return 0;
}

int digits(int num)
{
	int total = 0;
	while(num != 0)
	{
		total += num % 10;
		num /= 10;
		
	}
	
	
	return total;
}

