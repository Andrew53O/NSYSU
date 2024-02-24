#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;


int main(void)
{
	// we assume that both file has the same length
	cout << "Start reading true answers and your answers ........" << endl;
	
	// the type of file input
	ifstream input;
	input.open("TrueAnswer.txt");
	if(input.fail())
	{
		cout << "Cannot find the answer file "<< endl;
		exit(1);
	}

	ifstream my_answer;
	my_answer.open("MyAnswer.txt");
	if(my_answer.fail())
	{
		cout << "Cannot find my answer file" << endl;
		exit(1);
		
	}
	
	cout << "Question answer is :";
	char for_output, for_output2;
	
	input.get(for_output);
	while(!input.eof())
	{
		cout << for_output;
		input.get(for_output);
	}
	
	cout << "Your answer is : ";
	
	my_answer.get(for_output2);
	while(!my_answer.eof())
	{
		cout << for_output2;
		my_answer.get(for_output2);
	}
	
	
	input.close();
	my_answer.close();
	
	cout << "Calculating your score ......" << endl;
	
	
	// using get and eof to read the file
	
	// reopen the file, (easy method), if advanced using putp maybe, put it in the first or using rewind
	input.open("TrueAnswer.txt");
	if(input.fail())
	{
		cout << "Cannot find the answer file "<< endl;
		exit(1);
	}

	my_answer.open("MyAnswer.txt");
	if(my_answer.fail())
	{
		cout << "Cannot find my answer file" << endl;
		exit(1);
		
	}
	
	
	float score;
	float tru= 0, total =0;
	char true_abcd, my_abcd;
	
	// read the first to know if it is eof or not
	input.get(true_abcd);
	my_answer.get(my_abcd);
	
	if(true_abcd == my_abcd && true_abcd != ' ' && my_abcd != ' ')
	{
		tru++;
		
	}
	total++;
	// another alternative
	/*char n[10000];
	
	while(input>>n[count])
	
	or
	
	you can using vecotr
	
	vector<char> v;
	char temp;
	while(input >> temp)
	{
		v.push_back(temp);
	}
	*/
	while(!input.eof())
	{
		// read again to know if it eof or not
		input.get(true_abcd);
		my_answer.get(my_abcd);
		
		if(true_abcd == my_abcd && true_abcd != ' ' && my_abcd != ' ' && true_abcd != '\n') // if not testing the '\n' the tru will excess by 2
		{
			tru++;
			
		}
	
		if (true_abcd != ' ' && my_abcd != ' ' && true_abcd != '\n')// if not testing the '\n' the total will excess by 2
		{
			
			total++;
		}
		//cout <<" testing" <<  my_abcd << endl;
	}
	
	// previous version without testing '\n'
	// i don't know what the plus two charater is, but the one is eof, the other one is changing line in linux '\r\t'
	// so we subtract 2
	cout << "total " << total << endl;
	cout << "tru " << tru << endl;
	
	cout << "Your score is : " << (tru/total) * 100.0 << endl;
	
}
