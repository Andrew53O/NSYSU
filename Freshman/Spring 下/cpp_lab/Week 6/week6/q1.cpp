#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int find_digits(int num);
int reversed_number(int num, int digits);
int palindrome(int num, int num2);

int main(void)
{
	// luar kkenya perlu while loop buat panlindrom
	int num;
	cout << "Please input digital: "; cin >> num;
	
	int times = 0;
	while(true)
	{
		int rnum = reversed_number(num, find_digits(num));
	
		int need_check = num + rnum;
		int length = find_digits(need_check);
	
		if(palindrome(need_check, reversed_number(need_check, find_digits(need_check))))
		{
			times++;
			cout << times << setw(3) << " "  << need_check << endl;
			break;
		}
		else
		{
			num = need_check;
			times++;
		}
	}
	
	
	

	return 0;
}

int find_digits(int num)
{
	int count = 0;
	while( num != 0)
	{	
		num /= 10;
		count++;
	}

	return count;
}


int reversed_number(int num, int digits)
{
	int number_reverse = 0;
	for (int i = 0; i < digits; i++)
	{
		int last = num % 10 ;
		num /= 10;
		
		number_reverse += last * pow(10, digits- 1 - i);
		

	}

	//cout << number_reverse << endl;
	return number_reverse;
}


int palindrome(int num, int num2)
{
	
	if (num == num2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}
