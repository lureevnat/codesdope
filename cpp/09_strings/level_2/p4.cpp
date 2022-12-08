/*
Problem:
Write a program to find the number of vowels, consonents, digits and white space characters in a string.
*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    int vowel = 0, consonent = 0, digit = 0, whitespace = 0;
    cout << "Enter String: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            if (str[i] == 'a' || str[i] == 'A' ||
                str[i] == 'e' || str[i] == 'E' ||
                str[i] == 'i' || str[i] == 'I' ||
                str[i] == 'o' || str[i] == 'O' ||
                str[i] == 'u' || str[i] == 'U')
                vowel++;
            else
                consonent++;
        }

        else if (str[i] >= 48 && str[i] < 58)
            digit++;
        else if (str[i] == ' ' || '\t')
            whitespace++;
        else
            cout << "character is not a digit, alphabed or whitespace";
    }
    cout << "Vowels : " << vowel << endl;
    cout << "Consonents : " << consonent << endl;
    cout << "Digits : " << digit << endl;
    cout << "Whitespaces : " << whitespace << endl;
    return 0;
}