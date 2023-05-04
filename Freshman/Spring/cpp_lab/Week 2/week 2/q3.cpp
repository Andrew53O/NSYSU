#include <iostream>
using namespace std;





int main(void)
{
	int a, b,c, temp;
	cout << "Enter three integers :";
	cin >> a;
	cin >> b;
	cin >> c;
	
	int a1 = a;
	int b1 = b;
	int c1 = c;
	
	if (a > b)
	{
	 // swap a with b
	 temp = b;
	 b = a;
	 a = temp;
	}
	else if ( a > c)
	{
	
	// swap b with c
	temp = c;
	c = a;
	a = temp;
	}
	
	if ( b > c)
	{
		temp = b;
		b = c;
		c = temp;
			
	}

	
	
	if (a + b <= c)
	{
		cout << "They can not form a triangle\n";
		
	}
	else
	{
		cout << a1 <<" "<< b1 <<" " << c1 <<" can be a triangle.\n";
		int ab = (a*a) + (b*b);
		if (ab > (c*c))
		{
			cout << a1 <<" "<< b1 <<" " << c1 << " form an Acute triangle\n";
		}
		else if (ab < (c*c))
		{
			cout << a1 <<" "<< b1 <<" " << c1 << " form an Obtuse triangle\n";
		}
		else
			cout << a1 <<" "<< b1 <<" " << c1<< " form a Right triangle\n";
	}




	return 0;
}
