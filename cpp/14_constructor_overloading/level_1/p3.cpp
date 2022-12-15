/*
Problem:
Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more amount to it.
Create a class 'AddAmount' with a data member named 'amount' with an initial value of $50. Now make two constructors of this class as follows:
1 - without any parameter - no amount will be added to the Piggie Bank
2 - having a parameter which is the amount that will be added to the Piggie Bank
Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.
*/

#include <iostream>
using namespace std;

class AddAmount
{
    int amount = 50;

public:
    AddAmount()
    {
        // amount = 50;
    }
    AddAmount(int n)
    {
        amount += n;
    }
    void print()
    {
        cout << amount << endl;
    }
};

int main()
{
    AddAmount a1, a2(10);
    a1.print();
    a2.print();

    return 0;
}