#include <iostream>
#include <vector>
using namespace std;


class Date
{
	public:
	bool compare(const Date& date);
	
	void set(int y, int m, int d, int mon) 
	{
		year = y; month = m; day = d; money = mon;
	}
	int getMonth() {return month;}
	int getYear() {return year;}
	int getDay() {return day;}
	int getMoney() {return money;}
	
	void add();
	
	void output() const
	{
		cout << year << " " << month << " " << day << " " << money << endl;
	}
	
	void swap(Date& date)
	{
		int temp1, temp2, temp3, temp4;
		
		temp1 = year;
		year = date.year;
		date.year = temp1;
		
		temp2 = month;
		month = date.month;
		date.month = temp2;
		
		temp3 = day;
		day = date.day;
		date.day = day;
		
		temp4 = money;
		money = date.money;
		date.money = temp4;
	
	}
	
	static void addSum(int);
	static int getSum();

	private:
	int year;
	int month;
	int day;
	int money;
	static int sum;
	
};

// static related
int Date::sum = 0;
void Date::addSum(int num)
{
	sum += num;
}
int Date::getSum()
{
	return sum;
}


int main(void)
{
	vector <Date> v;
	int ans;
	while(true)
	{
		cout << "1. add data" << endl;
		cout << "2. print" << endl;
		cout << "3. search" << endl;
		cout << "4. exit" << endl;
		
		cin >> ans;
		
		int length = v.size();
		Date newObj;
		int ye, mo, da;
		
		// sorting vector
		for (int i = 0; i < length - 1; i++)
		{
			for (int j = i + 1; j < length; j++)
			{
				int a= v[i].getYear();
				int b = v[j].getYear();
				if (a > b)
				{
					v[i].swap(v[j]);
				}
				else if (a == b)
				{
					int c = v[i].getMonth();
					int d = v[j].getMonth();
					
					if (c > d)
					{
						v[i].swap(v[j]);
					}
					else if (c == d)
					{
						int e = v[i].getDay();
						int f = v[j].getDay();
						
						if (e > f)
						{
							v[i].swap(v[j]);
						
						}
						else if (e == f) // tanggalnya sama
						{
							int m1 = v[i].getMoney();
							int m2 = v[j].getMoney();
						
							if (m1 > m2) // bandingin pakek duit
							{
								v[i].swap(v[j]);
								
							}
						}
					}
				
				}
			
			
			}
		
		
		}
		
		
		
		switch(ans)
		{	
			case 1:
				newObj.add();
				v.push_back(newObj);
				break;
			case 2:
				// print
				
				
				for (int i = 0; i < length; i++)
				{
					v[i].output();
					
				}		
				cout << "sum = "<< Date::getSum() << endl;
				
				break;
			case 3:
				// search, tulis disini soalnya ribet bandingin klo pakek di classnay
				cin >> ye >> mo >> da;
				
				for (int i = 0; i < length; i++)
				{
					if(v[i].getYear() == ye && v[i].getMonth() == mo && v[i].getDay() == da)
{
	v[i].output();
}
	
				}
				
				break;
			case 4:
				return 0;
				break;
		
			default:
				cout << "wrong input " << endl ;
				break;
		
		}
	}



 return 0;
}

void Date::add()
{
	int y, m, d, s;
	cin >> y >> m >> d >> s;
	// adding sum
	addSum(s);
	set(y,m,d,s);
}


