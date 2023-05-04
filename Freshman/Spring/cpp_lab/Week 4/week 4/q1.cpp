#include <iostream>
#include <cstdlib>



using namespace std;

int main(void)
{
	srand(time(0));
	
	
	char random_capital;
	
	for(int i = 0; i < 10; i++)
	{
		random_capital = rand() % 26 + 65;
		cout << random_capital;
	}
	
	cout << "\n";
	

	return 0;
}

