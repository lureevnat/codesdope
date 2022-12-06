/*
Problem:
Initialize a 2D array of 3*3 matrix. E.g.-
1	2	3
4	5	6
7	8	9

Check if the matrix is symmetric or not.
*/

#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}};
    int flag = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }
    }
    cout << (flag ? "Symmetric Matrix" : "Not a symmetric matrix") << endl;
    return 0;
}