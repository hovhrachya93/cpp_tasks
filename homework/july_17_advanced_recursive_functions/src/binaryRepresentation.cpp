#include <iostream>
#include "binaryRepresentation.h"

// Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է N թիվ 
// և տպում էկրանին այդ թվի երկուական համակարգում ներկայացումը։ 
void binaryRepresentation(int num) {
    if (num == 0) {
        std::cout << "0";
        return;
    }
    if (num == 1) {
        std::cout << "1";
        return;
    }
    
    binaryRepresentation(num / 2);
    std::cout << (num % 2);
}
