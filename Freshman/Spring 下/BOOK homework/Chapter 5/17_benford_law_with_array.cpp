#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void createFileAndFile(fstream& file);

int main(void)
{
    // create a data.txt file with 100 random numbers

    // i comment this line to make the random number same eacch time i run
    //srand(time(NULL));

    fstream file;
    createFileAndFile(file);

    string line;
    int firstDigit[10] = {};
    int count = 0;
    file.open("data.txt");
    //second option
    //file.open(data2.txt);
    if(file.is_open())
    {
        while(getline(file, line))
        {
            switch(line[0])
            {
                case '0':
                    firstDigit[0]++;
                    break;
                case '1':
                    firstDigit[1]++;
                    break;
                case '2':
                    firstDigit[2]++;
                    break;
                case '3':
                    firstDigit[3]++;
                    break;
                case '4':
                    firstDigit[4]++;
                    break;
                case '5':
                    firstDigit[5]++;
                    break;
                case '6':
                    firstDigit[6]++;
                    break;
                case '7':
                    firstDigit[7]++;
                    break;
                case '8':
                    firstDigit[8]++;
                    break;
                case '9':
                    firstDigit[9]++;
                    break;
            }
            count++;
        }
        file.close();
    }

    // counting
    for (int i = 0; i < 10; i++)
    {
        cout << i << setw(5) << " " << (firstDigit[i]/static_cast<double>(count)) * 100 << endl;
    }

    

    return 0;
}


void createFileAndFile(fstream& file)
{
    file.open("data.txt", ios::out);
    for (int i = 0; i < 1536; i++) // 1536 is random
    {
        int random = rand(); 
        file << random << endl;
    }
    file.close();
}