/*
Problem:
Define a function to find out if number is prime or not.

*/
#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int i)
{
    bool flag;
    flag = true;
    for (int j = 2; j <= sqrt(i); ++j)
    {
        if (i % j == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (isPrime(a))
        cout << "Prime Number";
    else
        cout << "Not a Prime Number";
    cout << endl;
    return 0;
}