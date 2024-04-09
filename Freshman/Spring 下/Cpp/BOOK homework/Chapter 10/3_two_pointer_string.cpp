#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void)
{
    cout << "Enter a sring less than 80 charaters long" << endl;

    char storage[80] = {};
    char *head = nullptr, *tail = nullptr;

    cin.getline(storage, 80);

    int length = strlen(storage);

    head = &storage[0]; tail = &storage[length - 1];

    cout << "head = " << *head << endl;
    cout << "tail = " << *tail << endl;

    int count = 1;
    while(true)
    {
        if(tail < head)
        {
            break;
        }
        if(*tail == ' ')
        {
            count++;
        }
        cout << *tail;

        tail = tail-1;
    }
    cout << endl;
    cout << "And your number of words is :" << count << endl;
    return 0;
}