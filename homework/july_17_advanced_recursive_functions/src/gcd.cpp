#include "gcd.h"

// Իրականացնել ռեկուրսիվ ֆունկցիա, որը հաշվում է
// երկու թվերի ամենամեծ ընդհանուր բաժանարարը։
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(a, a % b);
}
