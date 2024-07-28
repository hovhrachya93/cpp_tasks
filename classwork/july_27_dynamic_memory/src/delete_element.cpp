#include "dynamic_memory.h"

// Write a function that deletes an element at a specified position in a dynamically allocated array.
int *deleteElement(int *array, int &size, int index)
{
    size -= 1;
    int *tempArr = new int[size];
    for (int i = 0, j = 0; i <= size + 1; i++)
    {
        if (i != index)
        {
            tempArr[j++] = array[i];
        }
    }
    return tempArr;
}
