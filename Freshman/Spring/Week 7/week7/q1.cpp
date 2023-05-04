#include <iostream>

using namespace std;



struct Grade
{
	int num[5];
	int finish = 1;

	void calculate();
};

int main(void)
{
	Grade student1;

	cout << "Inital struct, scores :";
	for (int i =0; i < 5; i++)
	{
		cin >> student1.num[i];
	}
	
	student1.calculate();
	
	cout << "Finish intime : "<<student1.finish << endl;
	
	cout << "Please key in scores " << endl;
	for (int i =0; i < 5; i++)
	{
		cin >> student1.num[i];
	}
	
	cout << "student score: ";
	for (int i =0; i < 5; i++)
	{
		cout << student1.num[i] << " " ;
	}
	cout << endl;
	
	student1.calculate();
	
	cout << "Finish intime : "<<student1.finish << endl;
	
		
	return 0;
}

void Grade::calculate()
{
	finish = 1;
	for (int i = 0; i < 5; i++)
	{
		if (num[i] <= 0)
		{
			finish = 0;
			break;
		}
	}

}
