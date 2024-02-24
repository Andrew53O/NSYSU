#include <iostream>
#include <ctime>
using namespace std;

int main(void)
{
    srand(time(NULL));
    const int unique_number = 4;
    int winner[unique_number];
    int low_range = 1;
    int high_range = 4;
    for (int i = 0; i < unique_number; i++)
    {
        int random_number;
        bool isDuplicate;
        do
        {
            isDuplicate = false;
            random_number = rand() % high_range + low_range;
            
            for (int j = 0; j < i; j++)
            {
                if(random_number == winner[j])
                {
                    isDuplicate = true;
                    break;
                }
            }
        } while (isDuplicate);
        
        winner[i] = random_number;
    }


    for (int i =0; i < unique_number; i++)
    {
        cout << " " << winner[i];
    }
    return 0;
}