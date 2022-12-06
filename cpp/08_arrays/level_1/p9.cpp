/*
Problem:
Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays. E.g.-
INITIAL array :
58	24	13	15	63	9	8	81	1	78

After spliting :
58	24	13	15	63
9	8	81	1	78

*/

#include <iostream>
using namespace std;

int main()
{
    int a[] = {58, 24, 13, 15, 63, 9, 8, 81, 1, 78};
    int b[5], c[5];

    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
        c[i] = a[i + 5];
    }

    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;
    for (int i = 0; i < 5; i++)
        cout << b[i] << " ";
    cout << endl;
    for (int i = 0; i < 5; i++)
        cout << c[i] << " ";
    cout << endl;
    
    return 0;
}