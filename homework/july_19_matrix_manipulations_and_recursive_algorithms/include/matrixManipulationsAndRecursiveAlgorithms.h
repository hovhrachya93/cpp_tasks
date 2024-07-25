#ifndef MATRIX_MANIPULATIONS_AND_RECURSIVE_ALGORITHMS_H
#define MATRIX_MANIPULATIONS_AND_RECURSIVE_ALGORITHMS_H

#include "arrayConstants.h"

int binarySearch(int arr[], int left, int right, int target);
void enterSquareMatrixPrint(int matrix[][MAX_COLUMNS_SIZE], int size);
int secondaryDiagonalSum(const int matrix[][MAX_COLUMNS_SIZE], int size);
int matrixMainDiagonalSum(const int matrix[][MAX_COLUMNS_SIZE], int size);
void swapDiagonals(int matrix[MAX_ROWS_SIZE][MAX_COLUMNS_SIZE], int rows, int cols);
int sumAboveMainDiagonal(const int matrix[MAX_ROWS_SIZE][MAX_COLUMNS_SIZE], int rows, int cols);
int findMaxNumberInMatrix(const int matrix[MAX_ROWS_SIZE][MAX_COLUMNS_SIZE], int rows, int cols);
void replaceEvenIndexedRowsWithZero(int matrix[MAX_ROWS_SIZE][MAX_COLUMNS_SIZE], int rows, int cols);

#endif
