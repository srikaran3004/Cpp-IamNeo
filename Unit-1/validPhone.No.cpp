
// You work for a telecommunications company that needs a program to validate and store phone numbers provided by customers. They have provided you with a phone_number class that includes methods for inputting and outputting phone numbers.


// Your task is to implement a program that accepts a 10-digit phone number from a customer and validates it using the input_and_check_num method of the phone_number class.


// A valid phone number is considered to be a 10-digit number.


// Note: This is a sample question asked in a TCS interview.
// Input format :

// The input consists of a long integer representing the phone number.
// Output format :

// If the phone number is valid, the program should display the message "Your entered number is: <phone_number>".

// If the phone number is not valid, the program should display the message "Entered Phone number is wrong".


// Refer to the sample output for the format specifications.
// Code constraints :

// The phone number must contain exactly 10 digits.

// 0 in the beginning will be ignored.
// Sample test cases :
// Input 1 :

// 1234567890

// Output 1 :

// Your entered number is: 1234567890

// Input 2 :

// 12345678

// Output 2 :

// Entered Phone number is wrong

// Input 3 :

// 645351536b

// Output 3 :

// Entered Phone number is wrong

// Input 4 :

// 7564-465-476

// Output 4 :

// Entered Phone number is wrong

// Input 5 :

// 0123456789

// Output 5 :

// Entered Phone number is wrong


#include <iostream>
using namespace std;

class PhoneNumber {
private:
    long num;
public:
    void input_and_check_num();
};

void PhoneNumber::input_and_check_num() {
    cin >> num;
    if (num < 1111111111 || num > 9999999999) {
        cout << "Phone number is wrong";
    } else {
        cout << "Your entered number is: " << num;
    }
}

int main() {
    PhoneNumber obj;
    obj.input_and_check_num();
    return 0;
}
