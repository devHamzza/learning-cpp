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
    string vuStudentID = ""; 

    cout << "Student ID: " << vuStudentID << "\n";

    string numericalPart = vuStudentID.substr(2);
    stringstream ss(numericalPart);
    int numericalValueOfID;
    ss >> numericalValueOfID;

    cout << "Digital Part of the Student ID: " << numericalValueOfID << "\n";

    int totalOfEvenDigits = sumOfEvenDigits(numericalValueOfID);

    cout << "Sum of Even Digits: " << totalOfEvenDigits << "\n";

    return 0;
}
