/*
Problem:
Write a program to find the sum of the even and odd digits of the number which is given as input.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, flag, rem, temp, oddsum = 0, evensum = 0, digits = 0;
    cout << "Enter a number : ";
    cin >> a;

    flag = 1;
    while (a)
    {
        digits++;
        rem = a % 10;
        a = a / 10;
        if (flag)
        {
            flag--;
            oddsum += rem;
        }
        else
        {
            flag++;
            evensum += rem;
        }
    }

    if (digits % 2 == 0)
    {
        temp = oddsum;
        oddsum = evensum;
        evensum = temp;
    }

    cout << "The oddsum and evensum of given number are: " << oddsum << " and " << evensum << endl;
    return 0;
}