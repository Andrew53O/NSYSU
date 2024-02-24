#include <iostream>
#include <fstream>
#include <string>

using namespace std;


bool check(int n)
{
    return (n % 4 == 3);
}
int main(void)
{
    ifstream input;
    ofstream output;

    string name;
    cout << "Enter a file name: "; cin >> name;
    string og = name;
    name += ".txt";
    input.open(name);
    if(input.fail())
    {
        cout << "failed" << endl;
    }
    og += "_out.txt";
    output.open(og);
    if (output.fail())
    {
        cout << "failed2" << endl;
    }

    // read until end
    int temp;
    while(input >> temp)
    {
        if(check(temp))
        {
            output << temp << endl;
        
        }
        else
        {
            break;
        }
    }
    //output << "bisa" << endl;
    input.close();
    output.close();

    cout << "build " << og << endl;
    return 0;
}