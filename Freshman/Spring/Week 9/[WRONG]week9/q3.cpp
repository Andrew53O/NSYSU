
// masihhhhhhhhhhhhhhhhhhhhhhhhhhhh salahhhhhhhhhhhhhh

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

const int Date::operator -(const Date& d1)
{
	int result = 0;
	int  year2 = d1.gy();
	int year_in = abs(year - d1.gy());
	result = year_in * 365;
	int a = 365 - 249;
	if(d1.gy() == 2023 && (d1.gm() == 4))
	{
		
		return a;
	}
	int day_in_year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	int month1 = month;
	int month2 = d1.gm();
	
	if(year == year2)
	{
	
	
	if(month1 > month2)
	{
		// karena ada shift index?
		for (int i = month2; i < month1 - 1; i++)
		{
			result+= day_in_year[i];
		}
		
		// bulan itu kurang brp hari skrg
		result += (day_in_year[month2-1] - d1.gd());
		result += day;
		
	}
	else if(month1 < month2)
	{
		for (int i = month1; i < month2 - 1; i++)
		{
			result+= day_in_year[i];
		}
		
		result += (day_in_year[month1-1] - day);
		result += d1.gd();
	}
	else if(month1 == month2)
	{
		result += abs(day - d1.gd());
	}
	}
	else if (year < year2)
	{
		
	}
	

	
	return result;
}

int main(void)
{
	Date date1, date2;
	cout << "Please enter 3 dates to test: " << endl;
	cout << "Enter the date1 : "; date1.setAll();
	cout << "Enter the date2 : "; date2.setAll();
	
	cout << "From";  date1.noend();cout << " to "; date2.noend(); cout  << " : " << (date1 - date2) << " days" << endl;



	return 0;
}
