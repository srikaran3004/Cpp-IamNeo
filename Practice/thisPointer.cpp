// Imagine you have two objects, obj1 and obj2, each with a numerical value. You want to create a simple program that allows you to compare these values and determine whether they are equal or not while using the "this" pointer concept.
// Input format :

// The input consists of two integer values for obj1 and obj2, separated by a space.
// Output format :

// After comparing the values of obj1 and obj2, the program should display one of the following messages:

// "The values are equal." if the values are equal.

// "The values are not equal." if the values are not equal.
// Code constraints :

// -10000 <= obj1, obj2 <= 10000
// Sample test cases :
// Input 1 :

// 10 20

// Output 1 :

// The values are not equal.

// Input 2 :

// 30 30

// Output 2 :

// The values are equal.

// Input 3 :

// -20 -20

// Output 3 :

// The values are equal.

#include <iostream>
using namespace std;

class Myclass
{
public:
    int value;
    void getValue()
    {
        cin >> this->value;
    }
    void compare(Myclass *other)
    {
        if (this->value == other->value)
        {
            cout << "The values are equal";
        }
        else
        {
            cout << "The values are not equal";
        }
    }
};
int main()
{
    Myclass obj1;
    Myclass obj2;
    obj1.getValue();
    obj2.getValue();
    obj1.compare(&obj2);
}