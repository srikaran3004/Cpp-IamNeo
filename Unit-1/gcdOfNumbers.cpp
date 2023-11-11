// Imagine you are developing a math learning application that helps students practice finding the greatest common divisor (GCD) of two numbers. To accomplish this, you need to create a program that asks the user to enter two integers. The program should then calculate the GCD of the two numbers using Euclid's algorithm, which involves finding the largest number that divides both input numbers without leaving a remainder.


// Your task is to write a program that prompts the user to enter two integers, calculates the GCD using an inline function, and displays the result. This program will provide students with an interactive way to practice and improve their understanding of the GCD concept.


// Note: This is a sample question asked in a Capgemini interview.
// Input format :

// The input consists of two integers, x and y separated by space.
// Output format :

// The output displays the GCD of the two integers.
// Code constraints :

// 0 <= x, y <= 107
// Sample test cases :
// Input 1 :

// 4095 7168

// Output 1 :

// 7

// Input 2 :

// 12 18

// Output 2 :

// 6

// Input 3 :

// 255 999

// Output 3 :

// 3


#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b != 0) {
        return gcd(b, a % b);
    } else {
        return a;
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    int result = gcd(x, y);
    cout << "The GCD of the two integers is: " << result << endl;
    return 0;
}
