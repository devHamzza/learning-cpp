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
    // Complex operator+(const Complex &c1);

    Complex &operator+=(const Complex &c1)
    {
        real = real + c1.real;
        img = img + c1.img;
        return *this;
    };
    Complex &operator+=(const double &n)
    {
        real = real + n;
        img = img;
        return *this;
    };
};

int main()
{

    Complex c1(2, 6);
    c1.display();
    Complex c2(3, 5);
    c2.display();
    c1 += c2;
    cout << "-------" << endl;
    c1.display();
    c1 += 5.32;
    cout << "-------" << endl;
    c1.display();

    // Complex c4 = c2 + 5.32;
    // Complex c4 = 5.32 + c2;
    // c4.display();

    return 0;
};