/*
Problem:
Add two distances in inch-feet by creating a class named 'AddDistance'.

*/

#include <iostream>
using namespace std;

class AddDistance
{
private:
    int feet;
    int inch;

public:
    void setDistance()
    {
        cout << " feet: ";
        cin >> feet;
        cout << "inches: ";
        cin >> inch;
    }

    void getDistance()
    {
        cout << "feet: " << feet;
        cout << " inches: " << inch;
    }

    AddDistance addDistance(AddDistance d)
    {
        AddDistance dist;

        dist.feet = feet + d.feet;
        dist.inch = inch + d.inch;

        if (dist.inch >= 12)
        {
            dist.feet++;
            dist.inch -= 12;
        }
        return dist;
    }
};

int main()
{
    AddDistance d1, d2, d3;

    // taking the two distances as input from user
    cout << "Enter length of Distance 1: " << endl;
    d1.setDistance();

    cout << "Enter length of Distance 2: " << endl;
    d2.setDistance();

    // adding the distances
    d3 = d1.addDistance(d2);

    // displaying resultant distance
    cout << "Sum of Distance 1 and Distance 2:" << endl;
    d3.getDistance();
    return 0;
}