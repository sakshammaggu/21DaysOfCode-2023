#include<iostream>
using namespace std;

int main()
{
    int year ;
    

    cout<<"Please enter the year: ";
    cin>>year;
    if (year%4==1 || year%4==2 || year%4==3)
    {
        cout<<"The current year is not a leap year.";
    }
    else
    {
        cout<<"The current year is a leap year.";
    }
    
}

/*
    We took andantage of a fact that all the leap years
    are exactly divisible by 4.
*/
