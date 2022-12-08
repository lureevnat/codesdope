/*
Problem:
Write a macro to find absolute value of number.
*/

#include<iostream>
using namespace std;
#define abs(a) ((a<1)?(-1*a):a)
int main()
{
  cout << abs(-5) <<"\n";
  cout << abs(5) <<"\n";
  return 0;
}