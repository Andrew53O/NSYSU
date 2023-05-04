#include <iostream>

using namespace std;


struct Point
{
	int xandy[2];
};
struct Line
{
	Point p1;
	Point p2;
};




int main(void)
{
	Line theline1, theline2;
	
	char males[4] = {'A', 'B', 'C','D'};
	
	for (int i = 0; i < 4; i++)
	{	
		cout << males[i] << endl;
		
		if (i == 0)
		{
			for (int j = 0; j < 2; j++)
			{
				cin >> theline1.p1.xandy[j];
			}
		
		
		}
		else if ( i == 1)
		{
			for ( int j = 0; j < 2; j++)
			{
				cin >> theline1.p2.xandy[j];
			}
		
		
		}
		else if (i == 2)
		{
			for ( int j = 0; j < 2; j++)
			{
				cin >> theline2.p1.xandy[j];
			}
		
		}
		else	 // i == 3 
		{
			for ( int j = 0; j < 2; j++)
			{
				cin >> theline2.p2.xandy[j];
			}
		
		}
		
	}
	
	int x1 = theline1.p1.xandy[0]- theline1.p2.xandy[0];
	int y1 = theline1.p1.xandy[1] - theline1.p2.xandy[1];
	
	int x2 = theline2.p1.xandy[0]- theline2.p2.xandy[0];
	int y2 = theline2.p1.xandy[1] - theline2.p2.xandy[1];

	int res = (x1 * x2) + (y1 * y2);
	
	if (res == 0)
	{
		cout << "vertical "<< endl;
	}
	else 
	{
		cout << "not vertical " << endl;
	}	
	
	
	

	return 0;
}
