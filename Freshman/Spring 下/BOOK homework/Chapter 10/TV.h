

#ifndef TV_andrew
#define TV_andrew

#include <iostream>
#include <string>

using namespace std;

namespace Television_nm
{
    class Tv
    {
        
        public:
        // constructor
        Tv();

        Tv(string d, double dimen);


        void dynamic_array(int n);
        // copy construcotr
        Tv(Tv &copy_constructor);
    
        // mutator
        void setAll(int n);

        // accessor
        string getDisplay() {return displayType;}
        double getDimension() {return dimension;}
        int getTotal() {return total_c;}
        string* getpointer() {return connectivitySupport;}

        // desctrutor
        ~Tv(); // cannot use destructor otherwise it will delete the connectivitySupport

        private:
        string displayType;
        double dimension;
        string* connectivitySupport;
        int total_c;
    };



}




#endif