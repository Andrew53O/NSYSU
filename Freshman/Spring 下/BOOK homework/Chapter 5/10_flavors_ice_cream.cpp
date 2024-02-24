#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

///////////////////////////////////////////////////////////////////////////// LINE 125

void displayMenu();
void displayRemain();
void displayUserCart();
void addCart(string flavor, int quantity, int count);


string arrayUserCart[5];
int arrayUserQuantity[5] = {0};


int arrayStocks[5] = {20, 15, 15, 20, 20};
string arrayFlavors[5] = {"Chocolate", "Vanilaa", "Strawberry", "Raspberry", "Buttersotch"};

int totalItemsCart = 0;

int main(void)
{

    int count = 0;

    displayMenu();
    cout << "The products remain in the stock" << endl;
    for (int i = 1; i <= 5; i++ )
    {
        cout << i << setw(7) << " " << arrayStocks[i - 1] << endl;
    }
    // remaining products
    char continew;
    do
    {
        string wants;
        int quantity;
    
        cout << "Choice you like:"; cin >> wants >> quantity;
        count++;
        addCart(wants, quantity, count);
        cout << "Continue Choice? (Y/N) : "; cin >> continew;

        if (continew == 'Y')
        {
            displayRemain();
        }
    }
    while(continew == 'Y');
    
    displayUserCart();


    return 0;
}

void displayMenu()
{
    
    string str = "Flavor";

    cout << "Code" << setw(10) << str << endl;

    for(int i = 1; i <= 5; i++)
    { 
        cout << i << setw(13- str.length()) << " " <<  arrayFlavors[i - 1]<< endl;
    }
}



void addCart(string flavor, int quantity, int count)
{
    int index_remain = -1;
    bool notEnough = false;
    // display reamining table
    for (int i = 0; i < 5; i++)
    {
        if (flavor == arrayFlavors[i])
        {
            index_remain = i;
        }
    }

    if (index_remain != -1)
    {
        arrayStocks[index_remain] -= quantity;

        if(arrayStocks[index_remain] < 0)
        {
            cout << "The " << arrayFlavors[index_remain] << " is not enough" << endl;
            notEnough = true;
        }
    }

    // add to new array
    if (!notEnough )
    {
        int index = 0;
        fflush(stdin);
        // check if it is in array
        bool itemIsInArray = false;
        int indexItems; 
        for (int i = 0; i < 5; i++)
        {
            if(count >= 5)
            {
                count = 5 ;
            }
            if(flavor == arrayFlavors[i])
            {
                itemIsInArray = true;
                indexItems = i;
                break;
            }
        }
        // first item that is in array
        if (itemIsInArray)
        {
            if(count == 1)
            {
                arrayUserCart[index] = flavor;
                arrayUserQuantity[index] = quantity;
                totalItemsCart++;
            }
            else // count > 1
            {
                // //////////////////// below bisa add ke array user ada masalah di index keknya
                // check if the items is in ARRAY of USER CART
                bool noNeedToAddNewCart = true;
                int indexOfOldItems;
                for (int i = 0; i < totalItemsCart; i++)
                {
                    if (flavor == arrayUserCart[i])
                    {
                    noNeedToAddNewCart = false;
                    indexOfOldItems = i;
                    }
                }
                
                if(noNeedToAddNewCart == false)
                {
                    arrayUserQuantity[indexOfOldItems] += quantity;

                }
                else
                {
                    arrayUserCart[totalItemsCart] = flavor;
                    arrayUserQuantity[totalItemsCart] = quantity;
                    totalItemsCart++;
                }
            }

            
            
        }
        else // items is not at array
        {
            cout << "Please input the flavor that are in menu!" << endl;
        }
    }
    
    


}




void displayRemain()
{
    cout << "The products remain in the stock" << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << setw(8) << arrayStocks[i - 1] << endl;
    }

}

void displayUserCart()
{
    cout << "The user's cart:" << endl;
    for (int i = 0; i < totalItemsCart; i++)
    {
        cout << setw(6) << " " << setw(11) << left << arrayUserCart[i] << setw(4) << " " <<arrayUserQuantity[i] << endl;
    }

}