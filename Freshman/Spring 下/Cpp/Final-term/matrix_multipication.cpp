#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    cout << "before ---" << endl;
    int **p = new int*[3];

    for (int i = 0; i < 3; i++)
    {
        p[i] = new int[5];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(i == 0)
            {
                p[i][j] = 0;
            }
            else if (i == 1)
            {
                p[i][j] = 1;
            }
            else if (i == 2)
            {
                p[i][j] = 2;
            }
        }
    }



    int **p2 = new int*[5];

    for (int i = 0; i < 5; i++)
    {
        p2[i] = new int[4];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(j == 0)
            {
                p2[i][j] = 0;
            }
            else if (j == 1)
            {
                p2[i][j] = 1;
            }
            else if (j == 2)
            {
                p2[i][j] = 2;
            }
            else if (j == 3)
            {
                p2[i][j] = 3;
            }
        }
    }

    cout << "matrix 1-------" << endl;

    for (int i = 0; i < 3; i++ )
    {
        for (int j = 0; j < 5; j++)
        {
            cout << setw(3) << p[i][j];
        }
        cout << endl;
    }


    cout << "matrix 2-------" << endl;

    for (int i = 0; i < 5; i++ )
    {
        for (int j = 0; j < 4; j++)
        {
            cout << setw(3) << p2[i][j];
        }
        cout << endl;
    }
    
     int **res = new int*[3];

    for (int i = 0; i < 3; i++)
    {
        res[i] = new int[4];
    }

     cout << "=------- result " << endl;
    for (int i = 0; i < 3; i++ )
    {
        for (int j = 0; j < 4; j++)
        {
            res[i][j] = 0;
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++ )
    {
        for (int j = 0; j < 4; j++)
        {
           for (int k = 0; k < 5; k++)
           {
                res[i][j] += (p[i][k] * p2[k][j]);
                cout << "berhasil" << endl;
           }
        }
        cout << endl;
    }

    cout << "=------- result " << endl;
    for (int i = 0; i < 3; i++ )
    {
        for (int j = 0; j < 4; j++)
        {
            cout << setw(3) << res[i][j];
        }
        cout << endl;
    }
    

    return 0;
}