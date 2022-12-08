/*
Problem:
Input a string of alphabets. Find out the number of occurrence of all alphabets in that string. Find out the alphabet with maximum occurrence.

*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    int arr[26] = {0};
    getline(cin, str);

    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] >= 65 && str[i] <= 90)
            arr[str[i] - 65]++;
        if (str[i] >= 97 && str[i] <= 122)
            arr[str[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i])
            cout << char(i + 65) << " - " << arr[i] << endl;
    }

    return 0;
}