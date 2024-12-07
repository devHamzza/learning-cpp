#include <iostream>
using namespace std;

class MyClass
{
private:
    int value;
    const int rollNo;
    static const int count = 5;

public:
    MyClass(int s) : rollNo(s)
    {
    }

    // Const member function
    int getValue() const
    {
        cout << "Initial Count is: " << count << endl;
        return rollNo;
    }

    // Non-const member function
    void setValue(int v)
    {
        value++;
        value += v;
    }
};

int main()
{
    const MyClass obj(10);

    cout << "Initial Roll No: " << obj.getValue() << endl;

    // obj.setValue(20);
    cout << "Updated Roll No: " << obj.getValue() << endl;

    return 0;
}