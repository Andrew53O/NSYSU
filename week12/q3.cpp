#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;


int main(void)
{
	string name1, name2, output;
	cout << "Enter the first of two input file names: "; cin >> name1;
	cout << "Now a second input file name: "; cin >> name2;
	
	cout << "Enter the output file name: "; cin >> output;
	
	
	// open 3 files
	ifstream first;
	first.open(name1);
	if(first.fail())
	{
		cout << "Cannot find the answer file1 "<< endl;
		exit(1);
	}

	ifstream second;
	second.open(name2);
	if(second.fail())
	{
		cout << "Cannot find my answer file2" << endl;
		exit(1);
		
	}
	
	ofstream output_file(output);
	if(output_file.fail())
	{
		cout << "faied to open file3" << endl;
	}
	
	cout << "Contents of file " << name1 << " are :" << endl;
	 
	float num1, num2;
	vector<float> v1, v2, merge_output;
	
	while(first >> num1)
	{
		cout << num1 << endl;
		v1.push_back(num1);
		merge_output.push_back(num1);
	}
	
	cout << "Contents of file " << name2 << " are :" << endl;
	
	while(second >> num2)
	{
		cout << num2 << endl;
		v2.push_back(num2);
		merge_output.push_back(num2);
	}
	
	
	cout << "Contents of merged file " << output << " are : " ;
	
	// using bubble sort to sort
	int length = merge_output.size();
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if(merge_output[i] > merge_output[j])
			{
				float temp = merge_output[i];
				merge_output[i] = merge_output[j];
				merge_output[j] = temp;	
			}
		}
	}
	
	cout << endl;
	
	// formating using io manipulation
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	cout.setf(ios::right);
	
	output_file.setf(ios::fixed);
	output_file.setf(ios::showpoint);
	output_file.precision(3);
	
	for (int i = 0; i < length; i++)
	{
		output_file << setw(7) << merge_output[i] << " " ;
		cout << setw(7) <<  merge_output[i] << endl;
	}
	return 0;
}
