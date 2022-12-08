/*
Problem:
Write a program to enter a string s1 and copy it to another string s2.

*/
#include <cstring>
#include <iostream>
using namespace std;

string convertToString(char *a)
{
    string s(a);
    return s;
}
int main()
{
    char ca[] = "Hello", ca_copy[10];
    string s = "Hello", s_copy;

    // copy string to string
    s_copy = s;
    cout << s_copy << endl;

    // copy string to char array
    strcpy(ca_copy, s.c_str());
    cout << ca_copy << endl;

    s_copy = '\0';
    ca_copy[0] = '\0';
    cout << s_copy << endl;
    cout << ca_copy << endl;

    // char array to string
    s_copy = convertToString(ca);
    cout << s_copy << endl;

    // char array to char array
    strcpy(ca_copy, ca);
    cout << ca_copy << endl;

    return 0;
}