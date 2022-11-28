/*
Problem:
Take a 4 digit number. Write a program to display a number whose digits are 2 greater than the corresponding digits of the number TAKEN.
For example, if the number which was taken is 5696, then the displayed number should be 7818.
*/

#include <iostream>
using namespace std;

int main()
{
    int d4, out;
    cout << "Enter a 4 digit number : ";
    cin >> d4;
    out = (2 + (d4 / 1000)) % 10 * 1000 + (2 + (d4 / 100 % 10)) % 10 * 100 + (2 + (d4 / 10 % 10)) % 10 * 10 + (2 + (d4 % 10)) % 10;
    cout << "Number after digits incremented by 2 : " << out;
    return 0;
}