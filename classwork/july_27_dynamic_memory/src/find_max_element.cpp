#include "dynamic_memory.h"

// Write a function that finds the maximum element in a dynamically allocated array.
int findMaxElement(int *array, int size)
{
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
