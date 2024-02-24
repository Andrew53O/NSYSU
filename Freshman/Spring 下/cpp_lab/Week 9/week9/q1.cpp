#include <iostream>

using namespace std;

class Date
{
	public:
	// input year, month, day;
	void setAll()
	{
		int y, m, d;
		
		cin >> y >> m >> d;
		
		year = y; month = m; day = d;
	}	
	
	int gy() const  {return year;}
	int gm() const {return month;}
	int gd() const {return day;}

	// output based on the mode, 1 = endl, else no endl
	void output(int mode)
	{
		if(mode)
			cout << year << " / " << month << " / " << day << endl; 
		else
			cout << year << " / " << month << " / " << day;
	}

	private:
	int year;
	int month;
	int day;
};

// 3 overloading operatar declaration
const bool operator ==(const Date& d1, const Date& d2);
const bool operator >(const Date& d1, const Date& d2);
const bool operator <(const Date& d1, const Date& d2);


int main(void)
{
	Date date1, date2, date3;
	//setAll member function has cin
	cout << "Please enter 3 dates to test: " << endl;
	cout << "Enter the date1 : "; date1.setAll();
	cout << "Enter the date2 : "; date2.setAll();
	cout << "Enter the date3 : "; date3.setAll();
	 
	// output
	cout << "date1: "; date1.output(1);
	cout << "date2: "; date2.output(1);
	cout << "date3: "; date3.output(1);
	
	// using operator overloading
	string temp1, temp2;
	cout << "Choose two dates to compare (>, < , = ): "; cin >> temp1 >> temp2;

	string array[3] = {"date1", "date2", "date3"};

	Date temp1_obj, temp2_obj;
	// get the temp1 obj and temp2 obj;
	for (int i =0; i < 3; i++)
	{
		if(temp1 == array[i])
		{
			if(i == 0) temp1_obj = date1;
			else if (i == 1) temp1_obj = date2;
			else if (i == 2) temp1_obj = date3;

		}

		if(temp2 == array[i])
		{
			if(i == 0) temp2_obj = date1;
			else if (i == 1) temp2_obj = date2;
			else if (i == 2) temp2_obj = date3;
		}
	}

	// overloading the operator
	if(temp1_obj == temp2_obj){ temp1_obj.output(0); cout << " == "; temp2_obj.output(1);}
	else if(temp1_obj > temp2_obj) {temp1_obj.output(0); cout << " > "; temp2_obj.output(1);}
	else if(temp1_obj < temp2_obj) {temp1_obj.output(0); cout << " < "; temp2_obj.output(1);}

		return 0;
	}

// function definition
const bool operator ==(const Date& d1, const Date& d2)
{
	int year1 = d1.gy();
	int  year2 = d2.gy();
	int month1 = d1.gm();
	int month2 = d2.gm();
	int day1 = d1.gd();
	int day2 = d2.gd();
	
	if(year1 == year2)
	{
		if(month1 == month2)
		{
			if(day1 == day2)
			{
				return true;
			}
		}
	}

	return false;
}
const bool operator >(const Date& d1, const Date& d2)
{
	int year1 = d1.gy();
	int  year2 = d2.gy();
	int month1 = d1.gm();
	int month2 = d2.gm();
	int day1 = d1.gd();
	int day2 = d2.gd();
	
	// first check year -> month -> day
	if(year1 > year2)
	{
		return true;
	}
	else if (year1 == year2)
	{
		if(month1 > month2)
		{
			return true;
		}
		else if (month1 == month2)
		{
			if(day1 > day2)
			{
				return true;
			}
		}
	}
	
	
	return false;
}
const bool operator <(const Date& d1, const Date& d2)
{
int year1 = d1.gy();
	int  year2 = d2.gy();
	int month1 = d1.gm();
	int month2 = d2.gm();
	int day1 = d1.gd();
	int day2 = d2.gd();
	
	if(year1 < year2)
	{
		return true;
	}
	else if (year1 == year2)
	{
		if(month1 < month2)
		{
			return true;
		}
		else if (month1 == month2)
		{
			if(day1 < day2)
			{
				return true;
			}
		}
	}
	
	
	return false;
}

