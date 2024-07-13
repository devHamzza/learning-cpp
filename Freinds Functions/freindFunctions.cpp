#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int age;
    int rollNumber;
    string name;

public:
    Student(int age, int rollNumber, string name)
    {
        this->age = age;
        this->rollNumber = rollNumber;
        this->name = name;
    }

    friend int getAge(Student s);
    friend void increaseAge(Student *s, int num);
};

int getAge(Student s)
{
    return s.age;
}

void increaseAge (Student *s, int num) {
     s->age += num;
}

int main()
{

    Student s1(20, 15, "Hamza");
    increaseAge(&s1, 5);
    cout << "Age: " << getAge(s1) << endl;


    return 0;
}

