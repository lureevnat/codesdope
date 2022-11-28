/*
Problem:
Take two int values from user and print greatest among them.
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter first Number :";
    cin >> x;
    cout << "Enter Second Number : ";
    cin >> y;

    if (x > y)
        cout << "Big Number : " << x << endl;
    else
        cout << "Big Number : " << y << endl;

    return 0;
}