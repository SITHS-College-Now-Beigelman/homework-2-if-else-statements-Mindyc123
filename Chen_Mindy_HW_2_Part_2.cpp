//Mindy Chen
//Lab 4
//10.4.24

#include <iostream> 
#include <string>

using namespace std;


int main()
{

    double one;
    double two;
    double three;
    double four;
    double five;
    double six;

    cout << "What are the scores of the judges in order?" <<endl;
    cin >> one >> two >> three >> four >> five >> six;

    double high = one;
    double low = one;
    
    //set the highest and lowest into one at first

    if (two > high) 
        high = two;
    else if (three > high) 
        high = three;
    else if (four > high) 
        high = four;
    else if (five > high) 
        high = five;
    else if (six > high) 
        high = six;

    //it cycles through all the scores and the biggest score will remain

    if (two < low) 
        low = two;
    else if (three < low) 
        low = three;
    else if (four < low) 
        low = four;
    else if (five < low) 
        low = five;
    else if (six < low) 
        low = six;

     //it cycles through all the scores and the biggest score will remain

    cout << "The final score is " << (( one + two + three + four + five + six) - (high + low)) / 4 <<endl;

    //It adds all the scores and subtracts the highest and lowest and divides by 4

    return 0;

}

/*What are the scores of the judges in order?
100 1 4 4 4 4
The final score is 4*/