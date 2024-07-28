#include <iostream>
#include "dynamic_memory.h"

int main()
{
    // Copies elements from an old array to a new array
    //
    std::cout << "Task 2: Copy Dynamic Array" << std::endl;
    //
    //
    int copySize = 4;
    int *originalArray = new int[copySize]{
        5,
        10,
        15,
        20,
    };
    int *copiedArray = copyDynamicArray(originalArray, copySize);
    for (int i = 0; i < copySize; i++)
    {
        std::cout << copiedArray[i] << std::endl;
    }
    delete[] originalArray;
    delete[] copiedArray;

    // Deletes an element at a specified index from the array
    //
    std::cout << std::endl;
    std::cout << "Task 3: Delete Specific Element" << std::endl;
    //
    //
    int deleteSize = 3;
    int *arrayWithElements = new int[deleteSize]{5, 10, 20};
    const int indexToDelete = 1;
    int *arrayAfterDeletion = deleteElement(arrayWithElements, deleteSize, indexToDelete);
    for (int i = 0; i < deleteSize; i++)
    {
        std::cout << arrayAfterDeletion[i] << std::endl;
    }
    delete[] arrayWithElements;
    delete[] arrayAfterDeletion;

    // Finds the maximum element in an array
    //
    std::cout << std::endl;
    std::cout << "Task 5: Find Maximum Element" << std::endl;
    //
    //
    int maxElementSize = 5;
    int *arrayToFindMax = new int[maxElementSize]{10, 60, 80, 50, 40};
    int maxElement = findMaxElement(arrayToFindMax, maxElementSize);
    std::cout << "Max Element in array is: " << maxElement << std::endl;
    delete[] arrayToFindMax;

    // Reverses the elements in an array
    //
    std::cout << std::endl;
    std::cout << "Task 4: Reverse Dynamic Array" << std::endl;
    //
    //
    int reverseArraySize = 5;
    int *arrayToReverse = new int[reverseArraySize]{1, 2, 3, 4, 5};
    reverseDynamicArray(arrayToReverse, reverseArraySize);
    for (int i = 0; i < reverseArraySize; i++)
    {
        std::cout << arrayToReverse[i];
    }
    delete[] arrayToReverse;

    // Reverses a given string
    //
    std::cout << std::endl;
    std::cout << "Task 7: Dynamic Memory for Strings (Reverse String)" << std::endl;
    //
    //
    const char *inputString = "Hello";
    char *reversedString = reverseDynamicString(inputString);
    std::cout << "String: " << inputString << std::endl;
    std::cout << "Reversed String: " << reversedString << std::endl;
    delete[] reversedString;

    // Generates an array of squares of integers
    //
    std::cout << std::endl;
    std::cout << "Task 6: Dynamic Array of Squares" << std::endl;
    //
    //
    int squareArraySize;
    std::cout << "Enter the size of square array: ";
    std::cin >> squareArraySize;
    int *squareArray = getSquaresArray(squareArraySize);
    for (int i = 0; i < squareArraySize; i++)
    {
        std::cout << squareArray[i] << std::endl;
    }
    delete[] squareArray;

    // Initializes an array with consecutive integers
    //
    std::cout << std::endl;
    std::cout << "Task 1: Simple Dynamic Array Initialization" << std::endl;
    //
    //
    int initArraySize;
    std::cout << "Please type array length: ";
    std::cin >> initArraySize;
    int *initializedArray = initializeDynamicArray(initArraySize);
    for (int i = 0; i < initArraySize; i++)
    {
        std::cout << initializedArray[i] << std::endl;
    }
    delete[] initializedArray;

    return 0;
}
