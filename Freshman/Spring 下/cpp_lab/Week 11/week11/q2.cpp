#include <iostream>

using namespace std;

int main(void)
{
    // general method and pointer method
    int r, c;
    cout << "Please enter the number of rows and columns :" << endl;
    cin >> r >> c;

    // normal method of creattng 2d array
    int array[r][c];

    // pointer method of creating 2d array
    typedef int* IntPointer;
    IntPointer *jugapointer = new IntPointer[r];

    for (int i = 0; i < c; i++)
    {
        jugapointer[i] = new int[c];
    }

    cout << "Please enter all elements " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int value;
            cin >> value;

            array[i][j] = value;
            jugapointer[i][j] = value;
        }
    }


    cout << "2d array address (general method) " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int  j = 0; j < c; j++)
        {
            cout << " " <<  array[i][j] << "@  " << &array[i][j];
        }
        cout << endl;
    }

    cout << endl;
    cout << "2d array address (pointer method) " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int  j = 0; j < c; j++)
        {
            cout << " " <<  jugapointer[i][j] << "@  " << &jugapointer[i][j];
        }
        cout << endl;
    }
    
    
    // deleteting dynamic allocated array
    
    for (int i = 0; i < r; i++)
    {
    	delete [] jugapointer[i];
    }

    // deleting the main pointer
	delete [] jugapointer;
    return 0;
}
