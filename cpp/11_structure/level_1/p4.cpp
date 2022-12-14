/*
Problem:
Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.

*/

#include <iostream>
using namespace std;

int main()
{
    struct dist
    {
        int feet;
        int inch;
    } dist1, dist2, result;
    cout << "Enter distance in feet inch:";
    cin >> dist1.feet >> dist1.inch;

    cout << "Enter another distance in feet inch:";
    cin >> dist2.feet >> dist2.inch;

    result.feet = dist1.feet + dist2.feet + (dist1.inch + dist2.inch > 12 ? 1 : 0);
    result.inch = (dist1.inch + dist2.inch) % 13;
    cout << "The total dist is " << result.feet << " feet " << result.inch << " inch" << endl;
    return 0;
}