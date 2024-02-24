#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// bikin 2 funciton lebih
// getPlayerScore
// outputaverage

int getPlayerScore(string n, int num, string l[],int s[]);
void output(int result, int average, string n);

int main(void)
{
	string list[5];
	int scores[5];
	int average = 0;
	
	fstream file;
	file.open("scores.txt");
	
	string name; int score, count = 0;
	while(file >> name)
	{
		file >> score;
		
		list[count] = name;
		scores[count] = score;
		average += score;
		count++;
	}
	
	string input_name;
	cout << "Player average " <<(average/count) << endl;
	while(true)
	{
		cout << "Please enter player's name:"; cin >> input_name;
		
		int res = getPlayerScore(input_name, count, list, scores);
		
		output(res, average, input_name);
	}
	


	return 0;
}

int getPlayerScore (string n, int num, string l[], int s[])
{
	bool found = false;
	for (int i = 0; i < num; i++)
	{
		if(n == l[i])
		{
			found = true;
			return (s[i]);
		}
	}
	
	if(!found)
	{
		return 0;
	}
	
}

void output(int res, int a, string n)
{
	if(res == 0)
	{
		cout << "The player is not found in the file" << endl;;
		return;
	}
	if(res > a)
	{
		cout << n << " : " << res <<" Is higher than average";
	}
	else if (res < a)
	{
		cout << n << " : " << res <<" Is higher than average";
	}
	else if(res == a)
	{
		cout << n << " : " << res << " Is same than average";
	}
	
	cout << endl;
}




