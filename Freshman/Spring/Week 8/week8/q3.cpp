#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
	public:
	Date(int y, int m, int d) 
	{
		year = y; month = m; day = d;
		//cout << "masuk contrut " << endl;
	}
	Date()
	{
		//cout << "hello world! " << endl;
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


class Record
{
	public:
	Record(string, Date);
	Record()
	{
	
	}
	Date getDate() const;
	
	string outputName()
	{
		return name;
	}
	
	static int getCount();
	static int realGetCount();
	private:
		Date date;
		static int count;
		string name;

};

int Record::count = 0;
int Record::getCount()
{
	count++;
	return count;
}
int Record::realGetCount()
{
	return count;
}

int main(void)
{
	vector <Record> data;
	
	string n;
	int y, m, d;
	while(true)
	{
		Record orang;
		
		cout << "data input" << endl;
		cin >>	n ;
	
		if(n == "exit")
		{
			break;
		}
		
		cin >> y >> m >> d;
		
		orang = Record(n, Date(y,m,d));
		//cout << "berhasil " << endl;
		
		data.push_back(orang);
		orang.getCount();
	}
	
	int length = data.size();
	cout << endl;
	for (int i = 0; i < length; i++)
	{
		cout << "data output" << endl;
		cout << data[i].outputName() << " ";
		data[i].getDate().output();
	}
	cout << "Total students = " << Record::realGetCount() << endl;


 return 0;
}

Date Record::getDate() const
{
	return date;
}


Record::Record(string n, Date dat)
{
	name = n;
	date = dat;
}


