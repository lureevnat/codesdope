/*
Problem:
Write a program to check if the two strings entered by user are anagrams or not. Two words are said to be anagrams if the letters of one word can be rearranged to form the other word. For example, jaxa and ajax are anagrams of each other.

*/

#include <iostream>
using namespace std;

int main()
{
    string stra, strb;
    cout << "Enter Two Strings: ";
    cin >> stra >> strb;

    if (stra.length() != strb.length())
    {
        cout << "Not anagrams" << endl;
    }
    else
    {
        for (int i = 0; i < stra.length(); i++)
        {
            for (int j = i; j < stra.length(); j++)
            {
                if (stra[i] == strb[j])
                {
                    char temp = strb[i];
                    strb[i] = strb[j];
                    strb[j] = temp;
                    break;
                }
            }
        }
        if (stra == strb)
            cout << "Anagram words";
        else
            cout << "Not anagrams" << endl;
    }

    return 0;
}