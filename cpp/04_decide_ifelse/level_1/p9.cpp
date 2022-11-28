/*
Problem:
A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.

Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.
*/

#include <iostream>
using namespace std;

int main()
{
    int num_classes, num_classes_attended;
    float attendence_percentage;
    char medical_cause;
    cout << "Number of Classes Held: ";
    cin >> num_classes;
    cout << "Number of Classes attended: ";
    cin >> num_classes_attended;

    attendence_percentage = num_classes_attended * 100.0 / num_classes;

    cout << "Attendence Percentage : " << attendence_percentage << endl;
    if (attendence_percentage >= 75)
        cout << "Eligible to sit in exam.";
    else
    {
        cout << "Does the student have a medical cause : (y or n): ";
        cin >> medical_cause;
        if (medical_cause == 'y')
            cout << "Eligible to sit in exam.";
        else
            cout << "Not eligible to sit in the exam.";
    }

    return 0;
}