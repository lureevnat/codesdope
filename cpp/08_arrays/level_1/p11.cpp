/*
Problem:
If the input array is [10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60], your program should be able to find that the subarray lies between the indexes 3 and 8.
*/

#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
    int i = 3 + 1, j = 8;

    while (i < j)
    {
        cout << a[i++] << " ";
    }

    return 0;
}