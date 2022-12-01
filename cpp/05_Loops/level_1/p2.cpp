/*
Problem:
Take 10 integers from keyboard using loop and print their average value on the screen.
*/

#include <iostream>
using namespace std;

int main()
{
    int num, total = 0;
    cout << "Enter 10 numbers : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        total = total + num;
    }

    cout << "The average of entered numbers is " << total / 10.0 << endl;
    return 0;
}