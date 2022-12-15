/*
Problem:
A boy has his money deposited $1000, $1500 and $2000 in banks-Bank A, Bank B and Bank C respectively.
We have to print the money deposited by him in a particular bank.
Create a class 'Bank' with a function 'getBalance' which returns 0.
Make its three subclasses named 'BankA', 'BankB' and 'BankC' with a function with the same name 'getBalance' which returns the amount deposited in that particular bank.
Call the function 'getBalance' by the object of each of the three banks.
*/

#include <iostream>
using namespace std;

class Bank
{
    void getBalance()
    {
        cout << "Your balance is 0" << endl;
    }
};

class BankA : public Bank
{
    int bal;

public:
    BankA(int bal)
    {
        this->bal = bal;
    }

    void getBalance()
    {
        cout << "Your balance is " << bal << "$" << endl;
    }
};

class BankB : public Bank
{
    int bal;

public:
    BankB(int bal)
    {
        this->bal = bal;
    }
    void getBalance()
    {
        cout << "Your balance is " << bal << "$" << endl;
    }
};

class BankC : public Bank
{
    int bal;

public:
    BankC(int bal)
    {
        this->bal = bal;
    }

    void getBalance()
    {
        cout << "Your balance is " << bal << "$" << endl;
    }
};

int main()
{
    BankA a(1000);
    BankB b(1500);
    BankC c(2000);
    a.getBalance();
    b.getBalance();
    c.getBalance();

    return 0;
}