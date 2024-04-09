#include <iostream>

#include "Rainbow.h"

using namespace std;


int main(void)
{
	cout << "Testing constructor RainbowColor(char) " << endl;
	RainbowColor read('R');
	RainbowColor read1('O');
	RainbowColor read2('Y');
	RainbowColor read3('G');
	RainbowColor read4('B');				
	RainbowColor read5('I');
	RainbowColor read6('P');

	cout << endl;
	
	cout << "Tesing RainbowColor(char) constructor " << endl;
	RainbowColor byNumber1(1);
	RainbowColor byNumber2(2);
	RainbowColor byNumber3(3);
	RainbowColor byNumber4(4);
	RainbowColor byNumber5(5);
	RainbowColor byNumber6(6);
	RainbowColor byNumber7(7);

	cout << endl;
	
	RainbowColor testing;
	while(testing.getcolorOk())
	{
		cout << "Testing the getRainbowColorByName and outputRainbowColor" << endl;
		testing.outputRainbowColor(testing.getRainbowColorByName());
	}
	// set colorOk to true
	testing.setcolorOk();
	cout << "\nTesting nextRainbow member " << endl;
	while(testing.getcolorOk())
	{
		
		testing.nextRainbowColor();
	}
	return 0;
}