/*
Problem:
Take 10 integer inputs from user and store them in an array and print them on screen.
*/

#include <iostream>
using namespace std;

int main()
{
    int a[10];

    cout << "Enter 10 numbers:";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}