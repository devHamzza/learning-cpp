#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
    double real, img;

public:
    Complex(
        double r = 0,
        double i = 0) : real(r), img(i) {};

    void display() const { cout << real << " + " << img << "i" << endl; }
    Complex operator+(const Complex &c1);
    friend Complex operator+(const Complex &lhs, const double &rhs);
    friend Complex operator+(const double &lhs, const Complex &rhs);
};

Complex Complex::operator+(const Complex &c1)
{
    Complex t;
    t.real = real + c1.real;
    t.img = img + c1.img;
    return t;
};

Complex operator+(const Complex &lhs, const double &rhs)
{
    Complex t;
    t.real = lhs.real + rhs;
    t.img = lhs.img;
    return t;
};

Complex operator+(const double &lhs, const Complex &rhs)
{
    Complex t;
    t.real = lhs + rhs.real;
    t.img = rhs.img;

    return t;
};

int main()
{

    Complex c1(2, 6);
    c1.display();
    Complex c2(3, 5);
    c2.display();
    Complex c3 = c1 + c2;
    cout << "-------" << endl;
    c3.display();

    // Complex c4 = c2 + 5.32;
    // Complex c4 = 5.32 + c2;
    // c4.display();

    return 0;
};