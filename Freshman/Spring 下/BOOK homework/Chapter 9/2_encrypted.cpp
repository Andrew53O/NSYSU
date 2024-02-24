#include <iostream>
#include <string>
#include <vector>

using namespace std;

// udh berhasil di alphabet lanjut di tempat lain si
int main(void)
{
    string the_line;
    cout << "When enter a single '-1' in one line this program will end." << endl;

    while(true)
    {

        getline(cin, the_line);

        //exit program
        if(the_line.length() == 2 && the_line[0] == '-' && the_line[1] == '1')
        {
            return 0;
        }

        vector<char> v;

        for (int i =0,  l = the_line.length(); i < l; i++)
        {
            int check = static_cast<int>(the_line[i]);
            // alphabetic;  // A.. B .. C .. D
            if((check >= 65 && check <= 90) )
            {
                char temp = (check + 3 - 'A') % 26 + 65;
                v.push_back(temp);
            }
            // a.. b.. c.. d..
            else if ((check >= 97 && check <= 122))
            {
                char temp2 = (check + 3 - 'a') % 26 + 97;
                v.push_back(temp2);
            }
            else if (the_line[i] >= '0' && the_line[i] <= '9')
            {
                int value = the_line[i] - '0';

                value = (value + 5) % 10;
                //cout << "cout sebelum jadi value = " << value << endl;
                //cout << "cout sebelum jadi value = " << char(value + '0') << endl;
                v.push_back(char(value + '0'));
                //cout << char(value)   << endl;
            }
            else if (the_line[i] == ' ' || the_line[i] == '\n')
            {
                // intentionally pass

            }
            else 
            {
                v.push_back(' ');
            }
            //cout << int(the_line[i]) << endl;

        }

        // printing purpose
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        // go to next line
        cout << endl;
    }


    return 0;
}