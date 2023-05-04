#include <iostream>

using namespace std;


class Salary
{

	public:
	Salary (double works, double gaji);
	Salary(double works);
	Salary();
	void calculate();
	
	void show();
	
	private:
	double total_working;
	double salary;
	


};

int main(void)
{
	
	Salary sa(0.0, 0.0);
	
	// explicit call to the constructor
	sa = Salary(10.0, 0.0);
	sa.calculate();
	sa.show();
	

	return 0;
}


void Salary::calculate()
{
	int num;
	for (int i = 1; i <= 7; i++)
	{
		cout << "Day" << i << " :" << endl;
		cin >> num;
		
		if (num < 0)
		{
			cout << "Wrong input" << endl;
		}
		else if (num <= 8)
		{	
			total_working += num;
		}
		else if (num <= 10)
		{
			total_working += 8;
			total_working += ((num-8) *1.33);
		}
		else
		{
			total_working += 8; num -=8;
			
			total_working += ((2) * 1.33);num-=2;
			
			total_working += ((num) * 1.66);
			//cout << "sisa brp ya ? " << num << endl;
		}
		
		//cout << "total working " << total_working << endl;
	} 

	salary = total_working * 140.0;

}

void Salary::show()
{

	cout << "Your total working hours :" << total_working << endl;
	cout << "Your salary : " << salary << endl;

}

// preferable way to intialize using constructor
Salary::Salary(double works, double gaji) : total_working(works), salary(gaji) 
{
	// body intentionally empty
}
// another way to initalize using constructor (overloading)
Salary::Salary(double works) : total_working(works), salary(0.0)
{
	// body intentionally empty
}

Salary::Salary() : total_working(0.0), salary(0.0) 
{
	// body intentionally empty
}
