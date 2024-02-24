#include <iostream>

using namespace std;

int time_machine(int, int);

int main(void)
{
    int start_time, end_time;
    cout << "Please input start time and end time: "; cin >> start_time >> end_time; 

    int time_diff_main = time_machine(start_time, end_time);

    if(time_diff_main == -1)
    {
        cout << "The time is over 24 hours, plese try again!"<< endl;
        return 0;
    }
    cout << "The time difference betweeen " << start_time << " and " << end_time << " is " << time_diff_main << " minutes" << endl;

    return 0;
}


int time_machine(int start_time, int end_time)
{
    int new_time = end_time - start_time;

    // check klo lebih dari 24 jam, contohnya itu 2361
    // jadi bisa check dulu klo belakagn lebih dari 60 bisa tambah 1 didepan dan bisa check depan klo itu 24 dan belakang itu bukan 0 artinya lebih dari 24 jam
    // sekian.
    int hour = new_time / 100;
    int minutes  = new_time % 100;

    //check for minutes
    if(minutes >= 60 )
    {
        hour += 1;
        minutes -= 60;
    }

    //check for hours
    if (hour >= 24)
    {
        if(hour == 24 && minutes > 0)
        {
            return -1;
        }
    }

    int time_difference = (hour * 60 ) + minutes;

    return time_difference;
}