/*
Problem:
Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
1	Karlee	22	52	75
2	Ronda	90	96	36
3	Belita	99	55	15
4	Janaye	32	28	27
5	Lottie	52	44	66
*/

#include <iostream>
using namespace std;

int main()
{
    struct student
    {
        int roll;
        string name;
        int maths_marks;
        int physics_marks;
        int chem_marks;
        float percentage;
    };
    struct student stu[5];
    cout << "Enter student details:";
    for (int i = 0; i < 5; i++)
    {
        cin >> stu[i].roll >> stu[i].name >> stu[i].maths_marks >> stu[i].physics_marks >> stu[i].chem_marks;
    }
    for (int i = 0; i < 5; i++)
    {
        stu[i].percentage = (stu[i].maths_marks + stu[i].physics_marks + stu[i].chem_marks) / 3.0;
        cout << stu[i].roll << " " << stu[i].name << " " << stu[i].maths_marks << " " << stu[i].physics_marks << " " << stu[i].chem_marks << " " << stu[i].percentage << endl;
    }

    return 0;
}
