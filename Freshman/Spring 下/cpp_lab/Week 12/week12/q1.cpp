#include <iostream>

using namespace std;

int f(int n) 
{
   if(n == 0)
   {
      return 0;
   } 
   else if(n == 1) 
   {
      return 1;
   } 
   else 
   {
   int temp = f(n-1) + f(n-2);
      return (temp);
   }
}


void fibonaci_series(int length)
{
	// make a dynamic array
	int* pointer = new int[length];
	
	// uneffiecient code
	
	for (int i = 0; i < length; i++)
	{
		pointer[i] = f(length - i);
		
	}
	
	
	// printing array
	
	for (int i = 0; i < length; i++)
	{
		cout << pointer[i] << " " ;
	}	
	cout << endl;
	
	delete [] pointer;
}
int main(void)
{
	int n;
	cin >> n;
	
	fibonaci_series(n);



return 0;
}
