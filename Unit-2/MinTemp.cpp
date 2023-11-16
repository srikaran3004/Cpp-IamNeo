// Problem Statement

// Akshaya is working on a weather monitoring system for a city. The system collects temperature data from various sensors placed throughout the city. Your task is to find the minimum temperature recorded among all the sensors for a given day. using void pointers.

// Note: This is a sample question asked in an HCL interview.
// Input format :

// The first line of input contains an integer, which represents the number of temperature readings recorded for the day.

// The next line of input contains the temperature readings, separated by spaces.
// Output format :

// The output displays the minimum temperature among the recorded values.
// Code constraints :

// The minimum size of the array should be at least 1.

// MAX_SIZE <= 100
// Sample test cases :
// Input 1 :

// 5
// 10.5 5.7 8.9 6.2 7.1

// Output 1 :

// 5.7

// Input 2 :

// 4
// -3.2 0.5 -2.8 -1.9

// Output 2 :

// -3.2

// Input 3 :

// 0

// Output 3 :

// Invalid size

#include <iostream>
#include <algorithm>
using namespace std;

void MinTemp(float *arr, int size)
{
    if (size >= 1)
    {
        sort(arr, arr + size);
        cout << arr[0];
    }
    else
    {
        cout << "Invalid size";
    }
}
int main()
{
    int size;
    cin >> size;
    float arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    MinTemp(arr, size);
}
