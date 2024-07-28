#include "dynamic_memory.h"

// Write a function that creates a dynamically allocated array of squares of the first n integers.
int *getSquaresArray(int n)
{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = (i + 1) * (i + 1);
    }
    return arr;
}
