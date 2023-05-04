#include <iostream>

using namespace std;


class Date
{
	public:
	bool compare(const Date& date);
	
	void set(int y, int m, int d) 
	{
		year = y; month = m; day = d;
	}
	
	void output() const
	{
		cout << year << " " << month << " " << day << endl;
	}

	private:
	int year;
	int month;
	int day;
	
};

int main(void)
{
	Date tanggal1, tanggal2;
	int ye, mo, da;
	for (int i = 0; i < 2; i++)
	{
		cout << "Data input: " << endl;
		cin >> ye >> mo >> da;
		
		if(i == 0)
			tanggal1.set(ye, mo,da);
		else
			tanggal2.set(ye, mo,da);
	}

	cout << "Data output" << endl;
	tanggal1.output();
	cout << "Data output" << endl;
	tanggal2.output();
	
	if (tanggal1.compare(tanggal2) == true)
		cout << "Comparison Result : the same " << endl;
	else
		cout << "Comparison Result : different" << endl;
	


 return 0;
}

bool Date::compare(const Date& date)
{
	bool same = true;
	
	if(year != date.year) return false;
	if(month != date.month) return false;
	if (day != date.day) return false;
	
	return true;
}
