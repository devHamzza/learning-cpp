#include <iostream>
#include <cstring>

void reverseTheName(char name[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        char temp = name[start];
        name[start] = name[end];
        name[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char name[100];

    std::cout << "Enter Your Name: ";
    std::cin.getline(name, 100);
    int length = strlen(name);
    reverseTheName(name, length);
    std::cout << "Reversed Name: " << name;

    return 0;
}
