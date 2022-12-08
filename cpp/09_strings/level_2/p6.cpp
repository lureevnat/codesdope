/*
Problem:
Write a program to find out the largest and smallest word in the string "This is an umbrella".
*/

#include <iostream>
using namespace std;

int main()
{
    string str = "This is an umbrella", small = str, large = "";
    int sm = str.length(), lg = 0;

    for (int i = 0, j = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            j = i;
            if (sm > str.substr(j, i - j + 1).length())
            {
                small = str.substr(j, i - j + 1);
                sm = str.substr(j, i - j + 1).length();
            }
            if (lg < str.substr(j, i - j + 1).length())
            {
                large = str.substr(j, i - j + 1);
                lg = str.substr(j, i - j + 1).length();
            }
        }
    }

    cout << "Smallest word : " << small << endl
         << "Largest Word : " << large << endl;

    return 0;
}