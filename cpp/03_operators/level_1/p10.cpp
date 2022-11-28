/*
Problem:

Take input of some length in meter and covert it to feet and inches.

1 meter is equal to 3.2808 feet:

1 m = 3.2808 ft

1 meter is equal to 39.37 inches:

1 m = 39.37 in

1 foot is equal to 12 inches;

*/

#include <iostream>
using namespace std;

int main()
{

    float mts;
    int inches, feet;
    cout << "Enter Length in meters :";
    cin >> mts;

    // total inches
    inches = mts * 39.37;
    
    feet = inches / 12;
    inches %= 12;

    cout
        << "Given length in feet and inches is : " << feet << " feet " << inches << " inches" << endl;
    return 0;
}