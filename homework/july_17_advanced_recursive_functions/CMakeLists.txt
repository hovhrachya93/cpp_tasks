cmake_minimum_required(VERSION 3.10)

project(advancedRecursiveFunctions)

include_directories(include)

set(SOURCES
    src/gcd.cpp
    src/binaryRepresentation.cpp
    src/firstUppercase.cpp
    src/findMinValueInArray.cpp
    src/printArrayElements.cpp
    src/printArrayElementsInReverse.cpp 
    main.cpp
)

add_executable(advancedRecursiveFunctions ${SOURCES})


