#include <iostream>

int main() 
{
    int matrix[2][3], row, col;
    const int maxrows = 2, maxcols = 3;

    // Get values for the matrix
    for (row = 0; row < maxrows; row++) 
    { 
        for (col = 0; col < maxcols; col++) 
        { 
            std::cout << "Please enter a value for position [" << row << ", " << col << "] ";
            std::cin >> matrix[row][col];
        } 
    }

    // Display the values of matrix
    std::cout << "The values entered for the matrix are " << std::endl;
    for (row = 0; row < maxrows; row++) 
    { 
        for (col = 0; col < maxcols; col++) 
        { 
            std::cout << "\t" << matrix[row][col];
        } 
        std::cout << std::endl; // To start a new line for the next row
    } 

    return 0;
}
