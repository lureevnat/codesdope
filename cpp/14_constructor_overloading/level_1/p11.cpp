/*
Problem:
A class has an integer data member 'i' and a function named 'printNum' to print the value of 'i'.
Its subclass also has an integer data member 'j' and a function named 'printNum' to print the value of 'j'.
Make an object of the subclass and use it to assign a value to 'i' and to 'j'.
Now call the function 'printNum' by this object.
*/

#include <iostream>
using namespace std;

class A
{
protected:
    int i;

public:
    void printNum()
    {
        cout << i << endl;
    }
};

class B : public A
{
    int j;

public:
    void printNum()
    {
        cout << j << endl;
    }
    void printNumA()
    {
        A::printNum();
    }

    void seti(int i)
    {
        this->i = i;
    }
    void setj(int j)
    {
        this->j = j;
    }
};

int main()
{
    B b;
    b.setj(10);
    b.seti(20);
    b.printNum();
    b.printNumA();
    return 0;
}