/*
Problem:
Write a program to find the length of a string without using predefined functions.
*/

#include <iostream>
using namespace std;

int main()
{
    string str = "abcdef";
    int i = 0;
    while (str[i] != '\0')
        i++;
    cout << "Length of string : " << i << endl;
    return 0;
}