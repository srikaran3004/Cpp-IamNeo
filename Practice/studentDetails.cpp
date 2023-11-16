// Dhruv is a professor who wants to develop a program to manage student information using a class called Student. The program should allow Dhruv to input details about multiple students, such as their names, the number of subjects they have, and their marks in each subject. To calculate and display the average marks for each student, Dhruv intends to use pointers to objects in his program. Help Dhruv to write a program.

// Note: This is a sample question asked in an AMCAT interview.
// Input format :

// The first line of input consists of an integer, numStudents representing the number of students.

// For each student, the following details should be entered:

// The first line of input consists of a string, name, representing the name of the student.

// The second line of input consists of an integer, numSubjects representing the number of subjects for that student.

// The last line of input consists of x double values, representing the marks obtained in each subject separated by space.
// Output format :

// The program should display the following for each student:

// The first line of output displays the name of the student.

// The next line of output displays the average marks obtained by the student, rounded off to two decimal places.

// Refer to the sample output for the formatting specifications.
// Code constraints :

// 1 <= number of students <= 100

// 1 <= numSubjects <= 10

// 1.0 <= marks <= 100.0

// The program should handle up to 100 students.
// Sample test cases :
// Input 1 :

// 3
// John Doe
// 5
// 80.5 90.0 75.5 85.0 92.0
// Jane Smith
// 4
// 88.0 92.5 76.0 85.5
// Alice Johnson
// 3
// 70.0 65.5 80.0

// Output 1 :

// Student Details:
// Name: John Doe
// Average marks: 84.60
// Name: Jane Smith
// Average marks: 85.50
// Name: Alice Johnson
// Average marks: 71.83

// Input 2 :

// 2
// Pinky
// 3
// 98.0 76.0 43.0
// Rosy
// 4
// 98.0 61.0 54.0 37.0

// Output 2 :

// Student Details:
// Name: Pinky
// Average marks: 72.33
// Name: Rosy
// Average marks: 62.50

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Student
{
public:
    string name;
    int numSubjects;
    double *marks;

    double calculateAverage()
    {
        double sum = 0;
        for (int i = 0; i < numSubjects; i++)
        {
            sum += marks[i];
        }
        return sum / numSubjects;
    }
};

int main()
{
    int numStudents;
    cin >> numStudents;

    Student *students = new Student[numStudents];

    for (int i = 0; i < numStudents; i++)
    {
        cin.ignore();
        getline(cin, students[i].name);
        cin >> students[i].numSubjects;
        students[i].marks = new double[students[i].numSubjects];
        for (int j = 0; j < students[i].numSubjects; j++)
        {
            cin >> students[i].marks[j];
        }
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < numStudents; i++)
    {
        cout << "Student Details:" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Average marks: " << students[i].calculateAverage() << endl;
    }

    delete[] students;

    return 0;
}
