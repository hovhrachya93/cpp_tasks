unsigned int fibonacci_recursive(unsigned int num)
{
    if (num < 2)
    {
        return num;
    }
    return fibonacci_recursive(num - 1) + fibonacci_recursive(num - 2);
};

unsigned int fibonacci_iterative(unsigned int num)
{
    if (num < 2)
    {
        return num;
    }

    unsigned int a = 0;
    unsigned int b = 1;
    unsigned int result = 0;

    for (unsigned int i = 2; i <= num; ++i)
    {
        result = a + b;
        a = b;
        b = result;
    }

    return result;
}
