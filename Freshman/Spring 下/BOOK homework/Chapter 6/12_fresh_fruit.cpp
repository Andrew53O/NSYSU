#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
#include <cstdlib>

using namespace std;

class BoxofProduce
{
    public:
    // mutator
    void setfruit(string buah, int index);
    void output();
    void substitude();
    // Accesor
    string getFruit(int index);
     


    private:
    string fruit_in_class[3];

};



int main(void)
{
    srand(time(NULL));

    BoxofProduce FirstOrder;
    string fruits[5];
    ifstream reading_file;
    reading_file.open("12produce.txt");

    if (!(reading_file.good()))
    {
        cout << "File not found"<< endl;
        return 0;
    }

    for (int i = 0; i < 5; i++) getline(reading_file, fruits[i]);

    // bikin ramdon 3 int, trs randomin 
    for (int i = 0; i < 3; i++)
    {
        int random_index = rand() % 5;
        FirstOrder.setfruit(fruits[random_index], i);
    }

    char ans;

    while(ans != 'q')
    {
        FirstOrder.output();
        cout << "Enter 'c' to change a bundle." << endl;
        cout << "Enter 'q to quit" << endl;

        cin >> ans;

        if (ans == 'c')
        {
            FirstOrder.substitude();
        }
    }

    // final result
    cout << "Final contents" << endl;
    FirstOrder.output();

    return 0;
}


void BoxofProduce::setfruit(string buah, int index)
{
    fruit_in_class[index] = buah;
}

void BoxofProduce::output()
{
    cout << "The box contains: (1)" << getFruit(0) << " (2)" << getFruit(1) << " (3)" << getFruit(2) << endl;
}

string BoxofProduce::getFruit(int index)
{
    return fruit_in_class[index];
}

void BoxofProduce::substitude()
{
    int index; string subs;
    cout << "Enter index of item to change." << endl;
    cin >> index;
    cout << "Enter item to substitude." << endl;
    cin >> subs;

    // minus to reordering with the index in array
    setfruit(subs, index - 1);


}