/*
Problem:
The total number of students in a class are 45 out of which 25 are boys. If 80% of the total students secured grade 'A' out of which 17 are boys, then write a program to calculate the total number of girls getting grade 'A'.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << 45 * 80 / 100 - 17;
    return 0;
}