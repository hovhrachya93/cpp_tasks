#include <iostream>

void print_array_recursive(int arr[], int size)
{
    if (size <= 0)
    {
        return;
    }

    std::cout << arr[0] << " ";
    print_array_recursive(arr + 1, size - 1);
}

int count_occurrences(int arr[], int size, int target)
{
    if (size <= 0)
    {
        return 0;
    }
    int match = 0;
    if (arr[0] == target)
    {
        match = 1;
    }

    return match + count_occurrences(arr + 1, size - 1, target);
}

int find_max_value(int arr[], int size)
{
    if (size == 1)
    {
        return arr[0];
    }

    int sub_max = find_max_value(arr + 1, size - 1);

    if (arr[0] > sub_max)
    {
        return arr[0];
    }
    else
    {
        return sub_max;
    }
}

int count_even_numbers(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }

    int count = 0;
    if ((arr[0] & 1) == 0)
    {
        count = 1;
    }

    return count + count_even_numbers(arr + 1, size - 1);
}

bool is_palindrome(const char *str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    if (std::tolower(str[start]) != std::tolower(str[end]))
    {
        return false;
    }

    return is_palindrome(str, start + 1, end - 1);
}