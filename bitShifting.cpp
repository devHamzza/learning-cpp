#include <iostream>
using namespace std;

main()
{
    int number, result;
    cout << "Please enter a number: ";
    cin >> number;
    result = number << 1;
    cout << "The number after left shift is " << result << endl;
    cout << "The number after left shift again is " << (result << 1) << endl;
    cout << "Now applying right shift" << endl;
    result = number >> 1;
    cout << "The number after right shift is " << result << endl;
    cout << "The number after right shift again is " << (result >> 1) << endl;
}