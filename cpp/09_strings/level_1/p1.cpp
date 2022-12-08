/*
Problem:
Write a program to find the first and the last occurence of the letter 'o' and character ',' in "Hello, World".

*/

#include <iostream>
using namespace std;

int main()
{
    string s = "Hello, World";
    int flag = 1, j;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'o' && flag)
        {
            cout << "First Occurance : " << i+1<<endl;
            flag = 0;
        }

        if (s[i] == 'o')
        {
            j = i;
        }
    }
    cout << "Last Occurance : " << j+1;
    cout << endl;
    return 0;
}