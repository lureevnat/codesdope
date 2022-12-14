/*
Problem:
Print the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate and print the average without creating any object of the Average class.
*/

#include <iostream>
using namespace std;

class Average
{
public:
    int a, b, c;
    Average(int d, int e, int f)
    {
        a = d;
        b = e;
        c = f;
        cout << "The average of three numbers is " << (a + b + c) / 3.0 << endl;
    }
};

int main()
{
    Average a(4, 5, 6);
    return 0;
}