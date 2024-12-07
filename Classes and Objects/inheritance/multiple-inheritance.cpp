#include <iostream>
using namespace std;

// Base class 3
class Vehicle
{
public:
    void changeGear()
    {
        cout << "Changing gear..." << endl;
    }
};

// Base class 4
class WaterVehicle : public Vehicle
{
public:
    void Float()
    {
        cout << "Floating..." << endl;
    }
};

// Base class 5
class LandVehicle : public Vehicle
{
public:
    void Move()
    {
        cout << "Moving..." << endl;
    }
};

// Derived class
class AmphibiousVehicle : public WaterVehicle, public LandVehicle
{
public:
    void display()
    {
        cout << "Amphibious vehicle in action!" << endl;
    }
    void changeGear()
    {
        WaterVehicle::changeGear();
    }
};

int main()
{
    AmphibiousVehicle av;
    av.changeGear(); // Inherited from Vehicle
    av.Float();      // Inherited from WaterVehicle
    av.Move();       // Inherited from LandVehicle
    av.display();    // Defined in AmphibiousVehicle
    return 0;
}