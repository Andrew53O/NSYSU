#include <iostream>


using namespace std;


double sum(double a, double b);
double kurang(double a, double b);
double kali(double a, double b);

int main(void)
{
	double a, b;
	
	cout << "Input 2 numbers: "; cin >> a >> b;
	
	cout << sum(a,b) << endl;
	cout << kurang(a,b) << endl;
	cout << kali(a,b) << endl;
		


	return 0;
}


double sum(double a, double b)
{
	return a + b;
}

double kurang(double a, double b)
{
	return a - b;
}

double kali(double a, double b)
{
	return a * b;
}



