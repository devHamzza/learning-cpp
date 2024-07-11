#include <iostream>
using namespace std;

// defining the Date class 
class Date { 
public: 
    // Constructors of the class 
    Date(); 
    Date(int, int); 
    Date(int, int, int); 
    
    // Destructor of the class 
    ~Date(); 

    // Member functions 
    void display(); 
    void setDay(int); 
    void setMonth(int); 
    void setYear(int); 
    int getDay(); 
    int getMonth(); 
    int getYear(); 

private: 
    int day, month, year; 
};

// Constructor implementations
Date::Date() {
    day = 1;
    month = 1;
    year = 1900;
    cout << "The default constructor is called" << endl;
}

Date::Date(int theDay, int theMonth) {
    day = theDay;
    month = theMonth;
    year = 2002;
    cout << "The constructor with two arguments is called" << endl;
}

Date::Date(int theDay, int theMonth, int theYear) {
    day = theDay;
    month = theMonth;
    year = theYear;
    cout << "The constructor with three arguments is called" << endl;
}

// Destructor implementation
Date::~Date() {
    cout << "The object has destroyed" << endl;
}

// Member function implementations
void Date::display() {
    cout << "The date is " << getDay() << "-" << getMonth() << "-" << getYear() << endl;
}

void Date::setDay(int i) {
    day = i;
}

void Date::setMonth(int i) {
    month = i;
}

void Date::setYear(int i) {
    year = i;
}

int Date::getDay() {
    return day;
}

int Date::getMonth() {
    return month;
}

int Date::getYear() {
    return year;
}

// Main program
int main() {
    Date date1, date2(12, 12), date3(25, 12, 2002); // Creating Date objects

    // Displaying the dates
    date1.display();
    date2.display();
    date3.display();

    return 0;
}
