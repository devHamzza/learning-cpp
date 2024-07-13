#include <iostream>
using namespace std;

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside Swap by Value: " << a << " " << b << endl;
}

void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside Swap by Reference: " << a << " " << b << endl;
}

int main()
{
    int a = 5;
    int b = 10;
    cout << "Before Swapping: " << a << " " << b << endl;
    swapByValue(a, b);
    cout << "After Swapping by Value: " << a << " " << b << endl;
    // swapByReference(a, b);
    // cout << "After Swapping by Reference: " << a << " " << b << endl;

    return 0;
}