#include <iostream>
#include <stdio.h>
#include <time.h>
#include <dos.h>
#include <windows.h>
using namespace std;

class Testing
{
    public:

    Testing(): money(18){;}
    Testing(int m): money(m) {;}

    int getMoney() const {return money;}

    private:
    int money;

};

bool operator <(const Testing& amount1, const Testing& amount2)
{
    return (amount1.getMoney() < amount2.getMoney());
}
int main(void)
{
    Testing obj_1(13), obj_2;

    cout << "Comparing money" << endl;
    cout << "................" << endl;
    Sleep(6);
    if(obj_1 < obj_2)
    {
        cout << "The obj_2 is richer" << endl;

    }
    else
        cout << "The obj1 is richer" << endl;
    return 0;
}