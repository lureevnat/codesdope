/*
Problem:
Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. The output should be as follows:
Name        Year of joining        Address
Robert        1994        64C- WallsStreat
Sam        2000        68D- WallsStreat
John        1999        26B- WallsStreat
*/

#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int year_of_joining;
    int salary;
    string address;
    void setData(string n, int y, int s, string a)
    {
        name = n;
        year_of_joining = y;
        salary = s;
        address = a;
    }
    void printDetails()
    {
        cout << name << " " << year_of_joining << " " << address << endl;
    }
};

int
main()
{
    Employee e[3];

    e[0].setData("Robert", 1994, 100000, "64C- WallsStreat");
    e[1].setData("Sam", 2000, 100000, "68D- WallsStreat");
    e[2].setData("John", 1999, 100000, "26C- WallsStreat");

    for (int i = 0; i < 3; i++)
    {
        e[i].printDetails();
    }
    return 0;
}