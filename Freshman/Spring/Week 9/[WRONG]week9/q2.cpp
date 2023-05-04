
// masihhhhhhhhhhhhhhhhhhhhhhhhhhhh salahhhhhhhhhhhhhh

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
	
	// Date temp_date = date1 gini gitu namanya constructor assigment, kata zhujiao bisa
	// tapi klo temp_date = date1 blm tentu bisa, tapi abis coba BISA TERNAYTA
	if(temp == "date1") Date temp_date = date1;
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
	int d_day = d.gd();
	int d_mon = d.gm();
	int d_year = d.gy();
	
	int fyear = d_year;
	int fmonth = d_mon;
	int fday = d_day;
	int day_in_year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	// find the current month
	int now = day_in_year[d_mon -1];
	
	// butuh berapa hari buat buletin ke bulan depan
	int buletin_ke_bulan_depan = now - d_day;
	// tambah 1 bulan
	if((add- buletin_ke_bulan_depan) < 0 ) // lebih kecil artinya kurang cukup buat buletin
	{
		fday += add;
		
	}
	else //cukup buat buletin ke bulan depan
	{
		// buletin ke bulan depan
		add-= buletin_ke_bulan_depan;
		fmonth += 1;
		
		while(true)
		{	
			// ga kurang 1 soalnya udh tambah 1
			
			cout << "add skrg brp " << add << endl;
			if(add <= 28)
			{
				fday = add;
				break;
			}
			
			add-= day_in_year[d_mon];
			d_mon = (d_mon + 1) % 12;
			fmonth+=1;
		}
		
	}
	
	
	// check tambah month
	if(fmonth > 12)
	{
		while(fmonth > 12)
		{
			fyear +=1;
			fmonth -=12;
		}
	}

	return Date(2022, 5, 5);
	return Date(fyear, fmonth, fday);
}
