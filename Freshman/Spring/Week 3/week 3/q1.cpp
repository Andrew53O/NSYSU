#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int par, score;
	string name;
	cout << "Par : "; cin >> par;
	cout << "Your score: "; cin >> score;
	
	int result = score - par;
	
	switch(result)
	{
	
		case(-2):
			name = "Eagle";
			break;
		case(-1):
			name = "Birdie";
			break;
		case(0):
			name = "Par";
			break;
		case(1):
			name = "Bogey";
			break;
		case(2):
			name = "Doble Bogey";
			break;
			
	}
	

	cout << "You got " << name<< endl;
	
	

	return 0;
}

