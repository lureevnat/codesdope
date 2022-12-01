/*
Problem:
A person is elligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is elligible to vote.

*/

#include <iostream>
using namespace std;

void isEligible(int age)
{
    if (age >= 18)
        cout << "Eligible for vote";
    else
        cout << "Not Eligible for vote";
}

int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;

    isEligible(age);
    cout << endl;
    return 0;
}