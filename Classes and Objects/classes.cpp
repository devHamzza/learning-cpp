#include <iostream>
using namespace std;

class Car
{
private:
    string brand = "Honda";
    string model = "Civic";
    int year;
    float price;
    float discount;

public:
    void setModel(int year)
    {
        this->year = year;
    }

    float getPrice()
    {
        if (this->year < 2021)
        {
            this->price = 24.5;
            this->discount = 20;
        }
        else if (this->year <= 2023)
        {
            this->price = 26.5;
            this->discount = 10;
        }
        else
        {
            this->price = 29.5;
            this->discount = 5;
        }

        return this->price;
    }

    float getdiscount()
    {
        return this->discount;
    }

    float getFinalPrice()
    {
        return price - (price * discount / 100);
    }
};

int main()
{
    Car civic;
    cout << "Welcome to Honda Showroom!" << endl;
    int year;
    cout << "Which year model of Honda Civic you want to buy?" << endl;
    cout << "Please Enter year from 2019 to 2024: ";
    cin >> year;
    civic.setModel(year);
    float price = civic.getPrice();
    float discount = civic.getdiscount();
    float finalPrice = civic.getFinalPrice();

    cout << endl
         << "Honda Civic " << year << " - Buy at $" << price << "k but as " << discount << "% " << "discount is on so you can get it in $" << finalPrice << "k." << endl;

    return 0;
}