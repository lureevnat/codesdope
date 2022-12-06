/*
Problem:
Write a program to add and multiply two 3x3 matrices.
*/

#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int sum[3][3], mul[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];

            mul[i][j] = a[i][0] * b[0][j];
            for (int k = 1; k < 3; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "Sum" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
    cout << "Mul" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}