/*
Problem:
Take as input a fraction in the form a/b. Convert the same into lowest terms and print. (Lowest terms examples 3/12 = 1/4).
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, rem, c, d;
    cout << "Enter a and b:";
    cin >> a >> b;
    c = a;
    d = b;
    if (a < b)
    {
        rem = a; // rem is used as temp var
        a = b;
        b = rem;
    }

    while (b)
    {
        rem = a % b;
        a = b;
        b = rem;
    }

    cout << "The a/b in its lowest form is " << c / a << "/" << d / a;
    return 0;
}