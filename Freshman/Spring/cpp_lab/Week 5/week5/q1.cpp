#include <iostream>

using namespace std;

void swap_value(int a , int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << a << " " << b << endl;
}

void swap_reference (int& a, int& b)
{

	int temp = a;
	a = b;
	b = temp;

	cout << a << " " << b << endl;
}

int  main(void)
{
	int a, b;
	cout << "Enter two numbers:" << endl;
	cin >> a >> b;
	
	cout << "Your initial numbers :" << a << " " << b;
	
	cout << "\n\nIn swap_value function :"; 
	swap_value(a,b); 
	cout << "In main function (after swap_value):" << a << " " << b;
	
	cout << "\n\nIn swap_ref function :";
	swap_reference(a,b);
	cout << "In main function (after swap_reference):" << a << " " << b << endl;

	return 0;
}
