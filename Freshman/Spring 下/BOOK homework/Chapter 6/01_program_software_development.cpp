#include <iostream>
#include <string>
#include <fstream> 
#include <iomanip>
using namespace std;

void calculate(double core, double performance, double ideation, double& result_evaluation);
int point (int score);

struct em_records
{
    double core_competency;
    double performance_evaluation;
    double ideation;
    double result_evaluation;

};

int main(void)
{
    ifstream reading; // ifstream = reading, ofstream = writing, fstring reading and writing
    string str;
    bool is_digit = true;
    int employee = 0;
    // first reading to determine the count of num
    reading.open("CH6_01_data.txt", ios::in);
    while(getline(reading, str))
    {
        for (char c : str)
        {
            if(!isdigit(c))
            {
                is_digit = false;
                break;
            }
            else
            {
                 employee++;
            }
        }
       
    }
    reading.close();
    em_records data_employee[employee];

    int num ,core, performance, ideation, i = 0;

    reading.open("CH6_01_data.txt", ios::in);
    // remove the first line
    getline(reading, str);

    // read the data
    while(reading >> num >>  core >> performance >> ideation)
    {
        data_employee[num - 1].core_competency = core;
        data_employee[num - 1].performance_evaluation = performance;
        data_employee[num - 1].ideation = ideation;
        
        //cout << core << performance << ideation << endl;
    }
    reading.close();

    cout << "Number" << "  " << "Total" << setw(3) << " " << "Point" << endl;

    //Approach 1 using for loop range based no need to add [] in the strcut, i don't know why, if you know, you can tell me thank you
    int index = 1;
    for (em_records data : data_employee) // data have the same type as data_employee maybe
    {
        calculate(data.core_competency, data.performance_evaluation, data.ideation, data.result_evaluation);
        cout << index << setw(7) << " " << fixed << setprecision(2) << data.result_evaluation << setw(3) << " " << point(data.result_evaluation) << endl; 
        index++;
    }

    //Approach 2 using normal for loop
    // for (int i = 0; i < 5; i++)
    // {
    //     double total = calculate(data_employee[i].core_competency, data_employee[i].performance_evaluation, data_employee[i].ideation, data_employee[i].result_evaluation);
    //     cout << i + 1 << setw(7) << " " << fixed << setprecision(2) << data_employee[i].result_evaluation << setw(3) << " " << point(total) << endl; 
    // }
    return 0;
}


void calculate(double core, double performance, double ideation, double& result_evaluation)
{
    //var_name = (var_name/max_score) * persentage
    core = (core/10.0) * 30;
    performance = (performance/30.0) * 50;
    ideation = (ideation/10.0) * 20;

    result_evaluation = core + performance + ideation;
}

int point(int score)
{
    if (score >= 80 )
    {
        return 1;
    }
    else if (score >= 60)
    {
        return 2;
    }
    else if (score >= 50)
    {
        return 3;

    }
    else
    {
        return 4;
    }

}