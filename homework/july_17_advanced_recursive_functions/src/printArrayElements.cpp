#include <iostream>
#include "printArrayElements.h"

// Գրել ռեկուրսիվ ֆունկցիա, որը ստանում է ամբողջ թվային զանգված
// և տպում է զանգվածի էլեմենտները էկրանին։
void printArrayElements(int arr[], int size)
{
    if (size <= 0)
    {
        return;
    }

    printArrayElements(arr, size - 1);
    std::cout << arr[size - 1] << " ";
}