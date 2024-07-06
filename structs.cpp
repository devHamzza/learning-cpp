#include <iostream>
using namespace std;

struct student
{
    char name[64];
    char course[128];
    int semester;
};

struct studentProfile
{
    float gpa;
    student *s; // Use a pointer to student struct
};

int main()
{
    // Declare a student struct
    student s1 = {"Hamza", "Computer Science", 2};


    studentProfile sp1 = {3.5, &s1};

    cout << "Displaying the structure data members" << endl;
    cout << "GPA: " << sp1.gpa << endl;
    cout << "Student name: " << sp1.s->name << endl;
    cout << "Course Name: " << sp1.s->course << endl;
    cout << "Current semester number: " << sp1.s->semester << endl;

    return 0;
}
