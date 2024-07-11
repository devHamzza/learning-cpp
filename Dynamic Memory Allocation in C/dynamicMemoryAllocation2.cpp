#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Employee
{
    char name[40];
    int id;
};

int main()
{
    Employee *workers;
    int num;
    cout << "How many employees do you want: ";
    cin >> num;

    workers = (Employee *) malloc(num * sizeof(Employee));
    if (workers == nullptr)
    {
        cout << "Unable to allocate space for employees\n";
        return 1;
    }

    cout << "Memory for " << num << " employees has been allocated successfully";

    free(workers);

    return 0;
}