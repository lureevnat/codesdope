/*
Problem:
Write a program to print the names of students by creating a Student class. If no name is passed while creating an object of the Student class, then the name should be "Unknown", otherwise the name should be equal to the String value passed while creating the object of the Student class.
*/

#include <iostream>
using namespace std;

class Student
{
    string name;

public:
    Student()
    {
        name = "Unknown";
    }
    Student(string str)
    {
        name = str;
    }
    void print()
    {
        cout << name << endl;
    }
};

int main()
{
    Student s[2];
    s[0] = Student();
    s[0].print();
    s[0] = Student("Bob");
    s[0].print();

    return 0;
}