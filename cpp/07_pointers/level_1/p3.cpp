/*
Problem:
Write a program to print the value of the address of the pointer to a variable whose value is input from user.

*/

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter number a:";
    cin >> a;

    int *p = &a;

    cout << "value of the address of the pointer p to a variable a is " << &p << endl;
    
    return 0;
}