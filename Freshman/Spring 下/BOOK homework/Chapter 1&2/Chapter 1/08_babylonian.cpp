#include <iostream>
#include <iomanip> // input output manipulation

using namespace std;

int main(void)
{
	double n;
	
	cout << "input a number for n : "; cin >> n;
	
	
	// babylonion algorithm
	double result;
	double guess = n/2;
	double r;
	for (int i = 0; i < 5; i++)
	{
		r = n/guess;
		guess = (guess+r)/2;

	}
	cout << guess;
	// using other library to use "setprecision" function
	cout << "\nsquare root of " << setprecision(3) << n << " is " << guess;

	return 0;
}

