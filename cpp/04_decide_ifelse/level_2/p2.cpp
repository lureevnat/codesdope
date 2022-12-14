/*
Problem:
Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
if employee is female, then she will work only in urban areas.

if employee is a male and age is in between 20 to 40 then he may work in anywhere

if employee is male and age is in between 40 t0 60 then he will work in urban areas only.

And any other input of age should print "ERROR".
*/

#include <iostream>
using namespace std;

int main()
{
    char sex;
    int age;

    cout << "Enter Sex (M or F) : ";
    cin >> sex;
    cout << "Enter Age: ";
    cin >> age;

    if (sex == 'F')
        cout << "You can work only in urban areas.";
    else if (sex == 'M')
        if (age >= 20 && age < 40)
            cout << "You can work anywhere";
        else if (age >= 40 && age < 60)
            cout << "You can work in urban areas only ";
        else
            cout << "ERROR";
    else
        cout << "Invalid Input" << endl;

    return 0;
}