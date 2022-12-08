/*
Problem:
Write a program to compare if the two strings entered by user are equal or not without using predefined String functions.

*/

#include <iostream>
using namespace std;

int main()
{
    string s1 = "hello", s2 = "hello";
    // string s3 = "hai";
    // s2 = s3;
    if (s1.length() != s2.length())
    {
        cout << "s1 and s2 are not equal" << endl;
    }
    else
    {
        int flag = 1;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[i])
            {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "s1 and s2 are equal" : "s1 and s2 are not equal") << endl;
    }
    return 0;
}