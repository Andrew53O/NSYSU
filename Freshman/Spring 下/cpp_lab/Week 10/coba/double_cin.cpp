#include <iostream>
#include <string>
using namespace std;

int main(void)
{   
    int c1, c2;
    cout << "Testing for newline input double cin" << endl;
    // artinya cin bakal ignore white spaces, white spces include spce, tab, and newline
    cin >> c1 >> c2;

    
    cout<< "The line you inputteed: " << c1 << c2 << endl;


    return 0;
}