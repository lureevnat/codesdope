/*
Problem:
Write a program to check if the word 'orange' is present in the "This is orange juice".

*/

#include <iostream>
using namespace std;

int main()
{
    string s1 = "This is orange juice", s2 = "orange";
    if (s1.find(s2) != string::npos)
    {
        cout << "Found" << '\n';
    }
    else
        cout << "Not Found" << '\n';
    return 0;
}