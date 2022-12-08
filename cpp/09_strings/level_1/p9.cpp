/*
Problem:
Write a program to check if the letter 'e' is present in the word 'Umbrella'.

*/

#include <iostream>
using namespace std;

int main()
{
    string s = "Umbrella";

    if (s.find('e') != string::npos)
        cout << "Found" << endl;

    else
        cout << "Not Found" << endl;

    if (s.find('e') != string::npos)
        cout << "Found" << endl;

    else
        cout << "Not Found" << endl;

    // you can als use string.contains and string.indexOf functions or strchr c function

    return 0;
}