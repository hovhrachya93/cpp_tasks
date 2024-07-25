#ifndef MATRIX_INPUT_OUTPUT_HELPERS_H
#define MATRIX_INPUT_OUTPUT_HELPERS_H

#include "arrayConstants.h"

void printMatrix(int matrix[MAX_ROWS_SIZE][MAX_COLUMNS_SIZE], int rows, int cols = -1);
void inputMatrix(int matrix[MAX_ROWS_SIZE][MAX_COLUMNS_SIZE], int rows, int cols = -1);

#endif