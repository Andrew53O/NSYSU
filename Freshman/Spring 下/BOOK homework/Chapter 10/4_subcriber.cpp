#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Subcriber
{
    public:
    void setAll()
    {
        cout << "Enter person name" << endl;
        cin >> name;

        cout << "Enter number of channels" << endl;
        cin >> numChannel;

        // making dynamic array
        channelList = new string[numChannel];

        for (int i = 0; i < numChannel; i++)
        {
            cout << "Enter name of channel " << i + 1 << endl;
            cin >> channelList[i];
        }
    }
    // output
    void display()
    {
        cout << "name = " << name << endl;

        for (int i = 0; i < numChannel; i++)
        {
            cout << "Channel " << i + 1 << channelList[i] << endl;
        }   


    }
    // reset
    void reset()
    {
        numChannel = 0;
    }
    // overload assigment   
    Subcriber& operator =(Subcriber& theObj)
    {
        name = theObj.name;

        if(numChannel != theObj.numChannel)
        {
            delete channelList;
            
            channelList = new string[theObj.numChannel];
        }
        numChannel = theObj.numChannel;
       // soalnya klo sama kek bisa langsung copy aja
        for (int i = 0; i < theObj.numChannel; i++)
        {
            channelList[i] = theObj.channelList[i];

        }

        return *this;
    }    
    // descturtor
    ~Subcriber()
    {
        delete [] channelList; // ga tau gagal apa berhasil
    }


    private:
    string name;
    int numChannel = 0;
    string *channelList = nullptr; /// bener kah ?
};

int main(void)
{
    Subcriber testing;

    testing.setAll();
    testing.display();
    cout << "------------" << endl;
    Subcriber testing2;
    testing2 = testing;

    testing2.display();
    cout << "------------" << endl;
    cout << "reset happend to testing" << endl;
    testing.reset();
    cout << "testing displya" << endl;
    testing.display();

    cout << endl;
    cout << "tesing2 displya" << endl;
    testing2.display();


    return 0;
}