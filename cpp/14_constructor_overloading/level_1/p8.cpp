/*
Problem:
Create a class 'Student' with three data members which are name, age and address.
The constructor of the class assigns default values to name as "unknown", age as '0' and address as "not available".
It has two functions with the same name 'setInfo'.
First function has two parameters for name and age and assigns the same whereas the second function takes has three parameters which are assigned to name, age and address respectively. Print the name, age and address of 10 students.
Hint - Use array of objects
*/

#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;
    string address;

public:
    Student()
    {
        name = "unknown";
        age = 0;
        address = "not available";
    }
    void setInfo(string name, int age)
    {
        this->name = name;
        this->age = age;
        print();
    }
    void setInfo(string name, int age, string address)
    {
        this->name = name;
        this->age = age;
        this->address = address;
        print();
    }
    void print()
    {
        cout << name << " " << age << " " << address << endl;
    }
};

int main()
{
    Student s[10];
    s[0].setInfo("abc", 10);
    s[1].setInfo("abd", 11);
    s[2].setInfo("abe", 12);
    s[3].setInfo("abf", 13);
    s[4].setInfo("abg", 14);
    s[5].setInfo("abh", 15, "Flat 105, Earth");
    s[6].setInfo("abi", 16, "Flat 106, Earth");
    s[7].setInfo("abj", 17, "Flat 107, Earth");
    s[8].setInfo("abk", 18, "Flat 108, Earth");
    s[9].setInfo("abl", 19, "Flat 109, Earth");
    return 0;
}