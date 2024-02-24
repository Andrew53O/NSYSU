#include <iostream>
#include <string>
#include <cctype> // tolower touper dll
#include <algorithm> // transfrom()
using namespace std;

/// ///////////////////// line 15
class Pizza
{
    public:
        // mutator()
        void setAll(string size, string type, int topping_pep, int topping_cis);

        // accessor() // no need the argument case can return from private variables
        int getSize(); // bikin get size abistu bikin klo topping tambah uang brp
        char getType();

        // outputdescription()
        void outputDescription();
        // computePrice()
        double computePrice();


    private:
        
        int size;
        char type;
        int topping_pep;
        int topping_cis;
};

int main(void)
{
    Pizza zza1 ,zza2;
    // zza1.set()
    zza1.setAll("SMALL", "HANDTOSSED", 0, 3);
    zza2.setAll("LARGE", "PAN", 2, 1);
    zza1.outputDescription();
    cout << "Price of pizza: " << zza1.computePrice() << endl;

    zza2.outputDescription();
    cout << "Price of pizza: " << zza2.computePrice() << endl;

    return 0;
}

void Pizza::setAll(string si, string ty, int add_pep, int add_cis)
{ // harus beda namanya ama nama di class klo ga variable clasnsya ga ke assign
    string s, t ;
    for (auto &s : si) s = tolower(s);

    for (auto &t : ty) t = tolower(t);

    cout << s << t << endl;
    cout << si << type << endl;

    if (si == "small") size = 1;
    else if (si == "medium") size = 2;
    else if (si == "large") size = 3;
    else cout << "Please input corrent size" << endl;

    if (ty == "handtossed") type = 'h';
    else if (ty == "deepdish") type = 'd';
    else if (ty == "pan") type = 'p';
    else cout << "Please input corrent size" << endl;

    topping_pep = add_pep;
    topping_cis = add_cis;

}

char Pizza::getType()
{
    return type;
}

int Pizza::getSize()
{
    return size;
}

void Pizza::outputDescription()
{
    string output_type, output_size;

    switch(size)
    {
        case 1:
            output_size = "Small";
            break;
        case 2:
            output_size = "Medium";
            break;
        case 3:
            output_size = "Large";
            break;
        // no need to default, cause already filtered in set funtion
    }

    switch (type)
    {
        case 'd':
            output_type = "Deep Dish";
            break;
        case 'h':
            output_type = "Hand Tossed";
            break;
        case 'p':
            output_type = "Pan";
            break;
        // no need to default also, cause already filtered
    }

    cout << "This pizza is: " << output_size << ", " << output_type << ", with " << topping_pep << " pepperoni toppings and " << topping_cis << " cheese toppings" << endl;

}

double Pizza::computePrice()
{
    double res = 0, allTopp;

    if (size == 1) res += 10;
    else if (size == 2) res += 14;
    else if (size == 3) res += 17;

    allTopp = topping_cis + topping_pep;

    res += (allTopp * 2);

    return res;
}
