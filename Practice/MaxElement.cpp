
// Imagine you are developing a weather monitoring system for a meteorological research institute. As part of the system, you need to implement a feature that finds the highest recorded temperature for a specific region. Temperature data is stored in a 2D array, where each row represents a day and each column represents a different region.

// The program should prompt the user to enter the temperature data for each region and day. Afterward, it should display the highest recorded temperature.

// Function Name: int findMaxElement

// Note: This is a sample question asked in an HCL interview.
// Input format :

// The first line of the input consists of the values of rows n and columns m, separated by a space.

// The next n lines consist of m space-separated integers.
// Output format :

// The output prints the maximum element in the given 2D array.
// Code constraints :

// Define m and n = 10

// 1 <= m, n <= 10

// -105 <= Elements of the 2D array <= 105
// Sample test cases :
// Input 1 :

// 3 4
// 34 37 -26 -63
// 78 95 -61 -44
// 16 61 45 -16

// Output 1 :

// 95

#include <iostream>
#include <algorithm>
using namespace std;

const int m = 10;
const int n = 10;
int MaxElement(int arr[][m])
{
    int *maxElement = max_element(&arr[0][0], &arr[0][0] + m * n);
    return (*maxElement);
}
int main()
{
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The maximum element in the given 2D array is " << MaxElement(arr) << endl;
}