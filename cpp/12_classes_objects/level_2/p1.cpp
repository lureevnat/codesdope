/*
Problem:
Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.
*/

#include <iostream>
using namespace std;

class Employee
{
    string name;
    int salary;
    int number_of_hours_per_day;

public:
    Employee(string na, int s, int n)
    {
        name = na;
        salary = s;
        number_of_hours_per_day = n;
    }

    void getInfo()
    {
        cout << name << " " << salary << " " << number_of_hours_per_day << endl;
    }
    void AddSal()
    {
        if (salary < 500)
            salary += 10;
    }
    void AddWork()
    {
        if (number_of_hours_per_day > 6)
            salary += 6;
    }
};

int main()
{
    Employee e("abc", 200, 7);
    e.getInfo();
    e.AddSal();
    e.AddWork();
    e.getInfo();
    return 0;
}