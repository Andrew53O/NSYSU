#include <iostream>
#include <string>
using namespace std;

void input(double&, double&); // it has to be with '&'
void calculate(double&, double&, double&, double&);
void output(double&, double&);

int main(void)
{
    double kilo = 0, gram = 0;
    double pound = 0;
    double ounces = 0;
    string ans;

    do
    {
        input(kilo, gram);
        calculate(kilo, gram, pound, ounces);
        output(pound, ounces);

        cout << "\nKeep calculating? yes/no\n"; cin >> ans;
    }while (ans == "yes");
    



    return 0;
}
void input(double &kilo, double &gram)
{
    cout << "Input kilos:"; cin >> kilo;
    cout << "Input gram:"; cin >> gram;
}


void calculate(double& kilo, double& gram, double& pound, double& ounces)
{   

    pound = (kilo + (gram/1000.0)) * 2.2046;
    ounces = (pound - static_cast<int>(pound)) * 16.0;
    pound = static_cast<int>(pound);
}


void output(double& pound ,double& ounces)
{
    cout << "Weight: " << pound << " pound" << " and " << ounces << " ounces" << endl;

}