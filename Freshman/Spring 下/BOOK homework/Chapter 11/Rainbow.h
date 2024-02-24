#ifndef RAINBOW
#define RAINBOW
#include <iostream>

using namespace std;

class RainbowColor
{	
	public:
	RainbowColor(char firstLetter);
	RainbowColor(int num);
	RainbowColor();
		
	int getRainbowColorByName();
	void outputRainbowColor(int num); // nama paramater sama kek overloading construcor harusnya gpp ga sih??
	void nextRainbowColor();
	
	
	void setcolorOk() { colorOk = true; }
	bool getcolorOk() {return colorOk; }
	private:
	int number;
	char colors[7] = {'R', 'O', 'Y', 'G', 'B', 'I', 'P'};
	bool colorOk = true;

};





#endif 


