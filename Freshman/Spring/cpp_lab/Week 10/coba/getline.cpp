#include <iostream>
#include <string>
using namespace std;

int main(void)
{   
    string a_line;
    cout << "This program will read a line without any limit :" << endl;
    getline(cin, a_line);


    
    cout<< "The line you inputteed: " << a_line << endl;


    return 0;
}