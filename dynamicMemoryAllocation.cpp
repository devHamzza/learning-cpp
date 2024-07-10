#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    char *namePtr;
    int nameLength;
    cout << "Enter the length of your name: ";
    cin >> nameLength;

    namePtr = (char *)malloc(nameLength * sizeof(char));
    cout << "Enter your name: ";
    for (int i = 0; i < nameLength; i++)
    {
        cin >> namePtr[i];
    }

    cout << "Your name is: ";
    for (int i = 0; i < nameLength; i++)
    {
        cout << namePtr[i];
    }
    cout << endl;
    free(namePtr);

    cout << "Enter the new length of your name: ";
    cin >> nameLength;
    namePtr = (char *)realloc(namePtr, nameLength * sizeof(char));

    cout << "Enter your name: ";
    for (int i = 0; i < nameLength; i++)
    {
        cin >> namePtr[i];
    }

    cout << "Your name is: ";
    for (int i = 0; i < 8; i++)
    {
        cout << namePtr[i];
    }
    cout << endl;

    return 0;
}