#include <iostream>
#include <string>
#include "TV.h"

using namespace std;

namespace Television_nm
{
    Tv::Tv()
    {
        displayType = "";
        dimension = 0;
        connectivitySupport = nullptr;
        total_c = 0;
    }

    Tv::Tv(string d, double dimen)
    {
        displayType = d;
        dimension = dimen;
    }

    void Tv::dynamic_array(int n)
    {
        // remember to assign total_c for copy copy constructor
        total_c = n;
        connectivitySupport = new string[n];
        int temp_i = n;
        string temp; 
        int i = 0;
        while(n)
        {
            cin >> temp;
            connectivitySupport[i] = temp;

            i++;
            n--;
        }
    }

    Tv::Tv(Tv &copy_constructor)
    {
        // harus copy dia ke bikin baru 1 obj lagi besok aja
        displayType  = copy_constructor.displayType ;
       // cout << "checking " << copy_constructor.displayType << endl;
        dimension =  copy_constructor.dimension ;
        total_c = copy_constructor.total_c ;
        //cout << "masuk " << endl;
        connectivitySupport = new string[copy_constructor.total_c];

        for (int i = 0; i < total_c ; i++)
        {
             connectivitySupport[i] = copy_constructor.connectivitySupport[i];
        }
    }


    void Tv::setAll(int for_name)
    {
        string s; double d; int count;
        cout << "Enter TV#" << for_name << " display type :" << endl;
        cin >> s;
        cout << "Enter TV#" << for_name << "Dimension :" << endl;
        cin >> d;
        cout << "Enter the number of connectivity modes" << endl;
        cin >> count;

        cout << "Enter TV#" << for_name << " connectivity support types :" << endl;
        dynamic_array(count);

        displayType = s;
        dimension = d;
    }


    // desctuctor
    Tv::~Tv()
    {
        // will cause error, since it delete connectiviysuport each it go out to the 
        //delete [] connectivitySupport;

    }

}