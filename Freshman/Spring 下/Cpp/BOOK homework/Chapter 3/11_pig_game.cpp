#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);
int random_roll();


int flag_human = 0;
int flag_win = 0;

int main(void)
{
    srand(time(NULL));

    int human_total_score = 0, computer_total_score = 0;
    
    while(1)
    {
        if (human_total_score >= 100 || computer_total_score >= 100)
        {
            break;
        }
        if(flag_human == 0)
        {
            human_total_score += humanTurn(human_total_score);

        }
        else
        {
            computer_total_score += computerTurn(computer_total_score);
        }


        if (flag_win == 1)
        {
            break;
        }
    }

    


    return 0;
}

int humanTurn(int humanTotalScore)
{
    int hold_score = 0;
    char ans;
    cout << "It's your turn! Enter 'r' to roll.\n";
    cin >> ans;

    // roll again jump go to line
    jump:
    if (ans == 'r')
    {
        char ans_hold;
        int score = random_roll();



        if (score == 1)
        {
            cout << "You rolled a 1! Your turn is over.\n";
            flag_human = 1;
            return 0;
        }
        else
        {
            hold_score += score;
        }
       

        cout << "Your rolled " << score << endl;
        cout << "Your score this round is: " << hold_score << endl;
        cout << "If you hold, your total score would be: "<< hold_score + humanTotalScore << endl;

        // check the person win
        // doesn't need to add (), because '+' precedence is higher than '>=';
        if (hold_score + humanTotalScore >= 100)
        {
            cout << "Congrats! you win the game!\n";
            
            flag_win = 1;
            return 0;
        }
        
        cout << "Press 'h to hold or 'r to roll again.\n";
        cin >> ans_hold;



        if (ans_hold == 'h')
        {
            flag_human = 1;
            return hold_score;
        }
        else if (ans_hold == 'r')
        {
            goto jump;
        }


    }
    else
    {
        cout << "Please input 'r' in the next try\n";
    }

    return -1;
}

int computerTurn(int computerTotalScore)
{
    int rolled, round_score = 0;


    cout << "It's the computer's turn!\n";

    do
    {
        rolled = random_roll();

        // doesn't gain score
        if (rolled == 1)
        {
            cout << "The computer rolled a 1! Its turn is over.\n";
            flag_human = 0;
        
            return 0; // no round score gained
        }
        else
        {
            round_score += rolled;
        }

        cout << "The computer rolled " << rolled <<endl;
        cout << "The computer's score this round is: "<< round_score << endl;
        cout << "If the computer holds, its total score would be: " << computerTotalScore + round_score << endl;
    }
    while(round_score < 20 && ((computerTotalScore + round_score) <= 100));
    
    ask_again:
    cout << "The computer holds, Enter 'c' to continue\n";

    char computer_hold;
    cin >> computer_hold;
    if(computer_hold == 'c')
    {
        if((computerTotalScore + round_score) >= 100)
        {
            cout << "Sorry, the computer won.";
            
            flag_win = 1;
        }
    }
    else
    {
        goto ask_again;

    }


    flag_human = 0;
    return round_score;
}

int random_roll()
{
    return ((rand() % 6) + 1);
}