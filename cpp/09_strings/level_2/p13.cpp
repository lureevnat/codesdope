/*
Problem:
Write a program to replace a given substring in a sentence with another string. For example, in the sentence, ” A batman with bat” if we replace ”bat” with ”snow”, the new sentence should be printed as ”A snowman with snow”.
*/

#include <iostream>
#include <regex>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);
    string substr1;
    cout << "Enter a substring to replace:";
    cin >> substr1;
    string substr2;
    cout << "Enter a substring replaced with:";
    cin >> substr2;

    str = regex_replace(str, regex(substr1), substr2); 

    cout << str << endl;
    return 0;
}