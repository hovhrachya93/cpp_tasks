#include <iostream>
#include "gcd.h"
#include "firstUppercase.h"
#include "findMinValueInArray.h"
#include "printArrayElements.h"
#include "binaryRepresentation.h"
#include "printArrayElementsInReverse.h"

struct GCDNumbers
{
    int a;
    int b;
};

struct DecimalNumber
{
    int five;
    int seven;
    int ten;
};

struct Strings
{
    char firstString[11];
    char secondString[13];
    char thirdString[17];
};

int main()
{
    int arr[] = {3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    GCDNumbers nums = {48, 18};
    DecimalNumber decimal = {5, 7, 10};
    Strings strings = {"hello Tom", "how are You", "come here Pedro"};

    // Print Greatest Common Divisor
    std::cout << "GCD of " << nums.a << " and " << nums.b << " is " << gcd(nums.a, nums.b) << std::endl;

    // Print binary representation of a number
    std::cout << "Binary representation of " << decimal.seven << " is ";
    binaryRepresentation(decimal.seven);
    std::cout << std::endl;

    // Print the first uppercase letter in a string
    std::cout << "The first uppercase letter is: " << firstUppercase(strings.secondString) << std::endl;

    // Print the minimum value in an array
    std::cout << "The minimum value in the array is: " << findMinValueInArray(arr, size) << std::endl;

    // Print array elements
    std::cout << "Array elements: ";
    printArrayElements(arr, size);
    std::cout << std::endl;

    // Print array elements in reverse order
    std::cout << "Array elements in reverse are: ";
    printArrayElementsInReverse(arr, size);
    std::cout << std::endl;

    return 0;
}