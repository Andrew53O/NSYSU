#include <iostream>

using namespace std;

int main(void)
{
	int celcius = 100;
	int fahrenheit;
	
	
	while (celcius != fahrenheit)
	{
		fahrenheit = 9.0/5 * celcius + 32; //static_cast<int>(9.0/5 * celcius + 32);
		//cout << fahrenheit << "  " << celcius <<endl;
		if (celcius == fahrenheit)
		{
			cout << "Temperature that in both celsius and fahrenheit is same is " << celcius<<endl;
			break; // if i'm not breaking, it will also print -41, try it!
		}
		
		celcius--;
	}
	//	cout << 9.0/5 * c<< endl;
		




	return 0;
}


