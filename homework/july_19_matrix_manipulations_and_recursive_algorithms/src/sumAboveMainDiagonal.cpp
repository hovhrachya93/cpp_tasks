#include "arrayConstants.h"

// Իրականացնել ծրագիր, որը քառակուսային մատրիցի գլխավոր անկյունագծից
// վերև կհաշվի բոլոր էլեմենտների գումարը։
int sumAboveMainDiagonal(const int matrix[MAX_ROWS_SIZE][MAX_COLUMNS_SIZE], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = i + 1; j < cols; ++j)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}