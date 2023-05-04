#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector <int> v, c(11);
	
	cout << "Enter each grade and then -1 to stop. " << endl;
	int next;
	cin >> next;
	
	if (next > 100)
	{
		cout << "wrong input" << endl;
		return 0;
	}
	
	while (next >= 0)
	{
		if (next > 100)
		{
			cout << "wrong input" << endl;
			break;
		}
		v.push_back(next);
		cin >> next;
	}

	int length = v.size();
	//cout << "length = " << length << endl;
	
	// to check whether anyperson get 100
	bool perfect = false;
	for (int i = 0; i < length; i++)
	{
		v[i] /= 10;
		switch(v[i])
		{
			case 0:
				c[0]++;
				break;
			case 1:
				c[1]++;
				break;
			case 2:
				c[2]++;
				break;
			case 3:
				c[3]++;
				break;
			case 4:
				c[4]++;
				break;
			case 5:
				c[5]++;
				break;
			case 6:
				c[6]++;
				break;
			case 7:
				c[7]++;
				break;
			case 8:
				c[8]++;
				break;
			case 9:
				c[9]++;
				break;
			case 10:
				c[10]++;
				perfect = true;
				break;
				
			default:
				cout << "print error " << endl;
		
		}
	
	}
	
	int low = 0;
	int high = 9;
	for (int i = 0; i < 10; i++)
	{
		cout << c[i] << " grade(s) of [" << low << " , " << high << " ] " << endl;
		low += 10;
		high += 10;
	}
	
	if(perfect)
	{
		cout << c[10] << " grades(s) of 100 " << endl;
	}
	
	

 return 0;
}
