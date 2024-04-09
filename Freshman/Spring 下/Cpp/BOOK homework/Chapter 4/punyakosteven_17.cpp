#include <iostream>
#include <fstream>
using namespace std;


int getPlayerScore(string names[], int scores[], string name, int max){
	for(int i = 0;i<max;i++){
		if(name == names[i]){
			return scores[i];
		}
	}
	return 0;
}

int average(const int scores[], int max){
	int sum=0, i;
	for(i = 0; i < max; i++){
		sum += scores[i];
	}

	return sum/max;
}

int q17(){
	string name, searchname;
	int score, i=0, getscore, getaverage;
	string names[100];
	int scores[100];

	fstream inputStream;
	inputStream.open("scores.txt");

	while(inputStream>>name){
		inputStream>>score;
		names[i] = name;
		scores[i] = score;
		i++;
	}
	getaverage = average(scores, i);
	cout<<"Average is "<<getaverage<<endl;

	while(1){

		cout<<"Please enter player's name: ";
		cin>>searchname;
		getscore = getPlayerScore(names, scores, searchname, i);
		if(getscore == 0){
			cout<<"The player is not found in the file."<<endl;
		}else{
			cout<<searchname<<" : "<<getscore;
			if(getscore>getaverage){
				cout<<" is higher than average"<<endl;
			}else{
				cout<<" is below than average"<<endl;
			}
		}
		
		
		
	}
    cout << "Will not printing here" << endl;
	for(int j = 0; j<i; j++){
		cout<<names[j]<<scores[j]<<endl;
	}

	return 0;
}



int main(void)
{

	q17();
	

	return 0;
}

