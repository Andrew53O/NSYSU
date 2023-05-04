#include <iostream>
using namespace std;

class Date
{
	public:
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	Date() 
	{
		year = 0;
		month = 0;
		day = 0;
	
	}
	void setAll()
	{
		int y, m, d;
		
		cin >> y >> m >> d;
		
		year = y; month = m; day = d;
	}	
	
	int gy() const  {return year;}
	int gm() const {return month;}
	int gd() const {return day;}

	void output()
	{
		cout << year << " / " << month << " / " << day << endl; 
	}
	void noend()
	{
		cout << year << " / " << month << " / " << day;
	}
	
	private:
	int year;
	int month;
	int day;
};

const Date operator +(const Date& d, int add);
int main(void)
{
	Date date1, date2, date3, temp_date;
	cout << "Please enter 3 dates to test: " << endl;
	cout << "Enter the date1 : "; date1.setAll();
	cout << "Enter the date2 : "; date2.setAll();
	cout << "Enter the date3 : "; date3.setAll();
	 

	// output
	cout << "date1: "; date1.output();
	cout << "date2: "; date2.output();
	cout << "date3: "; date3.output();

	string temp;
	cout << "Choose a date to add(+):"; cin >> temp;
	

	if(temp == "date1")  temp_date = date1;
	else if(temp == "date2") temp_date = date2;
	else if(temp == "date3") temp_date = date3;
	
	int add_day;
	cout << " + "; cin >> add_day;
	temp_date = temp_date + add_day;
	
	temp_date.output();
	return 0;
}

const Date operator +(const Date& d, int add)
{
	// data = add_day
	int year = d.gy(); int month = d.gm(); int day = d.gd();
	// replicate the day of 12 months
	int month_a_year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	//iterate until add == 0;
	while(add > 0)
	{
		// check whether should add month or not
		int month_now = month_a_year[month - 1];
		if(day == month_now)
		{
			month ++; 		
			day -= month_now;
		}
		// check the month
		if(month == 13)
		{
			year++;
			month-=12;
		}

		day++;
		add--;
	}

	return Date(year, month, day);
}
