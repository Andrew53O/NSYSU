#include <iostream>
#include <sstream>
#include <string>
#include <cctype>


using namespace std;

int main(void)
{
    string the_line, output = "";

    getline(cin, the_line);

    stringstream ss;
    ss.clear();
    ss.str("");

    // masukin theline to stringstream
    ss << the_line;

    while(ss >> the_line)
    {   
        if(the_line.length() >= 4)
        {
            int count = 0;
            bool capital = false;
            for (int i =0; i < the_line.length(); i++)
            {

                if(isalpha(the_line[i]))
                {
                    if(isupper(the_line[0]))
                    {
                        capital = true;
                    }

                    count++;
                }
            }

            if(count == 4)
            {
                if(capital)
                {
                    output+= "Love";
                    
                }
                else
                {
                    output += "love";
                }
            }
            else
            {
                output+=the_line;
            }
        }
        else
        {
            output+= the_line;
        }


    }

    cout << ss.str() << endl;

    cout << output << endl;
    return 0;
}