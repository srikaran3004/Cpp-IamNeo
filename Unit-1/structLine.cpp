// Vishnu is developing a geometry application that requires calculations related to lines. The program should be utilized to calculate the distance between two points and find the midpoint of a line segment.


// Create a structure named Line to store the coordinates of a point, say x and y. Find the distance between two Points.


// The distance between two points is given by the Euclidean formula.


// Also find the midpoint of the line formed by two points (x1, y1) and (x2, y2):



// Note: This is a sample question asked in an Amcat interview.
// Input format :

// The first line of input is the value of X1 and Y1, separated by a space.

// The next line is the value of X2 and Y2, separated by a space.
// Output format :

// The first line of output prints the distance between two points.

// The next line prints the midpoint.


// Refer to the sample output for the exact format.
// Code constraints :

// X1, X2 >=0

// Y1, Y2>=0
// Sample test cases :
// Input 1 :

// 1 1
// 2 2

// Output 1 :

// Distance: 1.41
// Midpoint: 1.50 1.50

// Input 2 :

// 3 2
// 4 1

// Output 2 :

// Distance: 1.41
// Midpoint: 3.50 1.50


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Point {
    float x, y;
};

struct Line {
    Point p1, p2;
};

float distance(Point p1, Point p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

Point midpoint(Point p1, Point p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

int main() {
    Line line;
    cin >> line.p1.x >> line.p1.y >> line.p2.x >> line.p2.y;
    float d = distance(line.p1, line.p2);
    Point mid = midpoint(line.p1, line.p2);
    cout << fixed << setprecision(2);
    cout << "Distance: " << d << endl;
    cout << "Midpoint: " << mid.x << " " << mid.y << endl;
    return 0;
}


// #include <iostream>
// #include <cmath>
// using namespace std;

// struct Line {
//     float x, y;
// };

// float distance(Line p1, Line p2) {
//     float dx = p2.x - p1.x;
//     float dy = p2.y - p1.y;
//     return sqrt(dx*dx + dy*dy);
// }

// int main() {
//     Line p1, p2;
//     cin >> p1.x >> p1.y >> p2.x >> p2.y;
//     float d = distance(p1, p2);
//     cout << "Distance: " << d << endl;
//     cout << "Midpoint: " << (p1.x + p2.x) / 2 << " " << (p1.y + p2.y) / 2 << endl;
//     return 0;
// }
