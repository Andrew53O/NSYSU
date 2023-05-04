#include <iostream>
#include <string>
using namespace std;

void newLine()
{
    char nextChar;
    do
    {
        cin.get(nextChar);
    } while (nextChar != '\n');
    
}
int main(void)
{   
    string f, l, r;
    string m = "Your record are our records.";
    cout << "name and last : \n"; 
    cin >> f >> l;
    newLine(); // or cin.ignore(100, '\n');
    r = f + "," + l;
    cout << "Your name";
    cout << r << endl;
    // njir bisa kek gitu keren 2 baris tapi pakek 1 cout, walau sebennary klo dijardiin 1 baris tetep sama aja sih
    cout << "Our motto is\n"
        << m << endl;
    cout << "suggest a new one: \n";
    getline(cin,m);

    cout << m << endl;
    return 0;
}