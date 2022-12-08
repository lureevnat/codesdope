/*
Problem:
Write a program to delete all the consonents from the string "Hello, have a good day".
*/

#include <iostream>
using namespace std;

int main()
{
    string str = "Hello, have a good day";

    for (int i = str.length() - 1; i >= 0; i--)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            if (str[i] == 'a' || str[i] == 'A' ||
                str[i] == 'e' || str[i] == 'E' ||
                str[i] == 'i' || str[i] == 'I' ||
                str[i] == 'o' || str[i] == 'O' ||
                str[i] == 'u' || str[i] == 'U')
            {
            }
            else
            {

                str.erase(str.begin() + i);
            }
        }
    }
    cout << "str : " << str << endl;
    return 0;
}