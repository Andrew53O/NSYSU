#include <iostream>

using namespace std;

int main(void)
{
	int *p1, *p2, *p3, i1 = 8, i2 = 10, i3 = 12;
	p1 = &i1;
	p2 = &i2;
	p3 = &i3;
	
	cout << "Value of *p1 is " << *p1 << "    , address p1 at : " << p1 <<endl;
	cout << "Value of *p2 is " << *p2 << "    , address p1 at : " << p2 <<endl;
	cout << "Value of *p3 is " << *p3 << "    , address p1 at : " << p3 <<endl;
	
	i1 = i2; cout << "When we let i1 = i2........" << endl;
	cout << "Value of *p1 is " << *p1 << "    , address p1 at : " << p1 <<endl;
	cout << "Value of *p2 is " << *p2 << "    , address p1 at : " << p2 <<endl;
	cout << "Value of *p3 is " << *p3 << "    , address p1 at : " << p3 <<endl;

	p1 = p3; cout << "When we let p1 = p3........ " << endl;
	cout << "Value of *p1 is " << *p1 << "    , address p1 at : " << p1 <<endl;
	cout << "Value of *p2 is " << *p2 << "    , address p1 at : " << p2 <<endl;
	cout << "Value of *p3 is " << *p3 << "    , address p1 at : " << p3 <<endl;

	*p3 = *p2; cout << "When we let *p3 = *p2........" << endl;
	cout << "Value of *p1 is " << *p1 << "    , address p1 at : " << p1 <<endl;
	cout << "Value of *p2 is " << *p2 << "    , address p1 at : " << p2 <<endl;
	cout << "Value of *p3 is " << *p3 << "    , address p1 at : " << p3 <<endl;
	
	p2 = p1; cout << "when we let p2 = p1 ..... " << endl;
	cout << "Value of *p1 is " << *p1 << "    , address p1 at : " << p1 <<endl;
	cout << "Value of *p2 is " << *p2 << "    , address p1 at : " << p2 <<endl;
	cout << "Value of *p3 is " << *p3 << "    , address p1 at : " << p3 <<endl;

	return 0;
}
