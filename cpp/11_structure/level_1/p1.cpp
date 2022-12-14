/*
Problem:
Write a program to store and print the roll no., name , age and marks of a student using structures.
*/

#include <iostream>
using namespace std;

struct student
{
    int roll;
    char name[10];
    int age;
    int marks;
};

int main()
{
    struct student stu = {10, "name", 10, 100};
    // stu.name = "name";
    // stu.age = 10;
    // stu.marks = 100;
    // stu.roll = 101;

    cout << stu.name << " " << stu.age << " " << stu.marks << " " << stu.roll << endl;
    return 0;
}