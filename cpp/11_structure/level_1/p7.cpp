/*
Problem:
Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students.
1 - Write a function to print the names of all the students having age 14.
2 - Write another function to print the names of all the students having even roll no.
3 - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).

*/

#include <iostream>
using namespace std;
struct student
{
    int roll;
    char name[10];
    int age;
    char address[50];
};
void printStudentsName(struct student s[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << s->name << endl;
        s = s + 1;
    }
}

void printStudentsAge14(struct student s[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (s->age == 14)
        {
            cout << s->name << endl;
        }
        s = s + 1;
    }
}
void printStudentsRollEven(struct student s[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (s->roll % 2 == 0)
        {
            cout << s->name << endl;
        }
        s = s + 1;
    }
}
int main()
{
    struct student stds[5] = {{1, "abc", 13, "Flat No: 123, ABC BUILDING, INDIA"},
                              {2, "def", 13, "Flat No: 123, DEF BUILDING, INDIA"},
                              {3, "ghi", 14, "Flat No: 123, GHI BUILDING, INDIA"},
                              {4, "jkl", 15, "Flat No: 123, JKL BUILDING, INDIA"},
                              {5, "mno", 16, "Flat No: 123, NMO BUILDING, INDIA"}};
    printStudentsAge14(stds, 5);
    printStudentsRollEven(stds, 5);

    //Not able to understand the 3rd Question so just printing names
    printStudentsName(stds, 5);
}
