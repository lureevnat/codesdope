/*
Problem:
Create a class with a function that prints "This is parent class" and its subclass with another function that prints "This is child class". Now, create an object for each class and call
1 - function of the parent class by the object of the parent class
2 - function of the child class by the object of the child class
3 - function of the parent class by the object of the child class
*/

#include <iostream>
using namespace std;

class ParentClass
{
public:
    void parent_print()
    {
        cout << "This is parent class" << endl;
    }
};

class SubClass : public ParentClass
{
public:
    void child_print()
    {
        cout << "This is child class" << endl;
    }
};
int main()
{
    ParentClass p;
    SubClass s;
    p.parent_print();
    s.child_print();
    s.parent_print();
    return 0;
}