#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int minus = -500;
    cout << (minus)/100 << endl;

    int plus = abs(minus);

    int dollar = plus/100;
    int cents = plus%100;

    cout << "dollar = " << dollar << " cents " << cents << endl;

    return 0;

}