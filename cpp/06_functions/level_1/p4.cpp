/*
Problem:
Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.
*/

#include <iostream>
using namespace std;

int max(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    if (b > c)
        return b;
    else
        return c;
}

int min(int a, int b, int c)
{
    if (a <= b && a <= c)
        return a;
    if (b < c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c;
    cout << "Enter three numbers : ";
    cin >> a >> b >> c;
    cout << "The max and min of the three numbers are " << max(a, b, c) << " and " << min(a, b, c) << endl;
    return 0;
}