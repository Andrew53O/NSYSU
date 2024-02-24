#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// isi semua arraynya ilang jadi ga bisa buat ngecompare dan
// harusnya isi line brp bisa diganti, biar entar lebih cpt baca codingnya
// jadinya pasti ga ketemu semua // ~ 03 09 2023

int getPlayerScore(string name, int count);
string averaginging(int count, int index_people, int average_score);
int average_Score(int count, int& average_Score);

string *array_name = new string[50];
int *array_score = new int[50];

int main(void)
{
    fstream inputOutput;

    inputOutput.open("scores.txt", ios::in);

    // check for avaliable of the file
    if (!inputOutput.is_open())
    {
        cout << "No file founded" << endl;
    }

    string line;
    int testing;
    int count_name = 0;
    int count_score = 0;
    
    // preparation
    while(getline(inputOutput, line))
    {
        //cout << "hello" << endl;
        try
        {
            testing = stoi(line);
            array_score[count_score] = testing;
            count_score++;
        }
        catch(const invalid_argument& e)
        {
            //cout << "masuk sini" <<endl;
            if(typeid(line) == typeid(string))
            {
                array_name[count_name] = line;
                count_name++;
            }
            else
            {
                cout << "error" << endl;
            }
            
        }
        //cout << line << endl;
        
    }


    int average_score = average_Score(count_score, average_score);
    // main work
    cout <<"Average is " << average_score << endl;

    string name;
    while(1)
    {
        
        fflush(stdin);
        cout << "Please enter player's name: "; cin >> name;

        int index_person = getPlayerScore(name, count_name);
        string result = averaginging(count_score, index_person, average_score);
        if(result == "")
        {
            cout << "The player is not found in the file." << endl;
        }
        else
        {
            cout << name << " : " << array_score[index_person] << " is " << result << " than average" << endl;

        }
    }
    
    return 0;
}

int getPlayerScore(string name, int count)
{
    bool found = false;
    int index_found = 0;
    for (int i = 0; i < count; i++)
    {
        if(name == array_name[i])
        {
            found = true;
            index_found = i;
            break;
        }
    }
    if (found == false)
    {
        return -1;
    }

    return index_found;
}


string averaginging(int count, int index_people, int average_score)
{
    if (index_people == -1)
    {
        return string(); // alternative = string()
    }
    string answer;
    
    int people_score = array_score[index_people];

    if(people_score == average_score)
    {
        answer = "exactly equal";
    }
    else if ( people_score > average_score)
    {
        answer = "higher";
    }
    else 
    {
        answer = "below";
    }

    return answer;
}

int average_Score(int count, int &average_score)
{
    average_score = 0;
    for (int i = 0; i < count; i++)
    {
        average_score+= array_score[i];
    }

    average_score = average_score/ count;

    return average_score;
}