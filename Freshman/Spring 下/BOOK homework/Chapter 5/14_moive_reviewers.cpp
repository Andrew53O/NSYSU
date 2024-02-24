#include <iostream>
#include <math.h>
using namespace std;

///////// only bare minimum finished
// features to add : inputting range is not restristed yet, ex if I input movie 99 will also count

int cartesianFormula(int arrReview[][7], int movies[], int user[], int userMovie[], int indexMovie[]);
void predictions(int arrayReview[][7], int movies[], int indexMovie[], int user);
int checking(int movieNum, int ratingNum);
int main(void)
{                       // i add 0 to make the binding with another array easier
     int movies[7]  =       {0, 100, 101, 102, 103, 104, 105};

    int arrayReview[4][7] ={{0, 3, 1, 5, 2, 1, 5}, 
                            {1, 4, 2, 1, 4, 2, 4}, 
                            {2, 3, 1, 2, 4, 4, 1} , 
                            {3, 5, 1, 4, 2, 4,2}};
    int userMovie[3] = {0};
    int userRating[3] = {0};

    // index that the user was rating it;
    int indexMovie[3] = {};
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter a movie to rate (100-105)." << endl;
        cin  >> userMovie[i];
        cout << "Enter rating (1~5) for this movie." << endl;
        cin >> userRating[i];

        if (!checking(userMovie[i],userRating[i]))
        {
            cout << "Input Error" << endl;
            i--;

        }
    }
    int closestReviewer = cartesianFormula(arrayReview, movies, userRating, userMovie, indexMovie);

    cout << "The closest reviewer is number " << closestReviewer << endl;
    cout << "Predictions for movies you have not yet seen: " << endl;

    predictions(arrayReview, movies, indexMovie, closestReviewer);

    return 0;
}


int cartesianFormula(int arrReview[][7], int movies[], int userRating[], int userMovie[], int indexMovie[])
{
    int result = 0;
    // find the three index of the movie that are choosing
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (userMovie[i] == movies[j])
            {
                indexMovie[i] = j;
            }
        }
    }

// min result, ama cari indexnya
    int min_result = 99999;
    int indexMinUser = -1;
    for (int j = 0; j < 4; j++)
    {
        //reset all result to 0 for every user
        result = 0;
        for (int i = 0; i < 3; i++)
        {
            result += (pow(userRating[i]- arrReview[j][indexMovie[i]], 2));// cari indexnya diatas);
        }

        // find the mininum
        if (result < min_result)
        {
            min_result = result;
            indexMinUser = j;

        }
    }
   
    return indexMinUser;
}



void predictions(int arrayReview[][7], int movies[], int indexMovie[], int user)
{
    // klo pakek python keknya bisa pakek set trs minus deh wkw
    int indexHaventseen[4] = {0};
    int isItAlreadyReview, count = 0;

    for (int i = 0; i < 7; i++)
    {
        isItAlreadyReview = 0;
        for (int j = 0; j < 3; j++)
        {
            // filter out the have not yet seen movie index
            if(movies[indexMovie[j]] != movies[i])
            {
                isItAlreadyReview++;
            }
            else
            {
                break;
            }

            
        }
        if (isItAlreadyReview == 3)
        {
            indexHaventseen[count] = i;
            count++;
        }

    }
    // start from 1 cause the movies[0] is not important
    for (int i = 1; i < 4; i++)
    {
        cout << "Movie " << movies[indexHaventseen[i]] << " : Predicted Rating = " << arrayReview[user][indexHaventseen[i]] << endl;

    }
}


int checking(int movieNum, int ratingNum)
{
    if (movieNum > 105 || movieNum < 100) return 0;
    if (ratingNum < 1 || ratingNum > 5) return 0;

    return 1;
}