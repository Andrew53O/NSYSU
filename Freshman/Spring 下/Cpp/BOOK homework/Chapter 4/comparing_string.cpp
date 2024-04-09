#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string name1;
    cin >> name1;

    string *array_name = new string[3];

    array_name[0] = "andrew";
    if(name1 == array_name[0])
    {
        cout << "it is the same" << endl;
    }

 

    for(int i = 0; i < 1; i++)
    {
        cout << array_name[i] << endl;
    }
    return 0;
}