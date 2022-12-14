/*
Problem:
Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
*/

#include <iostream>
using namespace std;

class student
{
    string name;
    int roll_no;

public:
    void setName(string str)
    {
        name = str;
    }
    void setRoll(int roll)
    {
        roll_no = roll;
    }

    void printName()
    {
        cout << name << endl;
    }
    void printRollNo()
    {
        cout << roll_no << endl;
    }
};

int main()
{
    class student st;

    st.setName("abcd");
    st.setRoll(123);
    st.printName();
    st.printRollNo();

    return 0;
}