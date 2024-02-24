#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int generate(int num)
{
    return (rand() % num + 1);
}



int main(void)
{
    int finalist = 25;
    srand(time(NULL));
    // stacic initialization
    int array[4] = {0};

    // default vaolues in parameters
    // overload funciton
    // template

   int counter;
   for(int i = 0; i < 4; i++)
   {
        array[i] = generate(finalist);
        while(true && i > 0)
        {
            counter = 0;
            for(int j = 0; j < i; j++)
            { 
                if(array[i] == array[j])
                {
                    array[i] = generate(finalist);
                }
                else
                {
                    counter++;
                }
            }
            if(counter == i)
            {
                break;
            }
        }
   }


    for (int i = 0; i < 4; i++)
    {
        cout << "  " << array[i];
    }
    return 0;
}