/*
Problem:
Consider an integer array, the number of elements in which is determined by the user. The elements are also taken as input from the user. Write a program to find those pair of elements that has the maximum and minimum difference among all element pairs.
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 0, input[100], max_p0, max_p1, min_p0, min_p1;
    cout << "Enter how many number of elements:";
    cin >> num;
    cout << "Enter Elements: ";
    for (int i = 0; i < num; i++)
        cin >> input[i];

    max_p0 = input[0];
    max_p1 = input[1];
    min_p0 = input[0];
    min_p1 = input[1];

    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (input[i] - input[j] > max_p0 - max_p1 || input[i] - input[j] > max_p1 - max_p0)
            {
                max_p0 = input[i];
                max_p1 = input[j];
            }
            if (input[i] - input[j] < min_p0 - min_p1 || input[i] - input[j] < min_p1 - min_p0)
            {
                min_p0 = input[i];
                min_p1 = input[j];
            }
        }
    }

    cout << "The max pair is " << max_p0 << " and " << max_p1 << endl;
    cout << "The min pair is " << min_p0 << " and " << min_p1 << endl;

    return 0;
}