/*
Problem:
Write a program to concatenate two strings "Hello" and "World".
*/

#include <iostream>
using namespace std;

int main()
{
    string str1 = "Hello", str2 = "World", str3;
    str3 = str1 + str2;

    cout << str3 << endl;
    return 0;
}