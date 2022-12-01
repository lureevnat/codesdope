/*
Problem:
Write a function which will take pointer and display the number on screen. Take number from user and print it on screen using that function.

*/

#include <iostream>
using namespace std;

void print_num(int *p)
{
    cout << "The number is " << *p << endl;
}
int main()
{
    int a, *p;
    p = &a;
    cout << "Enter number a:";
    cin >> a;
    print_num(p);
    return 0;
}