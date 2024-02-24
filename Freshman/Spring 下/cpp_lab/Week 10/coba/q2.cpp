#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    char symbol, symbol2;
    cin.get(symbol);

    cin.ignore(1000, '\n');
    cin.get(symbol2);
    cout << symbol2 << endl;
    cout << "End" << endl;
    return 0;
}