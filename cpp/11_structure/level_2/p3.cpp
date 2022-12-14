/*
Problem:
Create a structure named Date having day, month and year as its elements. Store the current date in the structure. Now add 45 days to the current date and display the final date.
*/

// Not Completed Didn't do completely: Logical errors are present need to correct them

#include <iostream>
using namespace std;

struct date_s
{
    int day;
    int month;
    int year;
};
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

int main()
{
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    struct date_s date = {8,
                          5,
                          1995};

    bool leap_year = false;

    unsigned long total_days = date.year * 365 + date.year / 4 - date.year / 400;
    for (int i = 0; i < date.month; i++)
        total_days += days[i];
    total_days += date.day;

    total_days += 45;
    date.year = (total_days / 146099) * 400; // 365 * 400 + 400 / 4 - 1;
    total_days = total_days % 146099;

    date.year += (total_days / 1461) * 4;
    total_days = total_days % 1461;

    date.year += (total_days / 365) * 1;
    total_days = total_days % 365;

    if (isLeapYear(date.year))
        days[1] = 29;
    else
        days[1] = 28;

    int i;
    for (i = 1; i <= 12; i++)
    {
        if (total_days > days[i - 1])
            total_days -= days[i - 1];
        else
            break;
    }
    date.month = i;
    date.day = total_days;

    cout << date.day << "-" << date.month << "-" << date.year << endl;
    return 0;
}