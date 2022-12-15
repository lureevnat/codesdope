/*
Problem:
We want to store the information of different vehicles. Create a class named Vehicle with two data member named mileage and price. Create its two subclasses
*Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).
*Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches)
Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type.
Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS bike.
*/

#include <iostream>
using namespace std;

class Vehicle
{
    int mileage, price;
};

class Car : public Vehicle
{
    int ownership_cost, warranty, seating_capacity;
    string fuel_tyoe;
};

class Bike : public Vehicle
{
    int num_cylinders, num_gears;
    string cooling_type, wheel_type, fuel_tank_size;
};

class Audi : public Car
{
    string model_type;
};

class Ford : public Car
{
    string model_type;
};

class Bajaj : public Bike
{
};

class TVS_Bike : public Bike
{
};

int main()
{

    return 0;
}