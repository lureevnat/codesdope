/*
Problem:
Create a class 'Degree' having a function 'getDegree' that prints "I got a degree".
It has two subclasses namely 'Undergraduate' and 'Postgraduate' each having a function with the same name that prints "I am an Undergraduate" and "I am a Postgraduate" respectively. Call the function by creating an object of each of the three classes.
*/

#include <iostream>
using namespace std;

class Degree
{
public:
    void getDegree()
    {
        cout << "I got a degree" << endl;
    }
};

class Undergraduate : public Degree
{
public:
    void getDegree()
    {
        cout << "I am an Undergraduate" << endl;
    }
};

class Postgraduate : public Degree
{
public:
    void getDegree()
    {
        cout << "I am a Postgraduate" << endl;
    }
};

int main()
{
    Degree d;
    Undergraduate u;
    Postgraduate p;
    d.getDegree();
    u.getDegree();
    p.getDegree();
    return 0;
}