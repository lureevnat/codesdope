/*
Problem:
Create a class to print an integer and a character using two functions having the same name but different sequence of the integer and the character parameters.
For example, if the parameters of the first function are of the form (int n, char c), then that of the second function will be of the form (char c, int n).
*/

#include <iostream>
using namespace std;

class intchar
{
public:
    static void print(int n, char c)
    {
        cout << n << " " << c << endl;
    }
    static void print(char c, int n)
    {
        cout << n << " " << c << endl;
    }
};

int main()
{
    intchar::print(10, 'h');
    intchar::print('h', 10);
    return 0;
}