#include "dynamic_memory.h"

// Write a function that creates a dynamically allocated array of squares of the first n integers.
void reverseDynamicArray(int *array, int size)
{
    int middle = size / 2;
    int end = size - 1;
    for (int i = 0; i < middle; i++)
    {
        int temp = array[i];
        array[i] = array[end - i];
        array[end - i] = temp;
    }
}
