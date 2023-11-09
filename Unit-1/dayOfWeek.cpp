
// Harish is learning about the days of the week. He wants to create a program that accepts a number representing a day of the week and prints the corresponding day's name.


// He decided to create a class called dayOfWeek to handle this task. Use member functions to initialize and print the day of the week.


// Note: This is a sample question asked in an Accenture interview.
// Input format :

// The input consists of an integer N.
// Output format :

// The output displays the corresponding day of the week (1: Sunday, 2: Monday, 3: Tuesday, 4: Wednesday, 5: Thursday, 6: Friday, 7: Saturday, 0: Weekend, above 7: Invalid).
// Code constraints :

// N < 7
// Sample test cases :
// Input 1 :

// 7

// Output 1 :

// Saturday

// Input 2 :

// 0

// Output 2 :

// Weekend

// Input 3 :

// 9

// Output 3 :

// Invalid

#include <iostream>
using namespace std;

class dayOfWeek {
private:
    int day;
public:
    void setDay(int d) {
        day = d;
    }
    void printDay() {
        switch (day) {
            case 0:
                cout << "Weekend" << endl;
                break;
            case 1:
                cout << "Sunday" << endl;
                break;
            case 2:
                cout << "Monday" << endl;
                break;
            case 3:
                cout << "Tuesday" << endl;
                break;
            case 4:
                cout << "Wednesday" << endl;
                break;
            case 5:
                cout << "Thursday" << endl;
                break;
            case 6:
                cout << "Friday" << endl;
                break;
            case 7:
                cout << "Saturday" << endl;
                break;
            default:
                cout << "Invalid" << endl;
                break;
        }
    }
};

int main() {
    int n;
    cin >> n;
    dayOfWeek d;
    d.setDay(n);
    d.printDay();
    return 0;
}
