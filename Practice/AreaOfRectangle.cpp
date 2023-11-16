// Alexa is developing a program to compare two rectangles based on their dimensions. The program prompts the user to enter the width and height of two rectangles (rect1 and rect2) and calculates their areas using this pointer.

// The program then determines if the two rectangles have the same dimensions or not by comparing their width and height. If the dimensions are the same, it displays a message indicating that the rectangles have the same dimensions. Otherwise, it displays a message stating that the rectangles have different dimensions.

// Note: This is a sample question asked in a Cocubes interview.
// Input format :

// The first line of the input contains two integer values, representing the width and height of rectangle 1.

// The second line of the input contains two integer values, representing the width and height of rectangle 2.
// Output format :

// The first line of the output displays the area of rectangle 1.

// The second line of the output displays the area of rectangle 1.

// The last line of the output follows the given conditions: If the dimensions are the same, it displays a message indicating that "rect1 and rect2 have the same dimensions." Otherwise, it displays a message stating that "rect1 and rect2 have different dimensions."

// Refer to the sample output for the formatting specifications.
// Code constraints :

// The width and height values entered by the user must be non-negative integers.

// The width and height values must be within a reasonable range, such as within the limits of an integer data type.
// Sample test cases :
// Input 1 :

// 2 3
// 2 3

// Output 1 :

// Area of rect1: 6
// Area of rect2: 6
// rect1 and rect2 have the same dimensions.

// Input 2 :

// 2 5
// 3 8

// Output 2 :

// Area of rect1: 10
// Area of rect2: 24
// rect1 and rect2 have different dimensions.

// Input 3 :

// 4 3
// 3 4

// Output 3 :

// Area of rect1: 12
// Area of rect2: 12
// rect1 and rect2 have different dimensions.

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width;
    int height;
    Rectangle(int width, int height)
    {
        this->width = width;
        this->height = height;
    }
    int getArea()
    {
        return width * height;
    }
};

int main()
{
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    Rectangle rect1(w1, h1);
    Rectangle rect2(w2, h2);
    cout << "Area of rect1: " << rect1.getArea() << endl;
    cout << "Area of rect2: " << rect2.getArea() << endl;
    if (rect1.width == rect2.width && rect1.height == rect2.height)
    {
        cout << "rect1 and rect2 have the same dimensions." << endl;
    }
    else
    {
        cout << "rect1 and rect2 have different dimensions." << endl;
    }
}
