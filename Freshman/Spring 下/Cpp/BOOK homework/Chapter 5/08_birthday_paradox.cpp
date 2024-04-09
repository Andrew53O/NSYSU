#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>

using namespace std;


int main(void)
{
    srand(time(NULL));
    cout.setf(ios::fixed);
    cout.precision(4);

    // only for printing
    for (int i = 2; i <= 50; i++)
    {
        
        // trialing
        int counter_right = 0;
        for (int j = 1; j <= 5000; j++)
        {

            // peopleing
            bool one_year_birthday[365] = {false}; // need to initialize here, if is in global scope, it failed
            for (int k = 1; k <= i; k++)
            {
                int day = rand() % 365;

                if(one_year_birthday[day] == true)
                {
                    counter_right++;
                    break;
                }
                else
                {
                    one_year_birthday[day] = true;
                }
            }

        }
        double prob = static_cast<double>(counter_right/5000.0);
        
        cout << "For " << i << " people, the probability of two birthdays is about " << prob << endl;
    }



    return 0;
}