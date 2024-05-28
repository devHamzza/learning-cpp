#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main ( ) { 
 int number, fact=1;
 
 cout << "Type a number to get factorial of : ";
 cin >> number;
 
 while ( number > 1){
 	
 	fact = fact*number;
 	number = number-1;
 	
 };
 
 cout<< "The factorial is " << fact;
}
