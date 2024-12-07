#include <iostream>
using namespace std;

class Students
{
public:
    static int numberOfStudents;
    int numberOfBoys;

    // display number of students
    static int displayNumberOfStudents()
    {
        return numberOfStudents;
    }

     int displayNumberOfBoys()
    {
        return numberOfBoys;
    }


};

int Students::numberOfStudents = 67;

int main()
{
    Students csb1;
    cout << "Number of students in class 1: " << csb1.numberOfStudents << endl;
    cout << "Number of boys in class 1: " << csb1.numberOfBoys << endl;

    return 0;
}