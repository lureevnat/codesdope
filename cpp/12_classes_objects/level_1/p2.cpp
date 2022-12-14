/*
Problem:
Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.
*/

#include <iostream>
using namespace std;

class student
{
    string name;
    int roll_no;
    long phone_no;
    string address;

public:
    void setName(string str)
    {
        name = str;
    }
    void setRoll(int roll)
    {
        roll_no = roll;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    void setPhoneNo(long no)
    {
        phone_no = no;
    }

    void printName()
    {
        cout << name << endl;
    }
    void printRollNo()
    {
        cout << roll_no << endl;
    }
    void printPhoneNo()
    {
        cout << phone_no << endl;
    }
    void printAddress()
    {
        cout << address << endl;
    }
};

int main()
{
    class student s1, s2;

    s1.setName("Sam");
    s1.setRoll(123);
    s1.setPhoneNo(9876543210);
    s1.setAddress("Flat 123, World Building, Earth");

    s2.setName("John");
    s2.setRoll(124);
    s2.setPhoneNo(9123456780);
    s2.setAddress("Flat 456, India Building, Earth");

    s1.printName();
    s1.printRollNo();
    s1.printAddress();
    s1.printPhoneNo();

    s2.printName();
    s2.printRollNo();
    s2.printAddress();
    s2.printPhoneNo();

    return 0;
}