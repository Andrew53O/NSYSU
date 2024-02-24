
#include <iostream>
#include <cstdlib>
using namespace std;

#include "TwoD.h"

TwoD::TwoD()
{
	// intentionally empty
}

TwoD::TwoD(int r, int c)
{
	// save it
	row = r;
	col = c;
	// make an array of pointer
	p = new int*[r];
	
	for (int i = 0; i < r; i++)
	{
		p[i] = new int[c];
	}
	
}

void TwoD::fill()
{
	for (int i = 0; i < row ; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> p[i][j];
		}
	}

}

void TwoD::output()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << p[i][j] << " " ;
		}
		cout << endl;
	}
}

// copy constructor
TwoD::TwoD(const TwoD& oldObj)
{
	// since it is a copy constructor, it can access the private member, since it is copy itself
	row = oldObj.row;
	col = oldObj.col;
	p = new int*[row];
	
	for (int i = 0; i < row; i++)
	{
		p[i] = new int[col];
	}
	
	// copy it from newobj
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			p[i][j] = oldObj.p[i][j];
		}
	}

}

TwoD TwoD::operator +(TwoD obj)
{
	// checkin for same row and col
	
	TwoD acopy(obj.row, obj.col);
	
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			acopy.p[i][j] = p[i][j] + obj.p[i][j];
		
		}
	}
	
	return acopy; 
}
	
	
// same code as copy constructor
TwoD& TwoD::operator =(TwoD obj)
{
	
	// redefine p
	p = new int*[row];
	
	for (int i = 0; i < row; i++)
	{
		p[i] = new int[col];
	}
	
	// copy it from newobj
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			p[i][j] = obj.p[i][j];
		}
	}
	
	return *this; // why works ? 
}

TwoD TwoD::operator *(TwoD obj)
{
	TwoD acopy(obj.row, obj.col);
	
	// multipy in matrix is different, PLESASE NOTE IT
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			acopy.p[i][j] = 0;
			for (int k = 0; k < col; k++)
			{
				// multipy in matrix 
				acopy.p[i][j] += p[i][k] * obj.p[k][j]; 
			}
		
		}
	}
	
	return acopy; 
}

TwoD::~TwoD()
{
	cout << "calling destructor" << endl;
	cout << this->row << endl;
	for (int i = 0; i < row; i++)
	{
		delete [] p[i];
	
	}
	delete [] p;
}
