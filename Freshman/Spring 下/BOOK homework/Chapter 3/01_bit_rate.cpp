#include <iostream>

#define MEGABYTE  8000
using namespace std;

int main(void)
{
	double bit_rate, duration;
	double size1;
	int size2;
	
	cout << "Bit rate = "; cin >> bit_rate;
	cout <<"The duration in minutes of a video clip: "; cin >> duration;
	
	// second -> minutes;
	bit_rate = bit_rate * 60;
	size1 = (bit_rate * duration) / MEGABYTE;
	size2 = (bit_rate * duration) / MEGABYTE;
	
	cout << "The file size of the video clip in megabytes: (size1) "<< size1 << "	size2 " << size2;



	return 0;
}


