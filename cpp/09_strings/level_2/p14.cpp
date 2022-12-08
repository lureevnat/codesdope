/*
Problem:

*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int i = 0;
    int j = 0;
    while (i < str.length())
    {

        if (str[i] == ' ' || str[i + 1] == '\0')
        {

            if (str[i + 1] == '\0')
                i = i + 1;

            bool palindrome = true;

            for (int k = j; k <= j + (i - 1 - j) / 2; k++)
            {
                char temp;
                temp = str[k];
                str[k] = str[i - 1 - (k - j)];
                str[i - 1 - (k - j)] = temp;
            }

            j = i + 1;
        }
        i++;
    }

    cout << str;
    return 0;
}