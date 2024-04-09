#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;


void displayMenu();
void calculate(int, int&);

// for better readability in indexing
int arrayOfMenu[5] = {0, 10, 20, 30, 40};

int main()
{
    int voucherCount = -1;
    displayMenu();
    
    // I write input vouches in main function cause is iti only executed once
    cout << "Input your value of voucher: "; cin >> voucherCount;

    int itemCode = -1;
    bool valid_input = false;
    while(voucherCount > 0)
    {
        do
        {
            cout << "Which item you want? "; 
            cin >> itemCode;
           
            if(!(valid_input = cin.good()))
            {
                    cout << "That input is invalid!\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        while(!valid_input);

        cout << "\nThe price of item which you buy: " << arrayOfMenu[itemCode] << endl;
        
        calculate(itemCode, voucherCount);

        // bisa bagusin dikit kek ko steven tapi keknya besok aja, bisa kek ko steven yang klo input vocuher yang salah gitu kasi prompt ampe bener
        cout << "You still have value of voucher: " << voucherCount << endl<< endl;
    }

    // last message
    cout << "You don't have enougth value of voucher to buy anything.\n";



    return 0;
}

void displayMenu()
{
    string nameOfMenu;
    for (int i = 1; i <= 4; i++)
    {
        switch (i)
        {
            case(1):
                nameOfMenu = "Bagel";
                break;
            case(2):
                nameOfMenu = "Cake";
                break;
            case(3):
                nameOfMenu = "Croissant";
                break;
            case(4):
                nameOfMenu = "Toast";
                break;
            default:
                nameOfMenu = "Error";
                break;
        }
        cout <<  i << ". "<< setw(10) << left << nameOfMenu << ": "<< setw(5) << left << arrayOfMenu[i] << endl;

    }

}

void calculate(int itemCode, int& voucherCount)
{
    int price = arrayOfMenu[itemCode];

    voucherCount -= price;
}
