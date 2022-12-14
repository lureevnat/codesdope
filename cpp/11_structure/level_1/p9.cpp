/*
Problem:
Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
*/

#include <iostream>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct date d1 = {8, 5, 1995}, d2 = {8, 5, 1996};
    if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year)
    {
        cout << "The two dates are same " << endl;
    }
    else
        cout << "The two dates are not same " << endl;
    return 0;
}