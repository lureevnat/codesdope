/*
Problem:
Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.

*/

#include <iostream>
using namespace std;

int main()
{
    int a[10], b[10];

    cout << "Enter 10 numbers:";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        b[10 - i - 1] = a[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}