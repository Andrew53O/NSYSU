#include <iostream>
#include <typeinfo>

using namespace std;

int main(void)
{
// scientist 10 grams of caffeine at once is overdose

	int caffeine;
	cout << "Please input the caffeine in a drink (miligrams) : "; cin >> caffeine;

	int cups = 100/ caffeine;
	
	// how to know the type of a variable, using typeinfo library
	//cout << typeid(cups).name() <<endl;
	
	cout << "If you drink "<< cups << " of the drink you would likely die from caffeine overdose"<<endl;

	return 0;
}

