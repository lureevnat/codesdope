/*
Problem:
Write a program to delete the word "the" in the sentence "This is the lion in the cage".
*/

#include <iostream>
using namespace std;

int main()
{
    string str = "This is the lion in the cage";
    string substr = "the";
    for (int i = str.length() - 1; i >= substr.length() - 1; i--)
    {
        bool flag = true;
        for (int j = substr.length() - 1; j >= 0; j--)
        {

            if (substr[j] == str[i - (substr.length() - 1 - j)])
                continue;
            else
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            str = str.substr(0, i - substr.length() + 2) + str.substr(i + 1, str.length() - 1 - i);
            i = i - substr.length() + 1;
            // break;
        }
    }

    cout << str;
    return 0;
}