/*
Problem:
If the marks of Robert in three subjects are 78,45 and 62 respectively (each out of 100 ), write a program to calculate his total marks and percentage marks.

*/

#include <iostream>
using namespace std;

int main()
{
    int s1 = 78, s2 = 45, s3 = 62, total;
    float percentage;

    total = s1 + s2 + s3;
    percentage = (float)total * 100 / 300;

    cout << "The total marks is : " << total << endl;
    cout << "The Percentage is " << percentage << endl;

    return 0;
}