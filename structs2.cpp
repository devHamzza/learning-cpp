#include <iostream>
using namespace std;

// Define a structure
struct Student
{
    string name;
    string course;
    int age;
    float gpa;
};

// Function to calculate the average age of students
float getAverageAge(Student *students, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += students[i].age;
    }

    return static_cast<float>(sum) / size;
}

// Function to calculate the average GPA of students
float getAverageGPA(Student *students, int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += students[i].gpa;
    }

    return sum / size;
}

// Function to find the student with the maximum GPA
Student getMaxGPAStudent(Student *students, int size)
{
    Student maxGPAStudent = students[0];

    for (int i = 1; i < size; i++)
    {
        if (students[i].gpa > maxGPAStudent.gpa)
        {
            maxGPAStudent = students[i];
        }
    }

    return maxGPAStudent;
}

int main()
{
    const int numStudents = 2;
    Student students[numStudents];

    // Get data input from the user
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Enter student name: ";
        cin >> students[i].name;
        cout << "Enter student course: ";
        cin >> students[i].course;
        cout << "Enter student age: ";
        cin >> students[i].age;
        cout << "Enter student GPA: ";
        cin >> students[i].gpa;
    }

    // Calculate average age and average GPA
    float averageAge = getAverageAge(students, numStudents);
    float averageGPA = getAverageGPA(students, numStudents);

    // Find student with max GPA
    Student maxGPAStudent = getMaxGPAStudent(students, numStudents);

    // Calculate grade of the class based on average GPA
    string grade;
    if (averageGPA >= 3.5)
    {
        grade = "A";
    }
    else if (averageGPA >= 3.0)
    {
        grade = "B";
    }
    else if (averageGPA >= 2.5)
    {
        grade = "C";
    }
    else
    {
        grade = "D";
    }

    // Output results
    cout << "Average age of students: " << averageAge << endl;
    cout << "Average GPA of students: " << averageGPA << endl;
    cout << "Grade of the class: " << grade << endl;
    cout << "Student with max GPA: " << maxGPAStudent.name << " (GPA: " << maxGPAStudent.gpa << ")" << endl;

    return 0;
}