/*
Problem:
All the banks operating in India are controlled by RBI.
RBI has set a well defined guideline (e.g. minimum interest rate, minimum balance allowed, maximum withdrawal limit etc) which all banks must follow.
For example, suppose RBI has set minimum interest rate applicable to a saving bank account to be 4% annually;
however, banks are free to use 4% interest rate or to set any rates above it.

Write a program to implement bank functionality in the above scenario.
Note: Create few classes namely Customer, Account, RBI (Base Class) and few derived classes (SBI, ICICI, PNB etc).
Assume and implement required member variables and functions in each class.
*/

#include <iostream>
using namespace std;

class Customer
{
    string name, address, acc_no;
    int age;

public:
    Customer(string name, string address, string acc_no, int age)
    {
        this->name = name;
        this->address = address;
        this->acc_no = acc_no;
        this->age = age;
    }
};
class Account
{
    string acc_type, branch;

public:
    Account(string acc_type, string branch)
    {
        this->acc_type = acc_type;
        this->branch = branch;
    }
};
class RBI
{
protected:
    // Base class
    int min_bal, max_withdraw;

    double min_r;

public:
    RBI()
    {
        min_bal = 1000;
        max_withdraw = 1000000;
        min_r = 4.0;
    }

    void set_minRate(double min_r)
    {
        if (min_r >= this->min_r)
        {
            this->min_r = min_r;
        }
        else
        {
            cout << "Minimum rate should be: " << this->min_r << " as per RBI guidelines" << endl;
        }
    }

    void set_minBal(int min_bal)
    {
        if (min_bal >= this->min_bal)
        {
            this->min_bal = min_bal;
        }
        else
        {
            cout << "Minimum balance amount should be atleast " << this->min_bal << " as per RBI guidelines" << endl;
        }
    }

    void set_max_wl(int max_withdraw)
    {
        if (max_withdraw > this->max_withdraw)
        {
            this->max_withdraw = max_withdraw;
        }
        else
        {
            cout << "Maximum withdrawal limit should be atleast " << this->max_withdraw << " as per RBI guidelines" << endl;
        }
    }

    void printInfo()
    {
        cout << "\nUpdated Minimum Balance: " << min_bal << endl;
        cout << "Updated Minimum Interest Rate: " << min_r << endl;
        cout << "Updated Maximum Withraw Limit: " << min_bal << endl;
    }
};
class SBI : public RBI
{ // Child class1

public:
    SBI(int min_bal, int max_withdraw, double min_r)
    {
        set_minRate(min_r);
        set_minBal(min_bal);
        set_max_wl(max_withdraw);
    }

    void printInfo()
    {
        cout << "\nFinal Minimum Balance: " << min_bal << endl;
        cout << "Final Minimum Interest Rate: " << min_r << endl;
        cout << "Final Maximum Withraw Limit: " << min_bal << endl;
    }
};
class ICICI : public RBI
{ // Child class2
public:
    ICICI(int min_bal, int max_withdraw, double min_r)
    {
        set_minRate(min_r);
        set_minBal(min_bal);
        set_max_wl(max_withdraw);
    }

    void printInfo()
    {
        cout << "\nFinal Minimum Balance: " << min_bal << endl;
        cout << "Final Minimum Interest Rate: " << min_r << endl;
        cout << "Final Maximum Withraw Limit: " << min_bal << endl;
    }
};
class PNB : public RBI
{
    // Child class3

public:
    PNB(int min_bal, int max_withdraw, double min_r)
    {
        set_minRate(min_r);
        set_minBal(min_bal);
        set_max_wl(max_withdraw);
    }

    void printInfo()
    {
        cout << "\nFinal Minimum Balance: " << min_bal << endl;
        cout << "Final Minimum Interest Rate: " << min_r << endl;
        cout << "Final Maximum Withraw Limit: " << min_bal << endl;
    }
};
int main()
{
    int x;
    cout << "Enter your choice to update the details" << endl;
    cout << "1: SBI\n2: ICICI\n3: PNB" << endl;
    cin >> x;
    cout << "For any Invalid input Default RBI Guidelines will be considered." << endl;
    cout << "Enter minimum balance, maximum withdraw limit and minimum Interest rate" << endl;
    int a, b;
    double c;
    cin >> a >> b >> c;
    RBI bank;
    switch (x)
    {
    case 1:
        bank = SBI(a, b, c);
        bank.printInfo();
        break;
    case 2:
        bank = ICICI(a, b, c);
        bank.printInfo();
        break;
    case 3:
        bank = PNB(a, b, c);
        bank.printInfo();
        break;
    default:
        cout << "Invalid Input" << endl;
    }
    return 0;
}
