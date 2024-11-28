#include <iostream>
using namespace std;

class Fraction
{
public:
    Fraction();
    Fraction(long num, long den);
    void display() const;
    Fraction operator+(const Fraction &second) const;

private:
    static long gcf(long first, long second);
    long numerator, denominator;
};

Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(long num, long den)
{
    int factor;
    if (den == 0)
        den = 1;
    numerator = num;
    denominator = den;
    if (den < 0)
    {
        numerator = -numerator;
        denominator = -denominator;
    }
    factor = gcf(num, den);
    if (factor > 1)
    {
        numerator /= factor;
        denominator /= factor;
    }
}

void Fraction::display() const
{
    cout << numerator << '/' << denominator;
}

Fraction Fraction::operator+(const Fraction &second) const
{
    long factor, mult1, mult2;
    factor = gcf(denominator, second.denominator);
    mult1 = denominator / factor;
    mult2 = second.denominator / factor;
    return Fraction(numerator * mult2 + second.numerator * mult1, denominator * mult2);
}

long Fraction::gcf(long first, long second)
{
    int temp;
    first = labs(first);
    second = labs(second);
    while (second > 0)
    {
        temp = first % second;
        first = second;
        second = temp;
    }
    return first;
}

int main()
{
    Fraction a, b(23, 11), c(2, 3);
    a = b + c;
    a.display();
    cout << '\n';
    return 0;
}