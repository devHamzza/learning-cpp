#include <iostream>

int main()
{
    const int numbersSize = 10;
    int numbers[numbersSize] = {0};

    int z, i = 0;

    do
    {
        std::cout << "Enter the number (-1 to exit): ";
        std::cin >> z;
        if (z != -1)
        {
            numbers[i] = z;
        };
        i++;

    } while (z != -1 && i < numbersSize);

    int sum = 0;

    for (int i = 0; i < numbersSize; i++)
    {
        sum += (numbers[i] * numbers[i]);
    };

    std::cout << "Sum of squares of the numbers entered is: " << sum << "\n";
}