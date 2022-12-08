/*
Problem:
Write a program to check if a given string is a Palindrome.
A palindrome reads same from front and back e.g.- aba, ccaacc, mom, etc.

*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    bool flag = true;
    for (int i = 0; i <= str.length() / 2; i++)
        if (str[i] != str[str.length() - 1 - i])
        {
            flag = false;
            break;
        }
    if (flag)
        cout << "The string is palindrome" << endl;
    else
        cout << "The string is not a palindrome" << endl;
    return 0;
}