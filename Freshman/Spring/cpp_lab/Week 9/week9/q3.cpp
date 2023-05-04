#include <iostream>
#include <cmath>

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
	
	// member function operator overloading
	const int operator -(const Date& d1);

	private:
	int year;
	int month;
	int day;
};

void swap(int& a, int& b)
{
	int temp = b;
	b = a;
	a = temp;
}
const int Date::operator -(const Date& d1)
{
	int day_in_year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int year2 = d1.year;
	int month2 = d1.month;
	int day2 = d1.day;

	int different = 0;
	bool year_lebih_besar = true;
	bool month_lebih_besar = true;

	// find which date is past/ future
	if(year != year2)
	{
		if(year < year2)
		{
			year_lebih_besar = false;
		}
	}
	else	// year same
	{
		if(month < month2)
		{
			month_lebih_besar = false;
		}
	}

	// iterate year2 to year

	// same year case also include in here
	if((year_lebih_besar == false) || (month_lebih_besar == false))
	{
		// iterate until the two dates is same
		while(!(year == year2 && month == month2 && day == day2) )
		{
			day++;
			int temp_month_now = day_in_year[month - 1];

			if(day > temp_month_now)
			{
				month++;
				day -= temp_month_now;
			}

			if(month == 13)
			{
				year++;
				month -=12;
			}

			different++;
		}

	}
	else // year > year2
	{
		// iterate until the two dates is same
		while(!(year == year2 && month == month2 && day == day2) )
		{
			day2++;
			int month_now = day_in_year[month2 - 1];
			if(day2 > month_now)
			{
				month2++;
				day2-= month_now;
			}

			if(month2 == 13)
			{
				year2++;
				month2 -= 12;
			}
			different++;
		}

	}
	
	return different;
}

int main(void)
{
	Date date1, date2;
	cout << "Please enter 3 dates to test: " << endl;
	cout << "Enter the date1 : "; date1.setAll();
	cout << "Enter the date2 : "; date2.setAll();
	
	cout << "From  ";  date1.noend();cout << " to "; date2.noend(); cout  << " : " << (date1 - date2) << " days" << endl;



	return 0;
}
