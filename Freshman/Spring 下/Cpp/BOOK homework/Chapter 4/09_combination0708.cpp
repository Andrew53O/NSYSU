#include <iostream>
#include <limits>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;


void input(double&, double&, double&, double&); // it has to be with '&'
void calculate(double&, double&, double&, double&);
void output(double&, double&, double&, double&);


int mode = -1;

int main(void)
{
    string keep = "nyasal";

    do
    {
        fflush(stdin);
        bool valid_input = false; 
        do 
        {
            cout << "If you want to convert pound and ounces to kg and g, enter 1"<<endl;
            cout << "If you want to convert kg and g to pound and ounces, enter 2"<<endl;
            cin >> mode;

            valid_input = cin.good();

            if(valid_input == false)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

        }
        while(valid_input == false);



        double pound, ounces, kilo, gram;
        if (mode == 1) // pound to kg
        {
            input(pound, ounces, kilo, gram);
            calculate(pound, ounces, kilo, gram);
            output(pound, ounces, kilo, gram);

        }
        else if (mode == 2) // kg to pound;
        {
            input(pound, ounces, kilo, gram);
            calculate(pound, ounces, kilo, gram);
            output(pound, ounces, kilo, gram);

        }
        else
        {
            cout << "Error!"<<endl;
        }

        // last question
        cout << "keep calculating? yes/no"<< endl;
        cin >> keep;

    }
    while(keep == "yes");


    return 0;
}



void input(double& pound, double& ounces, double& kilo, double& gram) // bisa ga ya argumemntnya based on name diatass
{
    if (mode == 1)
    {
        cout << "Input pounds:"; cin >> pound;
        cout << "Input ounces:"; cin >> ounces;

    }
    else // mode == 0
    {
        cout << "Input kilos:"; cin >> kilo;
        cout << "Input gram:"; cin >> gram;
    }
}


void calculate(double& pound, double& ounces, double& kilo, double& gram)
{   
    if (mode == 1)
    {
        pound = pound + ( ounces/ 16);
        kilo = static_cast<int>((pound)/ 2.2046);
        gram = ((pound)/ 2.2046) - kilo;

        gram *= 1000;    
        
    }
    else
    {
        pound = (kilo + (gram/1000.0)) * 2.2046;
        ounces = (pound - static_cast<int>(pound)) * 16.0;
        
        pound = static_cast<int>(pound);
    }
}


void output(double& pound, double& ounces, double& kilo, double& gram)
{
    if (mode == 1)
    {
        cout << "Weight: " << kilo << " kg" << " and " << gram << " g" << endl;
    }
    else
    {
        
        cout << "Pound: " << pound << " pound" << " and " << ounces << " ounces" << endl;
    }

}