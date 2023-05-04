#include <iostream>

using namespace std;


class Grade
{
	public:
	
	// mutator
	void setScore(int index, int score);
	
	// accesor
	int getScore(int index);	
	int getFinish();
	void output();

	private:
	int num[5];
	int finish = 1;
	int Max;
	int Min ;
	double Average = 0;
	int total = 0;

};

int main(void)
{
	Grade student1;
	cout << "Please key in scores " << endl;
	int score;
	for (int i = 0; i < 5; i++)
	{
		cin >> score;
		student1.setScore(i, score);
	}
	
	cout << "student scores:";
	
	for (int i = 0; i < 5; i++) cout << student1.getScore(i)<< " " ;


	cout << "\nFinish intime :"<< student1.getFinish() << endl;
	
	student1.output();
	return 0;
	
	
}


void Grade::setScore(int index, int score)
{
	if (score <= 0 ) finish = 0;
	
	num[index] = score;
	

	
	// find total
	total += score;
	
	//cout << "total " << total << endl;
	if (index == 4)
	{
		Average = (total/5.0);
	}
	
	
	if (index == 0)
	{
		Max = score;
		Min = score;
	}
	
	// find max min
	if (score > Max)
	{
		Max = score;
	}
	else if (score < Min)
	{
		Min = score;
	}
	
	
	
}


int Grade::getScore(int index)
{
	return num[index];
}

int Grade::getFinish() {return finish;}

void Grade::output()
{
	cout << "Average : " << Average << ", Max :" << Max << " , Min : " << Min << endl; 


}




/*
int finish = 1;
	int Max;
	int Min ;
	double Average = 0;


*/














































