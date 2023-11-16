
// Imagine you are tasked with developing a program to manage employee information for a small company. Your program should allow the user to input data for two employees, including their ID, name, and salary. Once the data is collected, the program should display the details of both employees. Use this pointer to accomplish this task.

// Note: This is a sample question asked in an HCL interview.
// Input format :

// The input consists of two lines representing the employees details.

// Each line contains employee ID, Name, Salary separated by space.
// Output format :

// The output displays the employees details.

// Refer to the sample outputs for the formatting specifications.
// Code constraints :

// 1 <= ID <= 1000

// Length of name <= 100

// 1 <= Salary <= 106
// Sample test cases :
// Input 1 :

// 101 sonu 85000
// 102 kumar 90000

// Output 1 :

// Employee 1 Details:
// ID: 101
// Name: sonu
// Salary: 85000
// Employee 2 Details:
// ID: 102
// Name: kumar
// Salary: 90000

#include <iostream>
using namespace std;

struct EmployeeDetails
{
    int id;
    string name;
    long salary;
};
int main()
{
    EmployeeDetails *employees = new EmployeeDetails[2];
    for (int i = 0; i < 2; i++)
    {
        cin >> employees[i].id >> employees[i].name >> employees[i].salary;
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "Employee " << i + 1 << " Details:" << endl;
        cout << "ID: " << employees[i].id << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Salary: " << employees[i].salary << endl;
    }
}