#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Student
{
private:
    char *name; // Change the type of name to char*

public:
    Student(const char *name)
    {
        size_t len = strlen(name);
        this->name = new char[len + 1];
        strcpy(this->name, name); // Copy the name to the allocated memory
    }

    void changeName(const char *name) // Add void return type to changeName function
    {
        delete[] this->name;
        size_t len = strlen(name);
        this->name = new char[len + 1];
        strcpy(this->name, name); // Copy the new name to the allocated memory
    }

    ~Student()
    {
        delete[] name;
    }
};

int main()
{
    Student s1("Abdul Khaliq");
    s1.changeName("Abdul Khaliq Khan");
    return 0;
}