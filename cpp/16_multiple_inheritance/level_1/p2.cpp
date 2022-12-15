/*
Problem:
Make a class named Fruit with a data member to calculate the number of fruits in a basket.
Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket.
Print the number of fruits of each type and the total number of fruits in the basket.
*/

#include <iostream>
using namespace std;

class Mangoes
{
public:
    int nMango;
    Mangoes()
    {
        cout << "No. of Mangoes:";
        cin >> nMango;
    }
};

class Apples
{
public:
    int nApple;
    Apples()
    {
        cout << "No. of apples:";
        cin >> nApple;
    }
};

class Fruit : public Mangoes, Apples
{
public:
    int nFruits;
    void cal_no_of_fruit()
    {
        nFruits = nMango + nApple;
    }
    void display()
    {
        cout << "No. of fruit are " << nFruits;
    }
};

int main()
{
    Fruit f;
    f.cal_no_of_fruit();
    f.display();
    return 0;
}