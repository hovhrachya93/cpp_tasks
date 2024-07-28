#include "dynamic_memory.h"

// Write a function that reverses a dynamically allocated C-string.
char *reverseDynamicString(const char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    int end = length - 1;
    char *reversedStr = new char[length + 1];
    for (int i = 0; i < length; i++)
    {
        reversedStr[i] = str[end - i];
    }
    reversedStr[length] = '\0';
    return reversedStr;
}
