#include <iostream>

class myClass2; // declaration of the myClass2 for the friend functions

class myClass1 {
private:
    float value;

public:
    myClass1() {
        value = 200;
    }

    // friend functions
    friend float addBoth(myClass1, myClass2);
    friend float subBoth(myClass1, myClass2);
    friend float mulBoth(myClass1, myClass2);
    friend float divBoth(myClass1, myClass2);
};

class myClass2 {
private:
    float value;

public:
    myClass2() {
        value = 100;
    }

    // friend functions
    friend float addBoth(myClass1, myClass2);
    friend float subBoth(myClass1, myClass2);
    friend float mulBoth(myClass1, myClass2);
    friend float divBoth(myClass1, myClass2);
};

float addBoth(myClass1 object1, myClass2 object2) {
    return (object1.value + object2.value);
}

float subBoth(myClass1 object1, myClass2 object2) {
    return (object1.value - object2.value);
}

float mulBoth(myClass1 object1, myClass2 object2) {
    return (object1.value * object2.value);
}

float divBoth(myClass1 object1, myClass2 object2) {
    return (object1.value / object2.value);
}

int main() {
    myClass1 myClass1Obj; //create an object of class myClass1
    myClass2 myClass2Obj; //create an object of class myClass2
    char choice;
    std::cout << "Please enter one of the operator +, -, /, * followed by Enter" << std::endl;
    std::cin >> choice;
    if (choice == '+') {
        std::cout << "The sum is : " << addBoth(myClass1Obj, myClass2Obj) << std::endl;
    } else if (choice == '-') {
        std::cout << "The difference is : " << subBoth(myClass1Obj, myClass2Obj) << std::endl;
    } else if (choice == '*') {
        std::cout << "The multiplication is : " << mulBoth(myClass1Obj, myClass2Obj) << std::endl;
    } else if (choice == '/') {
        std::cout << "The division is : " << divBoth(myClass1Obj, myClass2Obj) << std::endl;
    } else {
        std::cout << "Enter a valid choice next time. The program is terminating" << std::endl;
    }
    return 0;
}