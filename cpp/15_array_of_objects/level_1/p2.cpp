/*
Problem:
Write a program to print the roll number and average marks of 8 students in three subjects (each out of 100).
The marks are entered by the user and the roll numbers are automatically assigned.

*/

#include <iostream>
using namespace std;

class Student
{
    int roll_no;
    int m, p, c;

public:
    Student(int roll, int m, int p, int c)
    {
        this->roll_no = roll;
        this->m = m;
        this->p = p;
        this->c = c;
    }
    void printAvg()
    {
        cout << roll_no << " " << (m + p + c) / 3 << endl;
    }
};

int main()
{
    Student s[10] = {
        Student(1, 60, 70, 80),
        Student(2, 61, 71, 81),
        Student(3, 62, 72, 82),
        Student(4, 63, 73, 83),
        Student(5, 64, 74, 84),
        Student(6, 65, 75, 85),
        Student(7, 66, 76, 86),
        Student(8, 67, 77, 87),
        Student(9, 68, 78, 88),
        Student(10, 69, 79, 89),
    };
    for (int i = 0; i < 10; i++)
        s[i].printAvg();
    return 0;
}