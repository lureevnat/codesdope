/*
Problem:
Write a program to print all prime number in between 1 to 100.
*/
#include <cmath>
#include <iostream>
using namespace std;

int main()
{

    for (int i = 2; i <= 100; ++i)
    {
        int flag = 0;
        for (int j = 2; j <= sqrt(i); ++j)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}