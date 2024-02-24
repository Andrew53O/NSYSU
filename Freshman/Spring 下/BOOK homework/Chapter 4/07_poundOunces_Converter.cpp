#include <iostream>
#include <string>
using namespace std;

void input(double&, double&); // it has to be with '&'
void calculate(double&, double&, int&, double&);
void output(int&, double&);

int main(void)
{
    double pound, ounces;
    int kilo;
    double gram;
    string ans;

    do
    {
        input(pound, ounces);
        calculate(pound, ounces, kilo, gram);
        output(kilo, gram);

        cout << "\nKeep calculating? yes/no\n"; cin >> ans;
    }while (ans == "yes");
    



    return 0;
}
void input(double &pound, double &ounces)
{
    cout << "Input pounds:"; cin >> pound;
    cout << "Input ounces:"; cin >> ounces;
}


void calculate(double& pound, double& ounces, int& kilo, double& gram)
{   
    pound = pound + ( ounces/ 16);
    kilo = (pound)/ 2.2046;
    gram = ((pound)/ 2.2046) - kilo;

    gram *= 1000;
}


void output(int& kilo, double& gram)
{
    cout << "Weight: " << kilo << "kg" << " and " << gram << "g" << endl;
}