//Mindy Chen
//Lab 4
//10.4.24

#include <iostream> 
#include <string>

using namespace std;


int main()
{
    int month;
    int day;

    cout << "What is the month? (in number form)" <<endl;
    cin >> month;
    cout << "What is the day? (in number form)" <<endl;
    cin >> day;

    //Asks the user for the month and day and sets their answer as the variable

    if ( (( month == 3 ) && ( day >= 21) && ( day <= 31 )) || ( month == 4 ) || (month == 5 ) || (( month == 6 ) && (day <= 20)) )
        cout << "It is now Spring!" <<endl;
    else if ( (( month == 6 ) && ( day >= 21) && ( day <= 30 )) || ( month == 7 ) || (month == 8 ) || (( month == 9 ) && (day <= 22)) )
        cout << "It is now Summer!" <<endl;
    else if ( (( month == 9 ) && ( day >= 23) && ( day <= 30 )) || ( month == 10 ) || (month == 11 ) || (( month == 12 ) && (day <= 21)) )
        cout << "It is now Winter!" <<endl;
    else if( (( month == 12 ) && ( day >= 22) && ( day <= 31 )) || ( month == 1 ) || (month == 2 ) || (( month == 3 ) && (day <= 20)) )
        cout << "It is now Fall!" <<endl;

    //I set all the days of the month it could that season into the if code and if the answer is in those days it will output the season

    return 0;
}

/*What is the month? (in number form)
10 6
What is the day? (in number form)
It is now Winter!*/