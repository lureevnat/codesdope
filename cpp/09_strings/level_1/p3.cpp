/*
Problem:
Write a program to print every character of a string entered by user in a new line using loop.

*/

#include <iostream>
using namespace std;

int main()
{
    string s;

    cout << "Enter a string: ";
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        cout<<s[i]<<endl;
    }

    return 0;
}