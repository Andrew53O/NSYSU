#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string first_name, last_name;
    cout << "Enter your first and last name:";
    cin >> first_name >> last_name;

    cout << "Your last name is spelled:" << endl;

    for (int i = 0, length = last_name.length(); i < length; i++)
    {
        cout << last_name.at(i) << " ";
        //last_name.at(i) = "- "; cannot use const char* or string to assign char
        last_name.at(i) = '-';
    }
    cout << endl;
    for (int i = 0, length = last_name.length(); i < length; i++)
    {
        cout << last_name.at(i) << " ";
    }

    cout << "\nGood day " << first_name << endl;


    return 0;
}