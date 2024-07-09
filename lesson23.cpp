#include <iostream>
#include <stdlib.h>
using namespace std;
#define DEBUG
#define square(x) ((x) * (x))

int main()
{
    int z;
    int arraySize = 100;
    int a[100];
    int i;
    // Initializing the array.
    for (i = 0; i < arraySize; i++)
    {
        a[i] = rand() % 100;
    }

#ifdef DEBUG
    for (i = 0; i < arraySize; i++)
        cout << "\t " << a[i];
#endif

    cout << " Please enter a positive integer ";
    cin >> z;
    int found = 0;
    // loop to search the number.
    for (i = 0; i < arraySize; i++)
    {
        if (z == square(a[i]))
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        cout << " We found the integer at position " << i;
    else
        cout << " The number was not found ";

    return 0;
}