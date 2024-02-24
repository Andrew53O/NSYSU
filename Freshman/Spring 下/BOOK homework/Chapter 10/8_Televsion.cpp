#include <iostream>
#include <string>

#include "TV.h"

using namespace Television_nm;

int main(void)
{
    Tv tv_d;
    string type;
    double d;
    int n;
    cout << "Enter default TV display type : " << endl;
    cin >> type;
    cout << "Enter default TV dimension : " << endl;
    cin >> d;

    tv_d = Tv(type, d); // problem with using desctructor

    cout << "Enter the number of connectivity modes : " << endl;
    cin >> n;
    
    cout << "Enter default TV connectiviy suport types :" << endl;
    tv_d.dynamic_array(n);

    // print default
    cout << "Default TV mode :" << endl;

    cout << "Display type : " << tv_d.getDisplay() <<endl;
    cout << "Dimension(inches) :" << tv_d.getDimension() << endl;
    cout << "Connectiviy suport types:" << endl;

    for (int j =0, num = tv_d.getTotal(); j < num; j++)
    {
        cout << tv_d.getpointer()[j] << endl;
    }


    // ---------------section 2

    cout << "Enter TV numbers : " << endl;
    cin >> n;

    // creating n object of Tv 
    Tv *pointer_array = new Tv[n];

    // assign default Tv
    for (int i = 0; i < n; i++)
    {
        // creating new tv object with the value of defaul TV
        Tv lupa_cara_bikin(tv_d);

        pointer_array[i] = lupa_cara_bikin;
    }

    int index_change;
    cout << "Enter index of TVs required of custimization (input -1 to end)" << endl;
    cin >> index_change;

    while(index_change != -1)
    {
        pointer_array[index_change].setAll(index_change);
        cout << "Enter index of TVs required of custimization (input -1 to end)" << endl;
        cin >> index_change;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "TV#" << i << endl;

        cout << "Display type : " << pointer_array[i].getDisplay() <<endl;
        cout << "Dimension(inches) :" << pointer_array[i].getDimension() << endl;
        cout << "Connectiviy suport types:" << endl;

        for (int j =0, num = pointer_array[i].getTotal(); j < num; j++)
        {
            cout << pointer_array[i].getpointer()[j] << endl;
        }

    }




    return 0;
}