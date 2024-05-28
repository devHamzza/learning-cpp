#include <iostream>
using namespace std;

int main()
{
    int hamza = 88;
    int *marks = &hamza;
    //& --> Address of operator
    //* --> Deference operator

    cout << *marks << endl;
    *marks = 92;
    cout << hamza << endl;

    // pointer of pointer
    int** c = &marks;

    cout << "The address stored in marks is: " << marks << endl;
    cout << "The address stored in C is: " << c << endl;
    cout << "The address stored in C is: " << *c << endl;
    cout << "The value stored in C is: " << **c << endl;

    return 0;
}