// Problem Statement

// Saru is working as a sales analyst for a retail company. His task is to analyze the sales data and determine the frequency of each product sold during a specific period. Since there are many products piled up together as it is a selling season, she is unable to do everything manually.

// She decided to write a program that calculates the frequency of each product sold. As she is super busy, she is unable to concentrate on writing the code. Help her write the code for the same so that she can report the frequency of each product sold to her head.

// Function specifications: void findFrequency(int* arr, int size)

// Note: Use pointer arithmetic to solve the problem.
// Input format :

// The first line contains an integer representing the size of the array.

// The next line contains space-separated integers, representing the elements of the array.
// Output format :

// For each unique element in the array, output a line in the format: "element - count time(s)". The output should be in ascending order of the unique elements.

// Refer to the sample output for formatting specifications.
// Code constraints :

// 1 <= size <= 100 (Size of the array)

// -100 <= arr[i] <= 100 (Elements of the array)

// The array may contain duplicate elements.
// Sample test cases :
// Input 1 :

// 6
// 15 15 87 985 78 87

// Output 1 :

// 15 - 2 times
// 78 - 1 time
// 87 - 2 times
// 985 - 1 time

// Input 2 :

// 5
// 2 2 2 2 2

// Output 2 :

// 2 - 5 times

// Input 3 :

// 3
// -1 -1 -1

// Output 3 :

// -1 - 3 times

#include <iostream>
#include <algorithm>
using namespace std;

void findFrequency(int *arr, int size)
{
    sort(arr, arr + size);
    int count = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            cout << arr[i] << "-" << count;
            if (count == 1)
            {
                cout << "time" << endl;
            }
            else
            {
                cout << "times" << endl;
            }
            count = 1;
        }
    }
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    findFrequency(arr, size);
    return 0;
}