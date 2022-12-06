/*
Problem:
Take 10 integer inputs from user and store them in an array. Again ask user to give a number. Now, tell user whether that number is present in array or not.

*/

#include <iostream>
using namespace std;

int main()
{
    int a[10];

    cout << "Enter 10 numbers:";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int num;
    cout << "Enter one number:";
    cin >> num;
    int flag = false;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == num)
            flag = true;
    }
    if (flag)
        cout << "Number is present.";
    else
        cout << "Number is not present.";
    cout << endl;
    return 0;
}