#include <iostream>

using namespace std;

int main(void)
{
	int month, total = 0;
	cout << "PLease input the month :"; cin >> month;
	
	
	switch(month)
	{
		case(1):
			total += 31;
		case(2):
			total += 28;
		case(3):
			total += 31;
		case(4):
			total += 30;
		case(5):
			total += 31;
		case(6):
			total += 30;
		case(7):
			total += 31;
		case(8):
			total += 31;
		case(9):
			total += 30;
		case(10):
			total += 31;
		case(11):
			total += 30;
		case(12):
			total += 31;

		default:
			cout << "Enter the correct month";
	}
	

	cout << total << " days left this month" << endl;
	
	

	return 0;
}

