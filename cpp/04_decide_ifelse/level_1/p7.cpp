/*
Problem:
Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1
*/

#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "enter a number:";
    cin >> i;
    cout << "The absolute value is " << (i > 0 ? i : -i) << endl;
    return 0;
}