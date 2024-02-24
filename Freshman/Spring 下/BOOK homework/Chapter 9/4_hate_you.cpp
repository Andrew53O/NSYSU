#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main(void)
{
    string the_line;
    string temp;

        while(cin >> temp)
        {
            if(temp == "quit")
            {
                break;
            }

            if(temp.length() >= 4)
            {
                bool can = false;
                int count = 0;
                string temp_lain = "";
                for (int i = 0; i < temp.length(); i++)
                {
                    if(isalpha(temp[i]))
                    {
                        count++;
                    }
                    else
                    {
                        temp_lain+=temp[i];
                    }
                }

                if(count == 4)
                {
                    if(temp[0] >= 'A' && temp[0] <= 'Z')
                    {
                        cout << "Love" << temp_lain << " ";
                    }
                    else 
                    {
                        cout << "love"<< temp_lain << " ";
                    }
                }
                else
                {
                    cout << temp << " ";
                }
                
            }
            else
            {
                cout << temp << " ";
            }

        }

    return 0;
}