/*
Problem:
Using recursion, define a function to know nth term of a Fibonacci series.
Nth term of Fibonacci series is
F(n) = F(n-1)+F(n-2)
F(0) = 0
F(1) = 1
F(2) = F(1)+F(0) = 1+0 = 1
F(3) = F(2)+F(1) = 1+1 = 2
F(4) = F(3)+F(2) = 2+1 = 3
*/

#include <iostream>
using namespace std;

int nth_fibanocci(int n)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return nth_fibanocci(n - 1) + nth_fibanocci(n - 2);
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "The nth fibanocci number where n = " << n << " is " << nth_fibanocci(n);
    cout << endl;
    return 0;
}