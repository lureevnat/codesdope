/*
Problem:
Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
1 - Write a function to print the names of all the customers having balance less than $200.
2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.
*/

#include <iostream>
using namespace std;

struct customer
{
    char name[20];
    int acc_no;
    int balance;
};

void balanceLessthan200(struct customer cts[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (cts->balance < 200)
        {
            cout << cts->name << endl;
        }
        cts = cts + 1;
    }
}
void add100for1000more(struct customer cts[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (cts->balance >= 1000)
        {
            cts->balance = cts->balance + 100;

            cout << cts->name << " and " << cts->balance << endl;
        }
        cts = cts + 1;
    }
}

int main()
{
    struct customer cts[5] =
        {
            {"abc", 123, 50},
            {"abd", 124, 100},
            {"abe", 125, 200},
            {"abf", 126, 300},
            {"abg", 127, 1200},
        };
    balanceLessthan200(cts, 5);
    add100for1000more(cts, 5);
    return 0;
}