/*
Problem:

*/

#include <iostream>
using namespace std;

int main()
{
    struct student
    {
        int roll_no;
        string name;
        int age;
    };
    typedef struct student student;
    student stu[5] = {{1, "abc", 27}, {2, "def", 30}, {3, "abde", 28}, {4, "ghi", 29}, {5, "dpl", 27}};
    cout << "Name: " << stu[1].name << endl;
    cout << "Roll: " << stu[1].roll_no << endl;
    cout << "Age: " << stu[1].age << endl;
    return 0;
}