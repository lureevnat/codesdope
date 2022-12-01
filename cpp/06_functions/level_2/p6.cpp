/*
Problem:
Write a program that takes as input your gross salary and your total saving and uses another function named taxCalculator() to calculate your tax. The taxCalculator() function takes as parameters the gross salary as well as the total savings amount. The tax is calculated as follows:
(a) The savings is deducted from the gross income to calculate the taxable income. Maximum deduction of savings can be Rs. 100,000, even though the amount can be more than this.
(b) For up to 100,000 as taxable income the tax is 0 (Slab 0); beyond 100,000 to 200,000 tax is 10% of the difference above 100,000 (Slab 1); beyond 200,000 up to 500,000 the net tax is the tax calculated from Slab 0 and Slab 1 and then 20% of the taxable income exceeding 200,000 (Slab 2); if its more than 500,000, then the tax is tax from Slab 0, Slab 1, Slab 2 and 30% of the amount exceeding 500,000.
*/

#include <iostream>
using namespace std;

unsigned long int taxCalculator(unsigned long int gross_salary, unsigned long int total_savings)
{
    int taxable_income = (total_savings > 100000 ? gross_salary - 100000 : gross_salary - total_savings);
    int tax = 0;

    if (taxable_income <= 100000)
        return 0;
    else if (taxable_income > 100000 && taxable_income <= 200000)
        return (taxable_income - 100000) * 0.1;
    else if (taxable_income > 200000 && taxable_income <= 500000)
        return 10000 + (taxable_income - 200000) * 0.2;
    else
        return 70000 + (taxable_income - 500000) * 0.3;
}
int main()
{
    unsigned long int gross_salary, total_savings;
    cout << "Enter Gross Salary and total savings : ";
    cin >> gross_salary >> total_savings;
    cout << "The Total Tax is " << taxCalculator(gross_salary, total_savings) << endl;
    return 0;
}