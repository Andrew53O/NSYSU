#include <iostream>
#include <string>
#include <cctype>


using namespace std;

int main(void)
{
    // string s;
    // getline(cin, s);

    // int length = s.size(); // or size();
    // string output, temp;
    // output = "";
    // temp = "";

    // bool capital = false;
    // int count = 0;
    // for (int i = 0; i < length; i++)
    // {
    //     if (isalpha(s[i]))
    //     {
    //         count++;
    //     }
    //     else if (ispunct(s[i]) || s[i] == ' ')
    //     {
    //         if(count == 4)
    //         {
    //             if(isupper(s[i - 4]))
    //             {
    //                 output += ("Love" + s[i]);

    //             }
    //             else
    //                 output += ("love" + s[i]);
    //         }

    //         count = 0;
    //     }


        
    // }

    // cout << "output == " << endl;
    // cout << output << endl;

    // cout << "testing statr";
    // string a; a = "";
    // char ab = ' ';
    //a = ("adfasandrew" + ab);

    //cout << a << endl;



    //cara ko steven

    string input, temp, output;

    getline(cin, input);

    int wlength = 0;
    bool capital = false;
    temp = "";

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ' || input[i] == ',' || input[i] == '.' || input[i] == '!')
        {
            if (wlength == 4)
            {
                if (capital)
                {
                    temp = "Love";
                }
                else
                    temp = "love";
            }
             temp += input[i];

            output += temp;
            temp = "";

            capital = false;
            wlength = 0;
        }
        else
        {
            if (wlength == 0)
            {
                if(isupper(input[i]))
                {
                    capital = true;
                }
            }
            temp += input[i];
            wlength++;
        }


       

    }

    cout << output << endl;
    
    return 0;
}