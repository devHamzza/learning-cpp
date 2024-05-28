#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() 
{ 
 // declare variables 
 int number, digit; 
 
 // prompt the user for input 
 cout << "Please enter 4-digit number:"; 
 cin >> number; 
 
 // get the first digit and display it on screen 
 digit = number % 10; 
 cout << "The digits are: "; 
 cout << digit << ", "; 
 
 // get the remaining three digits number 
 number = number / 10; 
 
 // get the next digit and display it 
 digit = number % 10; 
 cout << digit << ", "; 
 
 // get the remaining two digits number 
 number = number / 10; 
 
 // get the next digit and display it 
 digit = number % 10; 
 cout << digit << ", "; 
 
 // get the remaining one digit number 
 number = number / 10; 
 
 // get the next digit and display it 
 digit = number % 10; 
 cout << digit; 
} 
