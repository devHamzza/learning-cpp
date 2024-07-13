#include <iostream>
using namespace std;

class Company
{
private:
    int employees;
    float totalBudget;

public:
    Company(int employees, float totalBudget)
    {
        this->employees = employees;
        this->totalBudget = totalBudget;
    }
    void displayData()
    {
        cout << "Employees: " << employees << endl;
        cout << "Total Budget: " << totalBudget << "$" << endl;
    }
    friend class Admin;
};

class Admin
{
public:
    void addEmployee(Company &c, int num)
    {
        float personbudget = c.totalBudget / c.employees;
        c.employees += num;
        c.totalBudget += num * personbudget;
    }
    void removeEmployee(Company &c, int num)
    {
        float personbudget = c.totalBudget / c.employees;
        c.employees -= num;
        c.totalBudget -= num * personbudget;
    }
    Admin(){};
};

int main()
{
    Company GoMarkho(5, 50);
    GoMarkho.displayData();
    Admin hamza;
    hamza.addEmployee(GoMarkho, 5);
    GoMarkho.displayData();
    hamza.removeEmployee(GoMarkho, 2);
    GoMarkho.displayData();

    return 0;
}