#include <iostream>
using namespace std;


#include "TwoD.h"

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
	
	TwoD matrix3(row_input, col_input);
	// assigment
	
	cout << "matrix3 = matrix1 + matrix2" << endl;
	matrix3 = matrix1 + matrix2;
	cout << "matrix3 = " << endl;
	matrix3.output();
	
	cout << "matrix3 = matrix1 * matrix2" << endl;
	matrix3 = matrix1 * matrix2;
	cout << "matrix3 = " << endl;
	matrix3.output();

	cout << "testing---------------------" << endl;
	TwoD testing_destruc;

	// error happen
	//testing_destruc = TwoD(5, 7);
	cout << "end of code" << endl;

return 0;
}
