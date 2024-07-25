#include <algorithm> 
#include "matrixManipulationsAndRecursiveAlgorithms.h"

// Իրականացնել ֆունկցիա, որը քառակուսային մատրիցի գլխավոր
// և օժանդակ անկյունագծի էլեմենտների արժեքները տեղերով կփոխի։
void swapDiagonals(int matrix[MAX_ROWS_SIZE][MAX_COLUMNS_SIZE], int rows, int cols)
{
    int minDimension = std::min(rows, cols);
    
    for (int i = 0; i < minDimension; ++i)
    {
        int secondaryDiagonalIndex = cols - 1 - i;
        
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][secondaryDiagonalIndex];
        matrix[i][secondaryDiagonalIndex] = temp;
    }
}
