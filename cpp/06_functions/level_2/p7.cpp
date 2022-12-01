/*
Problem:
Write a function that takes your date of birth in YYYY, MM and DD format (separated by spaces) as input as well as the current date, in same format, and calculates your age in years, months and days. You must check for leap years also. Write a separate function to check for leap year.
*/

#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    if (year % 4 == 0)
        if (year % 100 == 0)
            if (year % 400 == 0)
                return true;
            else
                return false;
        else
            return true;
    else
        return false;
}

void Age(int BYYYY, int BMM, int BDD, int TYYYY, int TMM, int TDD)
{
    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year_difference, month_difference, date_difference;
    if (isLeapYear(TYYYY))
        month_days[1] = 29;

    year_difference = TYYYY - BYYYY;
    if (TMM - BMM < 0)
    {
        month_difference = 12 + TMM - BMM;
        year_difference--;
    }
    else
        month_difference = TMM - BMM;

    if (TDD - BDD < 0)
    {
        date_difference = TDD + month_days[BMM - 1] - BDD;
        month_difference--;
    }
    else
        date_difference = TDD - BDD;

    cout << "Your age is " << year_difference << " Years " << month_difference << " months " << date_difference << " days" << endl;
    return;
}
int main()
{
    int BYYYY, BMM, BDD, TYYYY, TMM, TDD;
    cout << "Enter your DOB (YYYY MM DD):";
    cin >> BYYYY >> BMM >> BDD;
    cout << "Enter todays date (YYYY MM DD):";
    cin >> TYYYY >> TMM >> TDD;
    Age(BYYYY, BMM, BDD, TYYYY, TMM, TDD);
    return 0;
}