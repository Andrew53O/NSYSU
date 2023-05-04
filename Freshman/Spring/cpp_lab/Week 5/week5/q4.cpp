#include <iostream>

using namespace std;


void calculate_area(int, int, double&);
void calculate_area(int, double&);
void calculate_area(int, double, double&);

int  main(void)
{
	int len, width;
	double PI;
	double circleArea= 0, squareArea = 0, rectangleArea = 0;
	
	cout << "Enter length(radius) : "; cin >> len;
	cout << "Enter width : "; cin >> width;
	cout << "Enter PI : "; cin >> PI;
	
	
	
	cout <<endl;
	calculate_area(len, PI, circleArea);
	calculate_area(len, squareArea);
	calculate_area(len, width, rectangleArea);
	
	cout <<endl;
	cout << "Rectangle area : " << circleArea << endl;
	cout << "Square area : " << squareArea << endl; 
	
	cout << "Cirle area : " << rectangleArea << endl;
	
	return 0;
}


void calculate_area(int len, int wid, double& area)
{
	area = len * wid;
	
}

void calculate_area(int len, double& area)
{
	area = len * len;
	
}

void calculate_area (int len, double pi, double& area)
{
	area = pi * len * len;
}
