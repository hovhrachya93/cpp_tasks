#include "dynamic_memory.h"

// Write a function that dynamically allocates an array and initializes it.
int *initializeDynamicArray(int size)
{
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
    return arr;
}
