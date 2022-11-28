/*
Problem:
A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.
*/

#include <iostream>
using namespace std;

int main()
{
    int salary, year_of_service;
    cout << "Enter your salary : ";
    cin >> salary;
    cout << "Enter your year of service : ";
    cin >> year_of_service;

    cout << "Your Bonus is " << (year_of_service > 5 ? salary * 0.05 : 0);

    return 0;
}