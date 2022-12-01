/*
Problem:
Write a program to find out the greatest and the smallest among three numbers using pointers.

*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, *pa, *pb, *pc;
    pa = &a;
    pb = &b;
    pc = &c;

    cout << "Enter a, b, c values: ";
    cin >> a >> b >> c;

    if (*pa >= *pb && *pa >= *pc)
        cout << *pa << " is Big" << endl;
    else if (*pb >= *pc)
        cout << *pb << " is Big" << endl;
    else
        cout << *pc << " is Big" << endl;

    return 0;
}