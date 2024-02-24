#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

	double height, weight, age;
	double hat_size, jacket_size, waist_size;
	int age_jacket = age, age_waist = age;
	char ans;
	
	do
	{
		cout << "Give me your height in inches, weight in pounds, and age in years"<<endl;
		cout << "and I will give youyour hat size, jacket size (inches at chest)\n";
		cout << "and your waist size in inches."<< endl;
		cin >> height >> weight >> age;
		
		
		
		
		hat_size = weight/height * 2.9;
		
		jacket_size = height * weight/288.0;
		if ((age_jacket /= 10) > 3)
		{
			
			jacket_size += (age_jacket * 1/8);
		}
		
		waist_size = weight/5.7;
		
	
		if (age > 28)
		{
			age_waist = (age - 28)/2;
			waist_size += (age_waist * 1/10);
			
		}
	
		cout << fixed << setprecision(2) << "hat size  = " << hat_size <<endl;	
		cout << fixed << setprecision(2) << "jacket size  = " <<jacket_size <<endl;	
		cout << "waist size  = " <<waist_size <<endl<<endl;	
		
		cout << "enter Y or y to repeat this calculation,any other character ends.\n";
		cin >> ans;
	}
	while(ans == 'Y' || ans == 'y');
	
	
	
	
	return 0;
}


