/*
Problem:
Write a program that takes your full name as input and displays the abbreviations of the first and middle names except the last name which is displayed as it is. For example, if your name is Robert Brett Roser, then the output should be R.B.Roser.


*/

#include <iostream>
using namespace std;

int main()
{
    string full_name;
    string first_name;
    string middle_name;
    string last_name;

    cout << "Enter your name: ";
    getline(cin, full_name);
    int i;
    for (i = full_name.length() - 1; i >= 0; i--)
    {
        if (full_name[i] == ' ')
            break;
    }
    if (i == -1)
        cout << "Your name in short form is " << full_name;
    else
    {
        int j;
        for (j = 0; j < i; j++)
        {

            if (full_name[j] == ' ')
                break;
        }

        if (i == j)
        {
            cout << "Your name in short form is " << full_name[0] << "." << full_name.substr(i + 1, full_name.length() - 1 - i);
        }
        else
        {
            cout << "Your name in short form is " << full_name[0] << "." << full_name[j + 1] << "." << full_name.substr(i + 1, full_name.length() - 1 - i);
        }
    }

    return 0;
}