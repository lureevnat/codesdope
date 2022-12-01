/*
Problem:
Print the following patterns using loop :
a.
*
**
***
****
b.
  *
 ***
*****
 ***
  *
c.
1010101
 10101
  101
   1
*/

#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }

    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (i + j >= 2 && i + j <= 6 && i - j <= 2 && i - j >= -2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for (int i = 7, s = 0; i > 0; i = i - 2, s++)
    {
        for (int j = 0; j < s; j++)
            cout << " ";
        for (int j = 0; j < i; j++)
            cout
                << (j % 2 == 1 ? 1 : 0);
        cout << endl;
    }

    return 0;
}