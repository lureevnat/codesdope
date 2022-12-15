/*
Problem:
Write a program to calculate the average height of all the students of a class.
The number of students and their heights are entered by the user.

*/

#include <iostream>
using namespace std;

class Student
{
public:
    float height;
    Student(){}
    Student(float h)
    {
        this->height = h;
    }
};

int main()
{
    int n;
    cout << "Enter number of students : ";
    cin >> n;

    float h;
    Student s[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter height of student " << i + 1 << " : ";
        cin >> h;
        s[i] = Student(h);
    }
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + s[i].height;
    }
    cout << "The average height of class is " << sum / n << endl;
    return 0;
}