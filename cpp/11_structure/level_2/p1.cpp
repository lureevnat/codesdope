/*
Problem:
Write a structure to store the names, salary and hours of work per day of 10 employees in a company.
Write a program to increase the salary depending on the number of hours of work per day as follows and then print the name of all the employees along with their final salaries.
Hours of work per day	8	10	>=12
Increase in salary	$50	$100	$150

*/

#include <iostream>
using namespace std;

struct employee
{
    char name[20];
    int salary;
    int hours_of_work_per_day;
};

int main()
{
    struct employee emp[10] =
        {
            {"abc", 100000, 8},
            {"abd", 200000, 8},
            {"abe", 300000, 9},
            {"abf", 400000, 9},
            {"abg", 500000, 10},
            {"abh", 600000, 10},
            {"abi", 700000, 12},
            {"abj", 800000, 12},
            {"abk", 900000, 13},
            {"abl", 1000000, 13},
        };
    for (int i = 0; i < 10; i++)
    {
        if (emp[i].hours_of_work_per_day < 10)
            emp[i].salary += 50;
        else if (emp[i].hours_of_work_per_day < 12)
            emp[i].salary += 100;
        else if (emp[i].hours_of_work_per_day >= 12)
            emp[i].salary += 150;

        cout << emp[i].name << " " << emp[i].salary << endl;
    }

    return 0;
}