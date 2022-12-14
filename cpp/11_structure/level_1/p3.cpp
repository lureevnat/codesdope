/*
Problem:
Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.
*/

#include <iostream>
using namespace std;

int main()
{
    struct student
    {
        int roll_no;
        string name;
        int age;
    };
    typedef struct student student;
    student stu[15] = {{1, "abc", 27}, {2, "def", 30}, {3, "abde", 28}, {4, "ghi", 29}, {5, "dpl", 27}};
    for (int i = 0; i < 15; i++)
    {
        cout << "Name: " << stu[i].name << endl;
        cout << "Roll: " << stu[i].roll_no << endl;
        cout << "Age: " << stu[i].age << endl
             << endl;
    }

    return 0;
}