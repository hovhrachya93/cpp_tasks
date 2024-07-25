#include <iostream>
#include "arrayConstants.h"
#include "matrixManipulationsAndRecursiveAlgorithms.h"
#include "matrixInputOutputHelpers.h"

int main()
{
    int matrix[][MAX_COLUMNS_SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Find the index of the target element in a sorted array using the binary search algorithm
    const int sortedArraySize = 10;
    int sortedArray[sortedArraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int searchTarget = 5;
    int binarySearchResultIndex = binarySearch(sortedArray, 0, sortedArraySize - 1, searchTarget);
    std::cout << (binarySearchResultIndex != -1
                      ? "Number " + std::to_string(searchTarget) + " found at index " + std::to_string(binarySearchResultIndex) + " using binary search."
                      : "Number " + std::to_string(searchTarget) + " was not found in the array.")
              << std::endl;

    // Get the matrix size and elements from the user and then print the matrix.
    int userSquareMatrixSize;
    int userSquareMatrix[MAX_COLUMNS_SIZE][MAX_COLUMNS_SIZE];

    std::cout << "Enter the number of rows and columns for the matrix you want to create: ";
    std::cin >> userSquareMatrixSize;

    enterSquareMatrixPrint(userSquareMatrix, userSquareMatrixSize);

    // Print the sum of the main diagonal elements of the matrix
    std::cout << "Sum of the main diagonal elements: " << matrixMainDiagonalSum(matrix, SQUARE_MATRIX_SIZE) << std::endl;

    // Print the maximum value in matrix
    int userMatrixRows, userMatrixCols;
    int userMatrix[MAX_ROWS_SIZE][MAX_COLUMNS_SIZE];

    std::cout << "Enter the number of rows: ";
    std::cin >> userMatrixRows;
    std::cout << "Enter the number of columns: ";
    std::cin >> userMatrixCols;

    inputMatrix(userMatrix, userMatrixRows, userMatrixCols);

    std::cout << "Matrix for calculating the maximum value:\n";
    printMatrix(userMatrix, userMatrixRows, userMatrixCols);

    int maxValue = findMaxNumberInMatrix(userMatrix, userMatrixRows, userMatrixCols);
    std::cout << "The maximum value in the matrix is: " << maxValue << std::endl;

    // Calculate the sum of the secondary diagonal elements
    std::cout << "Matrix for calculating the sum of elements on the secondary diagonal:\n";
    printMatrix(matrix, SQUARE_MATRIX_SIZE);
    std::cout << "Sum of the secondary diagonal elements: " << secondaryDiagonalSum(matrix, SQUARE_MATRIX_SIZE) << std::endl;

    // Print the matrix after swapping the values of the main diagonal elements with the values of the secondary diagonal elements
    std::cout << "Matrix before swapping diagonals:\n";
    printMatrix(matrix, ROWS_SIZE, COLUMNS_SIZE);
    swapDiagonals(matrix, ROWS_SIZE, COLUMNS_SIZE);
    std::cout << "Matrix after swapping diagonals:\n";
    printMatrix(matrix, ROWS_SIZE, COLUMNS_SIZE);

    // Print sum of elements above the main diagonal
    std::cout << "Matrix for calculating the sum of elements above the main diagonal:\n";
    printMatrix(matrix, ROWS_SIZE, COLUMNS_SIZE);
    int sumAboveDiagonal = sumAboveMainDiagonal(matrix, ROWS_SIZE, COLUMNS_SIZE);
    std::cout << "Sum of elements above the main diagonal: " << sumAboveDiagonal << std::endl;

    // Replace even indexed rows with zero in the matrix ans Print
    std::cout << "Matrix before replacing even-indexed rows with zeros:\n";
    printMatrix(matrix, ROWS_SIZE, COLUMNS_SIZE);
    replaceEvenIndexedRowsWithZero(matrix, ROWS_SIZE, COLUMNS_SIZE);
    std::cout << "Matrix after replacing even-indexed rows with zeros:\n";
    printMatrix(matrix, ROWS_SIZE, COLUMNS_SIZE);

    return 0;
}