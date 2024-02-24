#include <iostream>
using namespace std;

int main(void)
{

	int score = 0;

	while(score != -1)
	{
		cout << "Please input your score: "; cin >> score ;
		
		switch(score / 10)	
		{
		
			case 10: 
			case 9:
			case 8:
				cout << "A\n\n";
				break;
			case 7:
				cout << "B\n\n";
				break;
			case 6:
				cout << "C\n\n";
				break;
			case 5:
				cout << "D\n\n";
				break;
			default:
				cout << "E\n\n";
		}
		
	
	}
	


	return 0;
}
