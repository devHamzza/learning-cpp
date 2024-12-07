#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    void setName(string name)
    {
        this->name = name;
    }
    inline void setRollNo(int rollNo);
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
    Student(string name = "", int rollNo = 0)
    {
        this->name = name;
        this->rollNo = rollNo;
    }
    Student(const Student &obj);
};

void Student::setRollNo(int rollNo)
{
    this->rollNo = rollNo;
}

Student::Student(const Student &obj)
{
    this->name = obj.name;
    this->rollNo = obj.rollNo;
    cout << "Copy constructor called" << endl;
}

int main()
{
    Student s1;
    // s1.display();
    s1.setName("John");
    s1.setRollNo(101);
    // s1.display();

    Student s2("Doe", 102);
    s2.display();
    // Copy constructor
    Student s3 = s2;
    s3.display();

    return 0;
}