#include "firstUppercase.h"

// Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է տող
// և վերադարձնում տողում առաջին հանդիպած մեծատառը։
char firstUppercase(const char *str)
{
    if (*str == '\0')
    {
        return '\0';
    }

    if (*str >= 'A' && *str <= 'Z')
    {
        return *str;
    }

    return firstUppercase(str + 1);
}
