#include <iostream>
using namespace std;

int main(void)
{
	int total_prime = 0;

	
	for (int i = 3; i < 1000; i+=2)
	{
		int indicate_prime = 0;
		int number_prime;
		for (int j = 3; j < 1000; j+=2)
		{
			
			if (i % j == 0)
			{
				indicate_prime++;		
			}
		}
		
		if (indicate_prime == 1 )
		{
			if (i < 100)
			{
				cout << i << " is a prime number\n";
			}
			
			total_prime++;
		}
		
		
		
	}
	
	
	cout << "3-1000 that is prime number is : " << total_prime << endl;
	


	return 0;
}
