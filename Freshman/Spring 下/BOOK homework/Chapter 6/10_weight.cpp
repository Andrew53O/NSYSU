#include <iostream>

using namespace std;



class Weight
{   
    public:

    void setWeightPounds(double n);
    void setWeightKilograms(double n);
    void setWeightOunces(double n);
    void output();

    private:
    double pound;
    double kilo;
    double ounce;


};


int main()
{
    //cout.setf(ios::fixed);
    //cout.setf(ios::showpoint);
    //cout.precision(4);

    Weight person1, person2, person3;

    person1.setWeightKilograms(60);
    person1.output();
    cout << endl;

    person2.setWeightPounds(110);
    person2.output();
    cout << endl;

    person3.setWeightOunces(1800);
    person3.output();
    cout << endl;
    return 0;
}



void Weight::setWeightKilograms(double num_kilo)
{
    cout << "Set Kilograms = "<< num_kilo << endl; 
    kilo = num_kilo;
    pound = num_kilo * 2.21;
    ounce = pound * 16;
}

void Weight::setWeightPounds(double num_pound)
{
    cout << "Set Pounds = "<< num_pound << endl; 
    pound = num_pound;
    kilo = num_pound / 2.21;
    ounce = pound * 16;
}

void Weight::setWeightOunces(double num_ounce)
{
    cout << "Set Ounces = "<< num_ounce << endl; 
    ounce = num_ounce;
    pound = num_ounce/16.0;
    kilo = pound/2.21;
}



void Weight::output()
{
   cout << "> In kilograms: " << kilo << endl;
   cout << "> In Pounds: " << pound << endl;
   cout << "> In Ounces: " << ounce << endl;

}