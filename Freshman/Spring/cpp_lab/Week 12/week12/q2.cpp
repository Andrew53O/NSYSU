#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>
#include <ctime>

using namespace std;



int main(void)
{
	// randomise seed
	srand(time(NULL));
	
	// input
	int row, col, nzero;
	cout << "Enter total Rows and Columns : "; cin >> row >> col;
	

	cout << "Enter total non-zero values : "; cin >> nzero;
	
	cout << "The element of the sparce matrix " << endl;
	
	// make 2d dynamic array
	
	// make an array of pointer
	int* *p = new int*[row];
	
	for (int i = 0; i < row; i++)
	{
		p[i] = new int[col];
	}
	
	// random insert non-zero number;
	

	// making 3 vector to save the index
	vector<int> save_i;
	vector<int> save_j;
	vector<int> save_v;
	
	// make sure that the posistion is not duplicate
	for (int i = 0; i < nzero; i++)
	{
		while(true)
		{
			int random_i = rand() % row;
			int random_j = rand() % col;
			int random_v = rand() % 9 + 1; // 1~ 9
			
			
			// haven't occupied
			if(p[random_i][random_j] == 0)
			{
				p[random_i][random_j] = random_v;
				save_i.push_back(random_i);
				save_j.push_back(random_j);
				save_v.push_back(random_v);

				break;
			}
		
		}
	}

	// temp_display
	for (int i = 0; i < row; i++)
	{
		cout << "[ ";
		for (int j = 0; j < col; j++)
		{
			cout << p[i][j] << "  ";
		}
		cout << " ]";
		cout << endl;
	}
	
	cout << "(#ROW #COL #NonZero) : (" << row << " " << col << " " << nzero << " )" << endl;
	
	cout << "\n After compressing ..." << endl << endl;
	
	cout<< "(Row Col value)" << endl;
		
	int length = save_i.size();
	
	for (int i = 0; i < length; i++)
	{
		cout << "( " << save_i[i] << setw(4) << save_j[i] << setw(6) << save_v[i] << ") " <<  endl;
	}
	

	// inget delete

	for (int i = 0; i < row; i++)
	{
		delete [] p[i];
	}
	
	delete [] p;

return 0;
}
