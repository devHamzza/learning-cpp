#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main ( ) { 
 int upperLimit, sumOfEven, sumOfOdd, num=1;
 
 cout << "Write the upper limit: ";
 cin >> upperLimit;
 
 while (num <= upperLimit){
 	if(num % 2 == 0){
 		 	sumOfEven += num;	
	 } else {
	 	sumOfOdd += num;
	 };
	 
	 num+=1;
 	
 };
 cout<< "The sum of even numbers of first " << upperLimit << " integers starting from 1 is " << sumOfEven;
 cout<< "\n The sum of odd numbers of first " << upperLimit << " integers starting from 1 is " << sumOfOdd;
}
