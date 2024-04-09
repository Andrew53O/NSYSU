
#include "TwoD.h"


// default constructor
TwoD::TwoD()
{
	Row = 3;
	Col = 3;
	
	// create dynamic array
	matrix = new ArrayPtr[Row];
	
	for (int i = 0; i < Row; i++)
	{
		matrix[i] = new int[Col];
	}
	
	
}

// parameterized constructor
TwoD::TwoD(int r, int c)
{
	Row = r;
	Col = c;
	
	matrix = new ArrayPtr[Row];
	
	for (int i = 0; i < Row; i++)
	{
		matrix[i] = new int[Col];
	}
	
}


// desctrustor
TwoD::~TwoD()
{
	for (int i = 0; i < Row; i++)
	{
		delete [] matrix[i];
	}
	
	delete [] matrix;
}

// accesor
int TwoD::getRow() {return Row;}
int TwoD::getCol() {return Col;}

void TwoD::setRC(int r, int c)
{
	Row = r;
	Col = c;
	
	matrix = new ArrayPtr[Row];
	
	for (int i = 0; i < Row; i++)
	{
		matrix[i] = new int[Col];
	}
	
}

 // void setMatrix(int row, int col, int value);
void TwoD::setMatrix(int r, int c, int val)
{
	if(r >= Row || c >= Col || r < 0 || c < 0)
	{
		cout << "Index out of range " << endl;
		return;
	}
	// set the row and column
	
	matrix[r][c] = val;
	//cout << "succes" << endl;
	//cout << "row = " << Row << endl;
	// set all the value to val
	/*
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			//cout << "Hello dari test sini" << endl;
			
		}
	}
	*/
}
int TwoD::getMatrix(int r, int c)
{
	// adding r and c before checking
	if(r >= Row || c >= Col || r < 0 || c < 0)
	{
		cout << "Index out of range" << endl;
		return 0;
	}
	//cout << "succes" << endl;
	return matrix[r][c];

} // int getMatrix(int row, int col);



// copy constructor

TwoD::TwoD(const TwoD& copy)
{
//	cout << "hell0o " << endl;
	Row = copy.Row;
	Col = copy.Col;
	
	matrix = new ArrayPtr[Row];
	
	for (int i = 0; i < Row; i++)
	{
		matrix[i] = new int[Col];
	}
	//cout << "hell0o " << endl;
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			matrix[i][j] = copy.matrix[i][j];
		}
	}
	
}


const TwoD& TwoD::operator=(const TwoD& copy)
{
	Row = copy.Row;
	Col = copy.Col;
	
	matrix = new ArrayPtr[Row];
	
	for (int i = 0; i < Row; i++)
	{
		matrix[i] = new int[Col];
	}
	//cout << "hell0o " << endl;
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			matrix[i][j] = copy.matrix[i][j];
		}
	}

	return *this;
}
  
TwoD operator+(const TwoD& one, const TwoD& two)
{
	
	int r1 = one.Row;
	int r2 = two.Row;
	
	int c1 = one.Col;
	int c2 = two.Col;
	
	TwoD returnedObj(r1, c1);
	// check if same size
	if (r1 != r2 || c1 != c2)
	{
		cout << "Matrixes  not the same size" << endl;
		cout << "lhs matrix row, col sizes " << r1 << " " << c1 << endl;
		cout << "rhs matrix row, col sizes " << r2 << " " << c2 << endl;
		exit(1);
		return returnedObj;
	}
	
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			returnedObj.matrix[i][j] += (one.matrix[i][j] + two.matrix[i][j]);
		}
	}
	
	return returnedObj;
}
  
TwoD operator*(const TwoD& one, const TwoD& two)
{
	int r1 = one.Row;
	int r2 = two.Row;
	int c1 = one.Col;
	int c2 = two.Col;
	
	TwoD returnedObj(r1, c1);
	// check if same size
	if (r1 != r2 || c1 != c2)
	{
		// check whether can multipy even through different size
		if(r1 != c2 && r2 != c1)
		{
			cout << "Matrixes  not the same size" << endl;
			cout << "lhs matrix row, col sizes " << r1 << " " << c1 << endl;
			cout << "rhs matrix row, col sizes " << r2 << " " << c2 << endl;
			exit(1);
			return returnedObj;
		}
		else
		{
			cout << "r1 " << r1 << "r2 " << r2 << endl;
			cout << "c1 " << c1 << "c2 " << c2 << endl;
			// 5 x 3 * 4 x 5 = 4 x 3
			for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			// multiply in matrix
			for (int k = 0; k < 5; k++)
			{
				returnedObj.matrix[i][j] += (one.matrix[i][k] * two.matrix[k][j]);
			
			}
		}
	}
		}
		
	}
	
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			// multiply in matrix
			for (int k = 0; k < 5; k++)
			{
				returnedObj.matrix[i][j] += (one.matrix[j][k] * two.matrix[k][i]);
			
			}
		}
	}
	
	return returnedObj;

}


TwoD::TwoD(ifstream& inputStream)
{
	// get the row and column
	int r, c;
	inputStream >> r >> c;
	
	Row = r; Col = c;
	
	matrix = new ArrayPtr[Row];
	
	for (int i = 0; i < Row; i++)
	{
		matrix[i] = new int[Col];
	}
	
	for (int i = 0; i < Row; i++)
 	{
 		for (int j = 0; j < Col; j++)
 		{
 			inputStream >> matrix[i][j];
 		}

 	}
 

}


 void TwoD::writeFILE(ofstream& outputStream)
 {
 	outputStream << Row << " " << Col << endl;
 	for (int i = 0; i < Row; i++)
 	{
 		for (int j = 0; j < Col; j++)
 		{
 			outputStream << setw(3) << matrix[i][j];
 		}
 		outputStream << endl;
 	}
 
 }


