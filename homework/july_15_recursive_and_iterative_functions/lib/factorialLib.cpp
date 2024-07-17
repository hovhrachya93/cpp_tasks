int factorial_recursive(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial_recursive(n - 1);
};

int factorial_iterative(int n)
{
    if (n < 0)
    {
        return -1;
    }
    int result = 1;
    for (int i = n; i > 0; i--)
    {
        result *= i;
    }
    return result;
}