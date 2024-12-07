#include <iostream>
#include <cstring>

class Student
{
private:
    char name[50];
    int rollNo;

public:
    Student()
    {
        strcpy(name, "Hamza");
        rollNo = 0;
    }

    Student(const char *aName)
    {
        strcpy(name, aName);
        rollNo = 0;
    }

    void setRollNo(int aNo)
    {
        rollNo = aNo;
    }

    void display()
    {
        std::cout << "Name: " << name << ", Roll No: " << rollNo << std::endl;
    }
};

int main()
{
    Student *ptr;
    ptr = new Student("Ali");
    ptr->setRollNo(9);
    ptr->display();

    delete ptr;
    ptr->display();
    return 0;
}