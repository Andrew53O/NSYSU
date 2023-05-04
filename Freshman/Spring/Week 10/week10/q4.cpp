#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include<bits/stdc++.h>
#include <cctype>
using namespace std;



int main(void)
{
	string long_answer;
	vector <string> find;
	
	
	// input and make all lowercase chara
	getline(cin, long_answer);
	transform(long_answer.begin(), long_answer.end(), long_answer.begin(), ::tolower);
	
	// copy to c_strint
	char c_string[1000];
	strcpy(c_string, long_answer.c_str());
	
	
	string next, end = "eof";
	
	// read the first and make it lowercase
	cin >> next;
	transform(next.begin(), next.end(), next.begin(), ::tolower);
	while((strcmp(next.c_str(), end.c_str()) != 0))
	{
		
		find.push_back(next);
		cin >> next;
		transform(next.begin(), next.end(), next.begin(), ::tolower);
	}
	
	
	// for pointer, since returning strtok return a char *
	vector <string> text;
	char * return_value_strtok;
	
	return_value_strtok = strtok(c_string, " ,.\"!?:-\\");
	
	
	while(return_value_strtok != NULL)
	{
		//cout << return_value_strtok << endl;
		text.push_back(return_value_strtok);
		return_value_strtok = strtok(NULL, " ,.\"!?:-\\");
	}
	
	// termasuk string EOF
	//cout << "dpt semua input " << endl;
	int length = find.size();
	//for (int i =0; i < length; i++)
	//{
		//cout << find[i] << endl;
	//}
	
	// dpt semua katanya
	//cout << "dpt semua kata " << endl;
	int length2 = text.size();
	//for (int i =0; i < length2; i++)
	//{
		//cout << text[i] << endl;
	//}
	
	// bandingin jaawban 
	vector <int> count(length);
	for (int i = 0; i < length ; i++)
	{
		for (int j = 0; j < length2 - 1; j++)
		{
			if(strcmp(find[i].c_str(), text[j].c_str()) == 0)
			{
				count[i]++;
			}
		
		}
	}
	
	// length dari si vector count
	int length_for_count = count.size();
	for (int i = 0; i < length; i++)
	{
		cout << count[i] << " " ;
	}
	cout << endl;
	
	
	return 0;	
}
