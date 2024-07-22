#include "findMinValueInArray.h"

// Իրականացնել ռեկուրսիվ ֆունկցիա, որը վերադարձնում է
// տրված զանգվածի փոքրագույն էլեմենտը։
int findMinValueInArray(int arr[], int size)
{
    if (size <= 0)
    {
        return -1;
    };

    if (size == 1)
    {
        return arr[0];
    }
    int min = findMinValueInArray(arr + 1, size - 1);
    return (arr[0] < min) ? arr[0] : min;
}
