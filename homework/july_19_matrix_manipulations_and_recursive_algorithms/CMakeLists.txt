cmake_minimum_required(VERSION 3.10)

project(matrix_manipulations_and_recursive_algorithms)

include_directories(include)
include_directories(constants)

set(SOURCES
    main.cpp
    src/binarySearch.cpp
    src/swapDiagonals.cpp
    src/enterSquareMatrixPrint.cpp
    src/findMaxNumberInMatrix.cpp
    src/secondaryDiagonalSum.cpp
    src/sumAboveMainDiagonal.cpp
    src/matrixMainDiagonalSum.cpp
    src/replaceEvenIndexedRowsWithZero.cpp
    src/helpers/matrixInputOutput.cpp
)

add_executable(matrix_manipulations_and_recursive_algorithms ${SOURCES})
