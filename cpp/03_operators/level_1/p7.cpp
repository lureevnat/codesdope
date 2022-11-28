/*
Problem:
Write a program to enter the values of two variables 'a' and 'b' from keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.

Now solve the above question to check if atleast one of the conditions 'a < 50' and 'a < b' is true.

*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;

    if (a < 50 || a < b)
        cout << "a < 50 || a < b is True " << endl;
    else
        cout << "a < 50 || a < b is False" << endl;

    return 0;
}