#include <iostream>
#include <sstream>
#include <string>
using namespace std;

//Function declaration 
double raiseToPow ( double x , int power ) 
 { 
 double result ; 
 int i ; 
 result = 1.0 ; 
 for ( i = 1 ; i <= power ; i ++ ) 
 { 
 result *= x ; 
 } 
 return ( result ) ; 
 } 
 
 
 main ( ) 
{ 
 double x ; 
 int i ; 
 cout << "Please enter the number: " ; 
 cin >> x ; 
 cout << "Please enter the integer power that you want this number raised to: " ; 
 cin >> i ; 
 cout << x << " raise to power " << i << " is equal to " << raiseToPow ( x , i ) ; 
} 


