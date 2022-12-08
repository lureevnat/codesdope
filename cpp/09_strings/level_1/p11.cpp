/*
Problem:
Write the string after the first occurrence of ',' and the string after the last occurrence of ',' in the string "Hello, Good, Morning".

*/

#include <iostream>
using namespace std;

int main()
{
    string s = "Hello, Good, Morning";
    int flag = 1, j;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ',' && flag)
        {
            cout << "First Occurance : " << i + 1 << endl;
            flag = 0;
        }

        if (s[i] == 'o')
        {
            j = i;
        }
    }
    cout << "Last Occurance : " << j + 1;
    cout << endl;
    return 0;
}