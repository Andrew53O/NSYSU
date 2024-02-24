#include "Rainbow.h"

RainbowColor::RainbowColor(char firstLetter)
{
	for (int i = 0; i < 7; i++)
	{	// + 1 to shift the index (for printing only)
		if (firstLetter == colors[i]) 
			cout << (i + 1) << " " << firstLetter << endl;
		
	
	}
}

RainbowColor::RainbowColor(int num)
{
	if (num > 7 && num < 1)
		cout << "Out of range of rainbow" << endl;
		
	else
		cout << num << " " << colors[num - 1] << endl;

}

RainbowColor::RainbowColor()
{
}

int RainbowColor::getRainbowColorByName()
{
	char firstLetter;
	cin >> firstLetter;
	bool bad = true;
	for (int i = 0; i < 7; i++)
	{
		if(colors[i] == firstLetter)
		{
			bad = false;
			return (i);	
		}
		
	}
	
	if(bad) 
	{
		cout << firstLetter << " is not a RainbowColor. Exiting " << endl;
		cout << "\nend of loops \n";
		colorOk = false;
		return -1;
	}
		
	return 0;
}


void RainbowColor::outputRainbowColor(int num)
{
	if(num >= 1)
	{
		cout << (num + 1) << " " << colors[num] << endl;
	}	
	
}

void RainbowColor::nextRainbowColor()
{
	char next;
	cin >> next;
	
	int current_index; 
	bool in = true;
	for (int i = 0; i < 7; i++)
	{
		if(next == colors[i])
		{	
			current_index = i + 1;
			in = true;
			break;
		}	
		else
			in = false;
	}
	
	int next_index = (current_index + 1) % 8;
	
	// edge case for next_index is 0;
	if(next_index == 0) next_index++;
	if(in)
	{
		cout << "current RainbowColor " << current_index << " " << colors[current_index - 1] << endl;
		cout << "next RainbowColor " << next_index << " " << colors[next_index - 1] << endl;
	}
	else
	{
		colorOk = false;
		
		cout << next << " is not a RainbowColor. Exiting " << endl;
	}
}