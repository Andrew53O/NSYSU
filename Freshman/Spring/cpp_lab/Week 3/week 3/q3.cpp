#include <iostream>

using namespace std;

int main(void)
{
	int num, total = 1;
	
	cout << "PLease input a number: "; cin >> num;
	
	for (int i = 1; i <= num; i++)
	{
		total = total * i;
	}

	cout << num<< "! = " << total << endl;

	return 0;
}

