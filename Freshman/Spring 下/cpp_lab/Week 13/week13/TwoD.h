

#ifndef TWOD
#define TWOD
#include <iostream>
#include <cstdlib>
using namespace std;


class TwoD
{
	public:
	TwoD();
	TwoD(int Row, int Col);
	
	// no need to use row and col argument cause we save it in private;
	void fill();
	void output();
	// copy constructor
	TwoD(const TwoD& newObj);
	
	
	// operator overloading using  member function cause = must use member function
	TwoD operator +(TwoD obj); // return using object not by reference, because if we using the refence, it just a local reference
	TwoD& operator =(TwoD obj);// so we use return by value using TwoD
	TwoD operator *(TwoD obj);
	// destructor
	~TwoD();
	
	
	private:
	int* *p;
	int row;
	int col;
};

#endif



