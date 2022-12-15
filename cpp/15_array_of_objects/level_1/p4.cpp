/*
Problem:
Lets create a bank account. Create a class named 'BankAccount' with the following data members
1 - Name of depositor
2 - Address of depositor
3 - Type of account
4 - Balance in account
5 - Number of transactions
Class 'BankAccount' has a function for each of the following
1 - Generate a unique account number for each depositor
For the first depositor, account number will be BA1000, for the second depositor it will be BA1001 and so on
2 - Display information and balance of depositor
3 - Deposit more amount in the balance of any depositor
4 - Withdraw some amount from the balance deposited
5 - Change the address of depositor
After creating the class, do the following operations
1 - Enter the information (name, address, type of account, balance) of the depositors. Number of depositors are to be entered by the user.
2 - Print the information of any depositor.
3 - Add some amount to the account of any depositor and then display the final information of that depositor
4 - Remove some amount from the account of any depositor and then display the final information of that depositor
5 - Change the address of any depositor and then display the final information of that depositor
6 - Randomly repeat these processes for some other bank accounts and after that print the total number of transactions.
*/

// check whether we can use static variables inside the class. 

#include <iostream>
using namespace std;

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
static int num_of_accounts;

class bank
{
    string acno;
    char nm[100], acctype[100];
    float bal;

public:
    bank(char *name, char *acc_type, float balance) // Parameterized Constructor
    {
        acno = "abc" + to_string(num_of_accounts);
        num_of_accounts += 1;
        strcpy(nm, name);
        strcpy(acctype, acc_type);
        bal = balance;
    }
    void deposit();
    void withdraw();
    void display();
};
void bank::deposit() // depositing an amount
{
    int damt1;
    cout << "\n Enter Deposit Amount = ";
    cin >> damt1;
    bal += damt1;
}
void bank::withdraw() // withdrawing an amount
{
    int wamt1;
    cout << "\n Enter Withdraw Amount = ";
    cin >> wamt1;
    if (wamt1 > bal)
        cout << "\n Cannot Withdraw Amount";
    bal -= wamt1;
}
void bank::display() // displaying the details
{
    cout << "\n ----------------------";
    cout << "\n Accout No. : " << acno;
    cout << "\n Name : " << nm;
    cout << "\n Account Type : " << acctype;
    cout << "\n Balance : " << bal;
}
int main()
{
    char name[100], acc_type[100];
    float balance;
    cout << "\n Enter Details: \n";
    cout << "-----------------------";
    cout << "\n Name : ";
    cin >> name;
    cout << "\n Account Type : ";
    cin >> acc_type;
    cout << "\n Balance : ";
    cin >> balance;

    bank b1(name, acc_type, balance); // object is created
    b1.deposit();                     //
    b1.withdraw();                    // calling member functions
    b1.display();                     //
    return 0;
}