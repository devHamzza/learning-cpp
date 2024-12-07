#include <iostream>
#include <string.h>
using namespace std;

class TheCar
{
    int maxSpeed;
    int weight;
    char *name;

public:
    TheCar(int ms, int w, const char *n)
    {
        maxSpeed = ms;
        weight = w;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    void setName(const char *n)
    {
        strcpy(name, n);
    }

    // Copy Constructor for shallow copy
    // TheCar(const TheCar &obj)
    // {
    //     maxSpeed = obj.maxSpeed + 10;
    //     weight = obj.weight - 10;
    //     name = obj.name;
    // }

    // Copy Constructor for deep copy
    TheCar(const TheCar &obj)
    {
        maxSpeed = obj.maxSpeed;
        weight = obj.weight;
        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);
    }

    // Destructor to free allocated memory
    ~TheCar()
    {
        delete[] name;
    }

    void display()
    {
        cout << "Car Name: " << name << endl;
        cout << "Max Speed: " << maxSpeed << "KM/s" << endl;
        cout << "Weight: " << weight << "KG" << endl;
    }
};

int main()
{
    TheCar car1(200, 2000, "Audi");
    TheCar car2 = car1;
    car1.setName("BMW");
    car1.display();
    car2.display();
    return 0;
}