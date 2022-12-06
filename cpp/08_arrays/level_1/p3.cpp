/*
Problem:
Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0.
*/

#include <iostream>
using namespace std;

int main()
{
    int a[20];
    int positive = 0, negative = 0, even = 0, odd = 0, zero = 0;

    cout
        << "Enter 20 numbers:";
    for (int i = 0; i < 20; i++)
    {
        cin >> a[i];
        a[i] > 0 ? positive++ : (a[i] < 0 ? negative++ : zero++);
        a[i] % 2 == 0 ? even++ : odd++;
    }

    cout << "the number of positive, negative, odd, even, zero's are " << positive << " " << negative << " " << odd << " " << even << " " << zero << endl;
    return 0;
}