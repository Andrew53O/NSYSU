#include <iostream>
#include <string>
using namespace std;


void str_print(string str, int len = 1);

// perlu pakek include string ga ya? coba nanya sekalian nanya make fileS
int  main(void)
{
	string str;
	cout << "Enter your string: " << endl;
	cin >> str;
	
	str_print(str);
	str_print(str, str.length());

	return 0;
}


void str_print(string str, int len)
{
	if(len == 1)
	{
		cout << "Output : " <<  str << "!" << endl;
	}
	else if (len > 1 && len < 5)
	{
		cout << "Output : " << str << "*" << endl;
	}
	else if (len >= 5)
	{
		cout << "Output : " << str << "~" << endl;
	}

}
