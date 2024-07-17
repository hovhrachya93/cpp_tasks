#include <iostream>

void print_down_recursive(unsigned int num)
{
    if (num == 0)
    {
        return;
    }
    std::cout << num << " ";
    print_down_recursive(num - 1);
}

void print_down_iterative(unsigned int num)
{
    for (unsigned i = num; i > 0; i--)
    {
        std::cout << i << " ";
    }
}
