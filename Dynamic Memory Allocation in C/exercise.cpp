#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    size_t allocationSize = 10000; // Start with 10,000 bytes
    void *ptr = nullptr;

    while (true)
    {
        ptr = malloc(allocationSize * sizeof(size_t)); // Allocate memory of size 10000 bytes

        if (ptr == nullptr)
        {
            cout << "Failed to allocate " << allocationSize << " bytes.\n";
            allocationSize /= 2; // Last successful allocation size
            break;
        }
        else
        {
            free(ptr);           // Free the allocated memory
            allocationSize *= 2; // Double the allocation size for next iteration
        }
    }

    cout << "Maximum available memory: " << allocationSize << " bytes.\n";
    return 0;
}
