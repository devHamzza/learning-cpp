#include <iostream>
using namespace std;

int main(){
    int userSelection;
    int numNumbers;
    int result = 0;
    char continueChoice;
    
    cout << "Hello Hamza here, Student ID: BC230412685, Welcome to the main menu!";
	    
    do {
        cout << "\nPlease select an operation: \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Exit \n Enter your choice: ";
        cin >> userSelection;
        switch (userSelection) {
            case 1:
                cout << "How many numbers do you want to add: ";
                cin >> numNumbers;
                
                for (int i = 0; i < numNumbers; ++i) {
                    int number;
                    cout << "Enter number " << i + 1 << ": ";
                    cin >> number;
                    result += number;
                }
                
                cout << "The result of addition is: " << result << endl;
                break;
                
            case 2:
                cout << "How many numbers do you want to subtract: ";
                cin >> numNumbers;
                
                for (int i = 0; i < numNumbers; ++i) {
                    int number;
                    cout << "Enter number " << i + 1 << ": ";
                    cin >> number;
                    if (i == 0) {
                        result = number;
                    } else {
                        result -= number;
                    }
                }
                
                cout << "The result of subtraction is: " << result << endl;
                break;
                
            case 3:
                cout << "How many numbers do you want to multiply: ";
                cin >> numNumbers;
                
                for (int i = 0; i < numNumbers; ++i) {
                    int number;
                    cout << "Enter number " << i + 1 << ": ";
                    cin >> number;
                    if (i == 0) {
                        result = number;
                    } else {
                        result *= number;
                    }
                }
                
                cout << "The result of multiplication is: " << result << endl;
                break;
                
            case 4:
                cout << "How many numbers do you want to divide: ";
                cin >> numNumbers;
                
                for (int i = 0; i < numNumbers; ++i) {
                    int number;
                    cout << "Enter number " << i + 1 << ": ";
                    cin >> number;
                    if (i == 0) {
                        result = number;
                    } else {
                        result /= number;
                    }
                }
                
                cout << "The result of division is: " << result << endl;
                break;
                
            case 5:
                cout << "You have exited the program." << endl;
                return 0; 
                break;
                
            default:
                cout << "Please enter a correct choice." << endl;
                break;
        }
        
        cout << "Do you want to continue (Y/N)? ";
        cin >> continueChoice;
    } while (continueChoice == 'Y' || continueChoice == 'y');

    cout << "You have exited the program." << endl;
    return 0;
}

