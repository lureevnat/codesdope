/*
Problem:
Write a program to print the name, salary and date of joining of 10 employees in a company. Use array of objects.

*/

#include <iostream>
using namespace std;

class Employee
{

    string name, date;
    int salary;

public:
    Employee(string name, int salary, string date)
    {
        this->name = name;
        this->salary = salary;
        this->date = date;
    }
    void print()
    {
        cout << name << " " << date << " " << salary << endl;
    }
};

int main()
{
    Employee e[10] = {
        Employee("abc", 100000, "01/01/2001"),
        Employee("abd", 110000, "01/02/2001"),
        Employee("abe", 120000, "01/03/2001"),
        Employee("abf", 130000, "01/04/2001"),
        Employee("abg", 140000, "01/05/2001"),
        Employee("abh", 150000, "01/06/2001"),
        Employee("abi", 160000, "01/07/2001"),
        Employee("abj", 170000, "01/08/2001"),
        Employee("abk", 180000, "01/09/2001"),
        Employee("abl", 190000, "01/10/2001"),
    };

    for (int i = 0; i < 10; i++)
        e[i].print();
    return 0;
}