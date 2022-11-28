/*
Problem:
Take input of age of 3 people by user and determine oldest and youngest among them.
*/

#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3;
    cout << "Enter first person age:";
    cin >> a1;
    cout << "Enter Second person age:";
    cin >> a2;
    cout << "Enter Third person age:";
    cin >> a3;

    if (a1 > a2 && a1 > a3)
        cout << "first person is older" << endl;
    if (a2 > a1 && a2 > a3)
        cout << "second person is older" << endl;
    if (a3 > a1 && a3 > a1)
        cout << "Third person is older" << endl;

    if (a1 < a2 && a1 < a3)
        cout << "first person is younger" << endl;
    if (a2 < a1 && a2 < a3)
        cout << "second person is younger" << endl;
    if (a3 < a1 && a3 < a2)
        cout << "Third person is younger" << endl;

    return 0;
}