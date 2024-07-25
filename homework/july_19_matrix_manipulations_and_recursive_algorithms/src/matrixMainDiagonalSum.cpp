#include "matrixManipulationsAndRecursiveAlgorithms.h"

// Իրականացնել ֆունկցիա, որը հաշվում և վերադարձնում է
// քառակուսային մատրիցի գլխավոր անկյունագծի տարրերի գումարը։
int matrixMainDiagonalSum(const int matrix[][MAX_COLUMNS_SIZE], int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += matrix[i][i];
    }
    return sum;
}
