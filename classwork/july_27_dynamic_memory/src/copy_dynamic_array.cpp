#include "dynamic_memory.h"

// Write a function that copies a dynamically allocated array into a new dynamically allocated array.
int *copyDynamicArray(int *array, int size)
{
    int *emptyArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        emptyArray[i] = array[i];
    }
    return emptyArray;
}
