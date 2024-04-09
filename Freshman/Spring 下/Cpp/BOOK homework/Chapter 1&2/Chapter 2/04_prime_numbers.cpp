#include <iostream>

using namespace std;

int main(void)
{

	for (int i = 3; i < 100; i+=2)
	{
		int flag = 0;
		for (int j = 3; j <= i; j++)
		{
			if (i % j == 0)
			{
				flag++;
			}
		}
		
		if (flag == 1)
		{
			cout << i << " is a prime nubmer\n";
		}
	}




	return 0;
}


