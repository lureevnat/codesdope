/*
Problem:
Write a macro to compare two numbers.

*/

#include<iostream>
using namespace std;
#define equal(a,b) (a==b)
int main()
{
  cout << equal(5,2) << "\n";
  cout << equal(5,5) << "\n";
  return 0;
}         