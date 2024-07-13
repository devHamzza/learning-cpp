#include <iostream>

// A big structure
struct bigone
{
    int serno;
    char text[1000]; // A lot of chars
} bo = {123, "This is a BIG structure"};

// Three functions that have the structure as a parameter
void valfunc(bigone v1);        // Call by value
void ptrfunc(const bigone *p1); // Call by pointer
void reffunc(const bigone &r1); // Call by reference

// main program
int main()
{
    valfunc(bo);  // Passing the variable itself
    ptrfunc(&bo); // Passing the address of the variable
    reffunc(bo);  // Passing a reference to the variable

    return 0;
}

// Function definitions

// Pass by value
void valfunc(bigone v1)
{
    std::cout << '\n'
              << v1.serno;
    std::cout << '\n'
              << v1.text;
}

// Pass by pointer
void ptrfunc(const bigone *p1)
{
    std::cout << '\n'
              << p1->serno; // Pointer notation
    std::cout << '\n'
              << p1->text;
}

// Pass by reference
void reffunc(const bigone &r1)
{
    std::cout << '\n'
              << r1.serno; // Reference notation
    std::cout << '\n'
              << r1.text;
}