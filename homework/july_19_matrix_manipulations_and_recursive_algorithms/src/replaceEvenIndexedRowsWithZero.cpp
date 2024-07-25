#include "arrayConstants.h"

// Իրականացնել ֆունկցիա, որը ստանում է քառակուսային մատրից։
// Ֆունկցիան մատրիցի զույգ ինդեքսով տողերի էլեմենտները փոխարինում է 0-ներով և վերադարձնում։
void replaceEvenIndexedRowsWithZero(int matrix[MAX_ROWS_SIZE][MAX_COLUMNS_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i += 2)
    {
        for (int j = 0; j < cols; ++j)
        {
            matrix[i][j] = 0;
        }
    }
}
