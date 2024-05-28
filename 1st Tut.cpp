#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int sumOfEvenDigits(int num) {
    int sum = 0;
    cout << "Even Digits: ";
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            cout << digit << " ";
            sum += digit;
        }
        num /= 10;
    }
    cout << "\n";
    return sum;
}

int main() {
    string studentID = "BC230412685";

    cout << "Student ID: " << studentID << "\n";

    string numericalPart = studentID.substr(2);
    stringstream ss(numericalPart);
    int numericalValue;
    ss >> numericalValue;

    cout << "Digital Part of the Student ID: " << numericalValue << "\n";

    int sumEvenDigits = sumOfEvenDigits(numericalValue);

    cout << "Sum of Even Digits: " << sumEvenDigits << "\n";

    return 0;
}
