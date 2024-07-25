#include <iostream>
#include "arrayConstants.h"


void printMatrix(int matrix[MAX_ROWS_SIZE][MAX_COLUMNS_SIZE], int rows, int cols = -1)
{
    if (cols == -1)
    {
        cols = rows;
    }
    std::cout << "Matrix (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void inputMatrix(int matrix[MAX_ROWS_SIZE][MAX_COLUMNS_SIZE], int rows, int cols = -1)
{
    if (cols == -1)
    {
        cols = rows;
    }
    std::cout << "Enter matrix elements (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << "Enter element for row " << i + 1 << ", column " << j + 1 << ": ";
            std::cin >> matrix[i][j];
        }
    }
}