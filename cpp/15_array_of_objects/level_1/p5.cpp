/*
Problem:
Write a program to create a directory that contains the following information.
(a) Name of a person
(b) Address
(c) Telephone Number (if available with STD code)
(d) Mobile Number (if available)
(e) Head of the family

*/

#include <iostream>
using namespace std;

class Person
{
    string name, address, head_of_family;
    int t_num, m_num;

public:
    Person(string name, string address, string head_of_family, int t_num, int m_num)
    {
        this->name = name;
        this->address = address;
        this->head_of_family = head_of_family;
        this->t_num = t_num;
        this->m_num = m_num;
    }
    void print()
    {
        cout << name << " " << t_num << " " << m_num << " " << head_of_family << " " << address << endl;
    }
};

int main()
{
    Person p("abc", "def", "ghi", 123, 1234);
    p.print();

    return 0;
}