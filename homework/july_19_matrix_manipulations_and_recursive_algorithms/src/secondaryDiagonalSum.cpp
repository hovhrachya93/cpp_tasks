#include "matrixManipulationsAndRecursiveAlgorithms.h"

//Իրականացնել ֆունկցիա, որը հաշվում և վերադարձնում է
// քառակուսային մատրիցի օժանդակ անկյունագծի տարրերի գումարը։
int secondaryDiagonalSum(const int matrix[][MAX_COLUMNS_SIZE], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += matrix[i][size - 1 - i];
    }
    return sum;
}