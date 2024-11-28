#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex()
    {
        cout << "\n Parameterless Constructor called ...";
    }

    /* Parameterized Constructor */
    Complex(double r, double i)
    {
        cout << "\n Parameterized Constructor called ...";
        real = r;
        imag = i;
    }

    /* Setter of real data member */
    void setReal(double r)
    {
        real = r;
    }

    /* Getter of the real data member */
    double getReal()
    {
        return real;
    }

    /* Setter of the imag data member */
    void setImaginary(double i)
    {
        imag = i;
    }

    /* Getter of the imag data member */
    double getImaginary()
    {
        return imag;
    }

    /* A Function to display parts of a Complex object */
    void display()
    {
        cout << "\n\n Displaying parts of complex number ...";
        cout << "\n Real Part : " << real << endl;
        cout << " Imaginary Part : " << imag << endl;
    }

    /* Declaration (prototype) of overloaded sum operator */
    Complex operator+(Complex &c2);
};

Complex Complex::operator+(Complex &c1)
{
    cout << "\n Operator + called ...";
    Complex temp;
    temp.real = real + c1.real;
    temp.imag = imag + c1.imag;
    return temp;
}

int main()
{
    Complex c1(1, 2); // Construct an object using the parameterized constructor
    Complex c2(2, 3); // Construct another object using the parameterized constructor
    Complex result;   // Construct an object using a parameterless constructor
    result = c1 + c2; // Call the Operator + to add two complex numbers (c1 & c2)
    // and then assign the result to 'result' object
    result.display(); // Display the result object contents

    return 0;
}