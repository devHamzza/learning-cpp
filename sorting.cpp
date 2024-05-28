#include <iostream>

int main()
{
    const int numbersSize = 10;
    int numbers[numbersSize] = {0};

    int z, i = 0;

    // Read numbers from the user until -1 is entered or the array is full
    do
    {
        std::cout << "Enter the number (-1 to exit): ";
        std::cin >> z;
        if (z != -1)
        {
            numbers[i] = z;
            i++;
        }
    } while (z != -1 && i < numbersSize);

    // Bubble sort algorithm to sort the numbers array
    for (int pass = 0; pass < i - 1; pass++)
    {
        for (int j = 0; j < i - pass - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                // Swap numbers[j] and numbers[j + 1]
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Output sorted numbers
    std::cout << "Sorted Numbers: \n";
    for (int k = 0; k < i; k++)
    {
        std::cout << numbers[k] << "\n";
    }

    return 0;
}
