#include <iostream>
#include "printArrayElementsInReverse.h"

// Գրել ռեկուրսիվ ֆունկցիա, որը ստանում է ամբողջ թվային զանգված
// և տպում է զանգվածի էլեմենտները էկրանին հակառակ հերթականությամբ։
void printArrayElementsInReverse(int arr[], int size)
{
    if (size > 0)
    {
        std::cout << arr[size - 1] << " ";
        printArrayElementsInReverse(arr, size - 1);
    }
    else
    {
        std::cout << std::endl;
    }
}
