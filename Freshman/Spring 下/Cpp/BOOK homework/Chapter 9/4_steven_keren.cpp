#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


int main(void){
	string input, temp, output;
	
	getline(cin, input);

	int wordLength = 0;
	bool startCapital = false;
	temp = "";


	for(int i=0;i<input.length();i++)
	{
		// checking, sebagai deliminator
		if((input[i]==' '||input[i]==',')||(input[i]=='.'||input[i]=='!')) 
		{
			if(wordLength == 4){
				if(startCapital == true){
					temp = "Love";
				}else{
					temp = "love";
				}
				
			}
			temp+=input[i];

			output +=temp;
			temp = "";
			startCapital = false;
			wordLength = 0;
			
		}else{
			if(wordLength == 0){
				if(input[i]>='A'&& input[i]<='Z')
					startCapital = true;
			}
			
			
			temp+=input[i];
			wordLength++;
		}
		
	}

	cout<<output<<endl;
	return 0;
}