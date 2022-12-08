/*
Problem:
Create an array of characters and then print the address of each of the elements of the array. Take difference of two consecutive addresses and compare this with array of integers.
*/

#include <iostream>
using namespace std;

int main()
{
    char str[] = "Hello";
    int a[] = {1, 2, 3, 4, 5};
    printf("diff str = %ld\n", long(&str[1]) - long(&str[0]));
    printf("diff int = %ld\n", long(&a[1]) - long(&a[0]));
    return 0;
}