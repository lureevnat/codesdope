/*
Problem:

Write a program to check if elements of an array are same or not it read from front or back. E.g.-
2	3	15 	15	3	2
*/

#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 3, 15, 15, 3, 2};
    int flag = 1;

    int j = (sizeof(a) / sizeof(a[0])) - 1;
    for (int i = 0; i < (sizeof(a) / sizeof(a[0])) / 2; i++)
    {
        if (a[i] != a[j])
        {
            flag = 0;
            break;
        }
        else
            j--;
    }
    cout << (flag ? "Palindrome" : "Not a Palindrome") << "\n";
    return 0;
}