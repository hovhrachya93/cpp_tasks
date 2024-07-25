#include <iostream>
#include "matrixManipulationsAndRecursiveAlgorithms.h"

// Գրել ծրագիր, որը կգտնի NxM (N քանակությամբ տող և M քանակությամբ սյուն)
// չափանի մատրիցի մեծագույն արժեքը և կտպի էկրանին։
int findMaxNumberInMatrix(const int matrix[MAX_ROWS_SIZE][MAX_COLUMNS_SIZE], int rows, int cols)
{
    int maxValue = matrix[0][0];
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] > maxValue)
            {
                maxValue = matrix[i][j];
            }
        }
    }
    return maxValue;
}
