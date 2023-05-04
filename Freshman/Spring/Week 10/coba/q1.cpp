#include <iostream>

using namespace std;

class Date
{
    public:
    friend ostream& operator <<(ostream& outputstream , const Date& d)
    {
        outputstream << "ostream overload ....." << endl;
        outputstream << "Date :" << endl;
        outputstream << d.year << " / " << d.month << " / " << d.day << endl;
        return outputstream;
    }

    friend istream& operator >>(istream& inputstream, Date& d)
    {
        cout << "istream overload ........" << endl;
        cout << "Please enter year : "; inputstream >> d.year;
        cout << "Please enter Month : "; inputstream >> d.month;
        cout << "Please enter day :"; inputstream >> d.day;

        return inputstream;
    }

    private:
    int year;
    int month;
    int day;
};

int main(void)
{
    Date d1;
    cin >> d1;
    cout << d1;



    return 0;
}