/*
Problem:
Print the multiplication table of 15 using recursion.

*/

#include <iostream>
using namespace std;

void multiplication(int num, int times)
{
    if (times)
    {
        multiplication(num, times - 1);
        cout << num << " * " << times << " = " << num * times << endl;
    }
    return;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    multiplication(num, 10);
    return 0;
}