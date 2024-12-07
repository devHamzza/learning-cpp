#include <iostream>
#include <string>
using namespace std;

class Engine
{
private:
    string type;
    int power;

public:
    Engine(string &type, int p) : type(type), power(p) {};

    void start() const
    {
        cout << "Engine of type" << type << " is starting..." << endl;
    };
};

class Car
{
private:
    string brand, model;
    Engine engine;

public:
    Car(string &brand, string &model, Engine &engine) : brand(brand), model(model), engine(engine) {};

    void start() const
    {
        cout << "Car " << brand << " " << model << " is starting..." << endl;
        engine.start();
    };
};

int main()
{
    string type = "Diesel";
    Engine engine(type, 200);
    string brand = "BMW";
    string model = "X5";
    Car car(brand, model, engine);
    car.start();
    return 0;
}