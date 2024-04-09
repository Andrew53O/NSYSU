#include <iostream>

using namespace std;

int main(void)
{
	double distance;
	double minutes;
	cout << "The distance traveled (kilometer) "; cin >> distance;
	cout << "The time taken (minutes) "; cin >> minutes;


	double total_price = 0;
	double total_price_distance = 0;

	// calculate price by distance
	while (distance != 0)
	{
		if (distance <= 2)
		{
			total_price_distance += 2;
			distance--;
		}
		else if (distance <= 8)
		{
			total_price_distance += 0.5;
			distance--;
		}
		else
		{
			total_price_distance++;
			distance--;
		}
	}

	//calculate fee by minute
	double total_price_time = 0;
	total_price_time = minutes * 0.2;


	cout << "total price = "<< total_price_distance + total_price_time << endl;


	return 0;
}

