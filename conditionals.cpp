#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main ( ) { 
 int upperLimit, sum, i=1;
 
 cout << "Write the upper limit: ";
 cin >> upperLimit;
 
 while (i <= upperLimit){
 	if(i % 2 == 0){
 		 	sum = sum+i;
 		 	 	
	 }
	 
	 i=i+1;
 	
 };
 cout<< "The sum of even numbers of first " << upperLimit << " integers starting from 1 is " << sum;
}
