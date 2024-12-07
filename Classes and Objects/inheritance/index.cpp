#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}

    void printDetails()
    {
        cout << "Id: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
        salary = 38.0;
    }
    Programmer() {}
};

// Creating a Manager class derived privately from Employee Base class
class Manager : private Employee
{
public:
    Manager(int inpId)
    {
        id = inpId;
        salary = 50.0;
    }
    void displayDetails()
    {
        cout << "Manager ID: " << id << endl;
        cout << "Manager Salary: " << salary << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    // Creating a Programmer object
    Programmer prog(1);
    cout << "Programmer ID: " << prog.id << endl;
    cout << "Language Code: " << prog.languageCode << endl;
    prog.printDetails();

    // Creating a Manager object
    Manager mgr(3);
    // cout << mgr.id << endl; // This will cause a compilation error
    // cout << mgr.salary << endl; // This will cause a compilation error
    mgr.displayDetails();

    return 0;
}
