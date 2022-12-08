/*
Problem:
Write a program to reverse a string with and without using any predefined function.
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str, strrev1 = "", strrev2 = "";
    cout << "Enter a string : ";
    cin >> str;

    // without predefined function
    for (int i = str.length() - 1; i >= 0; i--)
    {
        strrev1 = strrev1 + str[i];
    }

    strrev2 = str;
    reverse(strrev2.begin(), strrev2.end());

    cout << strrev1 << endl;
    cout << strrev2 << endl;

    return 0;
}