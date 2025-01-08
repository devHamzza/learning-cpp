#include <iostream>
#include <string>
using namespace std;

class X
{
    int a, b;

public:
    X(int a, int b) : a(a), b(b) {};
    friend class Y;

    void display()
    {
        cout << "a: " << a << "\n"
             << "b: " << b << endl;
    };

    // Declare friend function
    friend int sum(X x);

    friend int average(X x);
};

class Y
{

public:
    void multiply(X x)
    {
        cout << "Product: " << x.a * x.b << endl;
    }
};

// Define friend function
int sum(X x)
{
    return x.a + x.b;
}

int average(X x)
{
    return (x.a + x.b) / 2;
}

int main()
{
    X x(3, 7);
    Y y;
    x.display();
    cout << "Sum: " << sum(x) << endl;
    cout << "Average: " << average(x) << endl;
    y.multiply(x);
    return 0;
}