#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>


using namespace std;


char input[50] = {};
char alpabet[2][5] = {{'a', 'e', 'i', 'o', 'u'}, {'0', '0', '0', '0', '0'}};




int main()
{
    cout << "Please input the string : "; cin.getline(input, 50);


    for (int i = 0; i < strlen(input); i++)
    {
    
        switch(input[i])
        {
            case 'a':
                alpabet[1][0]++;
                break;
            case 'e':
                alpabet[1][1]++;
                break;
            case 'i':
                alpabet[1][2]++;
                break;
            case 'o':
                alpabet[1][3]++;
                break;
            case 'u':
                alpabet[1][4]++;
                break;
            
            default:
                ;
        }

    }

    cout <<"Vowel" << setw(10)  << "Count"<<endl;
    for (int j = 0; j < 5; j++)
    {
        cout << setw(3) << alpabet[0][j] << setw(10) <<  alpabet[1][j] << endl;
    }
    return 0;
}