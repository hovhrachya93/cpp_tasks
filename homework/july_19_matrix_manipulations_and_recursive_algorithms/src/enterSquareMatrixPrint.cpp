#include <iostream>
#include "matrixManipulationsAndRecursiveAlgorithms.h"
#include "matrixInputOutputHelpers.h"

// Մուտքագրել քառակուսային մատրից և տպել էկրանին նրա տարրերը։
void enterSquareMatrixPrint(int userMatrix[][MAX_COLUMNS_SIZE], int size)
{
        inputMatrix(userMatrix, size);
        printMatrix(userMatrix, size);
}
