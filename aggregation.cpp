#include <iostream>
#include <string>
using namespace std;

// class Garage
// {
// private:
//     string name;

// public:
//     Garage(string &name) : name(name) {}

//     string getName()
//     {
//         return name;
//     }
// };

// class Car
// {
// private:
//     string name;
//     Garage *garage;

// public:
//     Car(string &name, Garage *garage) : name(name), garage(garage) {}

//     string getName()
//     {
//         return name;
//     }

//     string getGarageName()
//     {
//         return garage->getName();
//     }
// };

// int main()
// {
//     string garageName = "Royal Garage";
//     Garage garage(garageName);

//     string carName = "Mercedes";

//     Car car(carName, &garage);

//     cout << "Car name: " << car.getName() << endl;
//     cout << "Garage name: " << car.getGarageName() << endl;

//     return 0;
// }
class Chair
{
public:
    Chair() {}
    void DoSomething() {}
    bool FoldChair() { return true; }
    bool UnFoldChair()
    {
        cout << "Chair unfolded successfully" << endl;
        return true;
    }
    ~Chair() {}
};

class Room
{
private:
    float area;
    Chair *chairs[50];

public:
    Room()
    {
        for (int i = 0; i < 50; i++)
            chairs[i] = NULL;
    }

    void AddChair(Chair *chair, int chairNo)
    {
        if (chairNo >= 0 && chairNo < 50)
        {
            chairs[chairNo] = chair;
            cout << "Chair added successfully at chair no: " << chairNo << endl;
        }
    }

    Chair *GetChair(int chairNo)
    {
        if (chairNo >= 0 && chairNo < 50)
            return chairs[chairNo];
        else
            return NULL;
    }

    bool FoldChair(int chairNo)
    {
        if (chairNo >= 0 && chairNo < 50)
        {
            cout << "Chair folded successfully at chair no: " << chairNo << endl;
            return chairs[chairNo]->FoldChair();
        }
        else
            return false;
    }
};

int main()
{
    Chair ch1;

    Room r1;
    r1.AddChair(&ch1, 1);
    r1.FoldChair(1);

    ch1.UnFoldChair();
    return 0;
}