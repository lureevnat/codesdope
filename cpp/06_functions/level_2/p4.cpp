/*
Problem:
Define a function named 'perfect' that determines if parameter number is a perfect number. Use this function in a program that determines and prints all the perfect numbers between 1 and 1000.
[An integer number is said to be "perfect number" if its factors, including 1(but not the number itself), sum to the number. E.g., 6 is a perfect number because 6=1+2+3]
*/

#include <iostream>
using namespace std;

bool perfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (perfect(num))
        cout << "Perfect Number";
    else
        cout << "Not a Perfect Number";
    cout << endl;
    return 0;
}