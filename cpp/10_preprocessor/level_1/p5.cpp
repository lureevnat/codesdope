/*
Problem:
Write a macro to calculate simple interest from principal, rate of interest and time.
Simple interest = (principal*rate of interest*time)/100.
*/

#include <iostream>
using namespace std;
#define simple_interest(p, t, r) (p * t * r / 100.0)
int main()
{
    cout << simple_interest(1000, 12, 3) << "\n";
    return 0;
}