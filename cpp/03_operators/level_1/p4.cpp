/*
Problem:
Write a program to enter a 4 digit number from the keyboard. Add 8 to the number and then divide it by 3. Now, the modulus of that number is taken with 5 and then multiply the resultant value by 5. Display the final result.

Now, solve the above question using assignment operators (eg. +=, -=, *=).
*/

#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter 4 digit number : ";
    cin >> i;
    i += 8;
    i /= 3;
    i %= 5;
    i *= 5;
    cout << i << endl;
    return 0;
}