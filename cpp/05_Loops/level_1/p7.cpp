/*
Problem:
Make integer inputs from user until he/she presses q ( Ask to press q to quit after every integer input ). Print average and product of all numbers.
*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    while (true)
    {
        cout << "Enter Integer (press 'q' to exit) : ";
        cin >> str;
        if (str == "q")
            break;
        cout << "int : " << stoi(str) << endl;
    }
    return 0;
}