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
	TwoD& operator +(TwoD& obj);
	TwoD& operator =(TwoD& obj);
	
	// destructor
	~TwoD();
	
	
	private:
	int* *p;
	int row;
	int col;
};
int main(void)
{
	int row_input, col_input;
	// first matrix
	cout << "Enter the row and column dimensions of the array" << endl;
	cin >> row_input >> col_input;
	
	TwoD matrix1(row_input, col_input);
	
	cout << "Enter " << row_input << " rows of " << col_input << " intergers each" << endl;
	matrix1.fill();

	// second matrix
	cout << "Enter the row and column dimensions of the array" << endl;
	cin >> row_input >> col_input;
	
	TwoD matrix2(row_input, col_input);
	
	cout << "Enter " << row_input << " rows of " << col_input << " intergers each" << endl;
	matrix2.fill();

	// assigment
	cout << "before" << endl;
	TwoD matrix3(matrix2);
	cout << "after" << endl;
	
	cout << "matrix3 = matrix2" << endl;
	cout << "matrix3 = " << endl;
	matrix3.output();
	
	cout << "matrix3 = matrix1 + matrix2" << endl;
	matrix3 = matrix1 + matrix2;
	cout << "matrix3 = " << endl;
	matrix3.output();
return 0;
}


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
	// since it is a copy constructor, it can access the private member
	// since copy itself
	row = oldObj.row;
	col = oldObj.col;
	cout << " matrix2 = " << oldObj.getRow() << endl;
	cout << "row = " << row << endl;
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
			p[i][j] = oldObj.p[i][j];
		}
	}

}

TwoD& TwoD::operator +(TwoD& obj)
{
	// checkin for same row and col
	
	if (row != obj.row || col != obj.col)
	{
		cout << "Error the row and column is not same" << endl;
		exit(1);
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			p[i][j] += obj.p[i][j];
		
		}
	}
	
	return *this; // why works ??
}
	
	
// same code as copy constructor
TwoD& TwoD::operator =(TwoD& obj)
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

TwoD::~TwoD()
{
	for (int i = 0; i < row; i++)
	{
		delete [] p[i];
	
	}
	delete [] p;
}

// constructor pakek pas declare aja? iya
// *this artinya apa ya? derefernce, since this is a pointer, so *this, get the value
