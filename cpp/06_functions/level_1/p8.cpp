/*
Problem:
Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
Marks        Grade
91-100         AA
81-90          AB
71-80          BB
61-70          BC
51-60          CD
41-50          DD
<=40          Fail

*/

#include <iostream>
using namespace std;

void grade(int marks)
{
    if (marks >= 0 && marks <= 40)
        cout << "Fail";
    else if (marks >= 41 && marks <= 50)
        cout << "DD Grade";
    else if (marks >= 51 && marks <= 60)
        cout << "CD Grade";
    else if (marks >= 61 && marks <= 70)
        cout << "BC Grade";
    else if (marks >= 71 && marks <= 80)
        cout << "BB Grade";
    else if (marks >= 81 && marks <= 90)
        cout << "AB Grade";
    else if (marks >= 91 && marks <= 100)
        cout << "AA Grade";
    else
        cout << "Invalid Marks";

    return;
}

int main()
{
    int marks;
    cout << "Enter your marks (out of 100): ";
    cin >> marks;
    grade(marks);
    cout<<endl;
    return 0;
}