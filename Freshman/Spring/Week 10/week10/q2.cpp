#include <iostream>
#include <string>
#include <cstring>


using namespace std;



int main(void)
{
	string ans;
	char c_string[100];
	cout << "Enter a string :";
	cin >> ans;
	
	// copy string object to c string
	strcpy(c_string, ans.c_str());
	int length = ans.length();
	
	for (int i = length - 1; i >= 0; i--)
	{
		cout << c_string[i];
	} 
	
	cout << endl;
	
	return 0;	
}
