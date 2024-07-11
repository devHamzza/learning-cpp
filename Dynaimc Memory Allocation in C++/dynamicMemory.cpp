#include <iostream>
using namespace std;

void printArray(int *ptr, int num)
{
    for (int i = 0; i < num; i++)
    {
        ptr[i] = i * 2;
    }
    for (int i = 0; i < num; i++)
    {
        cout << "Value at " << i << " is " << ptr[i] << endl;
    }

    delete[] ptr;
}

int main()
{
    int *ptr;
    int num = 5;
    ptr = new int[num];
    printArray(ptr, num);

    for (int i = 0; i < num; i++)
    {
        cout << "Value at " << i << " is " << ptr[i] << endl;
    }
    return 0;
}