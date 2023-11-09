// Problem Statement


// Shamy is a computer science student studying number systems. She wants to write a program that converts a binary number to its decimal equivalent. The program should prompt the user to enter a binary number, perform the conversion, and display the decimal value.


// Note: This is sample question asked in a Capgemini interview.
// Input format :

// The input consists of a binary number.
// Output format :

// The output is in the form of a decimal.


// Refer to the sample output for formatting specifications.
// Code constraints :

// o to 11111111
// Sample test cases :
// Input 1 :

// 101

// Output 1 :

// Decimal: 5


#include<iostream>
#include<bitset>
using namespace std;

int main(){
    string num;
    cin>>num;
    bitset<512>binaryNumber(num);
    unsigned long decimalNumber=binaryNumber.to_ulong();
    cout<<"Decimal value: "<<decimalNumber<<endl;
    return 0;
}