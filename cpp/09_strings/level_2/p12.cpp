/*
Problem:
Input a string which contains some palindrome substrings. Find out the position of palindrome substrings if exist and replace it by *. (For example if input string is “bob has a radar plane” then it should convert in “*** has a ***** plane”.
*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    // cin >> str;
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
                if (str[k] != str[i - 1 - (k - j)])
                {
                    palindrome = false;
                    break;
                }
            }

            if (palindrome)
            {
                for (int k = j; k <= i - 1; k++)
                {
                    str[k] = '*';
                }
            }
            // else
            //     cout << "Not a palindrome";

            j = i + 1;
        }
        i++;
    }

    cout << str;
    return 0;
}