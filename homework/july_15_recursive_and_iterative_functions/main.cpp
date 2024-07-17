#include <iostream>
#include "lib/tasksLib.h"

int main()
{
    // Factorial
    std::cout << "Recursive Factorial: " << factorial_recursive(5) << std::endl;
    std::cout << "Iterative Factorial: " << factorial_iterative(-5) << std::endl;

    // Print down
    std::cout << "Recursive Print down: ";
    print_down_recursive(5);
    std::cout << std::endl;
    std::cout << "Iterative Print down: ";
    print_down_iterative(10);
    std::cout << std::endl;

    // Fibonacci
    std::cout << "Recursive Fibonacci: " << fibonacci_recursive(10) << std::endl;
    std::cout << "Iterative Fibonacci: " << fibonacci_iterative(10) << std::endl;

    int arr[] = {1, 2, 3, 2, 4, 5, 15, 1, 3, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print Array
    std::cout << "Recursive Print Array: ";
    std::cout << arr[0] << " ";
    print_array_recursive(arr + 1, size - 1);
    std::cout << std::endl;

    // Count Occurrences
    int target = 2;
    std::cout << "Target " << target << " occurs " << count_occurrences(arr, size, target) << " times." << std::endl;

    // Find Max Value
    std::cout << "Maximum value in the array: " << find_max_value(arr, size) << std::endl;

    // Count the number of Even Numbers Count
    std::cout << "Even numbers count is: " << count_even_numbers(arr, size) << std::endl;

    // Is Palindrome
    const char *str = "bob";
    const char *str2 = "bol";
    std::cout << "\"" << str << "\" is "
              << (is_palindrome(str, 0, std::strlen(str) - 1) ? "" : "not ")
              << "a palindrome." << std::endl;
    std::cout << "\"" << str2 << "\" is "
              << (is_palindrome(str2, 0, std::strlen(str2) - 1) ? "" : "not ")
              << "a palindrome." << std::endl;

    return 0;
}