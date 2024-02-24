#include <iostream>

using namespace std;

class Date
{

	public:
	
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

// 3 overloading operatar declaration
const bool operator ==(const Date& d1, const Date& d2);
const bool operator >(const Date& d1, const Date& d2);
const bool operator <(const Date& d1, const Date& d2);


int main(void)
{
	Date date1, date2, date3;
	cout << "Please enter 3 dates to test: " << endl;
	cout << "Enter the date1 : "; date1.setAll();
	cout << "Enter the date2 : "; date2.setAll();
	cout << "Enter the date3 : "; date3.setAll();
	 

	// output
	cout << "date1: "; date1.output();
	cout << "date2: "; date2.output();
	cout << "date3: "; date3.output();
	
	// using operator overloading
	string temp1, temp2;
	cout << "Choose two dates to compare (>, < , = ): "; cin >> temp1 >>temp2;
	

	if(temp1 == "date1")
	{
		if(temp2 == "date2")
		{
			if(date1 > date2)
			{
				date1.noend();
				cout << " > " ;
				date2.output();
			}
			else if (date1 < date2)
			{
				date1.noend();
				cout << " < " ;
				date2.output();
			}
			else
			{
				date1.noend();
				cout << " == " ;
				date2.output();
			}
		}
		else // temp2 == date3
		{
			if(date1 > date3)
			{
				date1.noend();
				cout << " > " ;
				date3.output();
			}
			else if (date1 < date3)
			{
				date1.noend();
				cout << " < " ;
				date3.output();
			}
			else
			{
				date1.noend();
				cout << " == " ;
				date3.output();
			}
		}		
	
	}
	else if(temp1 == "date2")
	{
		if(temp2 == "date1")
		{
			if(date2 > date1)
			{
				date2.noend();
				cout << " > " ;
				date1.output();
			}
			else if (date2 < date1)
			{
				date2.noend();
				cout << " < " ;
				date1.output();
			}
			else
			{
				date2.noend();
				cout << " == " ;
				date1.output();
			}
		}
		else // temp2 == date3
		{
			if(date2 > date3)
			{
				date2.noend();
				cout << " > " ;
				date3.output();
			}
			else if (date2 < date1)
			{
				date2.noend();
				cout << " < " ;
				date3.output();
			}
			else
			{
				date2.noend();
				cout << " == " ;
				date3.noend();
			}
		}		
	
	
	}
	else if (temp1 == "date3")
	{
		if(temp2 == "date1")
		{
			if(date3 > date1)
			{
				date3.noend();
				cout << " > " ;
				date1.output();
			}
			else if (date3 < date1)
			{
				date3.noend();
				cout << " < " ;
				date1.output();
			}
			else
			{
				date3.noend();
				cout << " == " ;
				date1.output();
			}
		}		
		}
		else // temp2 == date2
		{
			if(date3 > date2)
			{
				date3.noend();
				cout << " > " ;
				date2.output();
			}
			else if (date3 < date2)
			{
				date3.noend();
				cout << " < " ;
				date2.output();
			}
			else
			{
				date3.noend();
				cout << " == " ;
				date2.output();
			}
		}	
		
		
		return 0;
	}

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

