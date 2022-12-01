/*
Problem:
Define a function to print the prime factors of a number.
*/
#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int i)
{
    int flag;
    flag = 1;
    for (int j = 2; j <= sqrt(i); ++j)
    {
        if (i % j == 0)
        {
            flag = 0;
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
    for (int i = 2; i <= a / 2; i++)
        if (a % i == 0 && isPrime(i))
            cout << i << " ";
    cout << endl;
    return 0;
}