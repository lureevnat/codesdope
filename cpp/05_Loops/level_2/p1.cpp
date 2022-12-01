/*
Problem:
Take as input a fraction in the form a/b. Convert the same into lowest terms and print. (Lowest terms examples 3/12 = 1/4).
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a and b:";
    cin >> a >> b;

    cout << "a/b in lowest terms: " << a << "/" << b << endl;
    return 0;
}