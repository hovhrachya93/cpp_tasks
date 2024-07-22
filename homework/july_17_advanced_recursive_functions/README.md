# Advanced Recursive Functions

This project demonstrates the use of recursive functions to solve various problems in C++. 

## Building the Project
1. **Generate Build System Files:**:
   ```bash
   mkdir build
   cd build
2. **Generate Build System Files:**:
   ```bash
   cmake ..
3. **Build the Project:**:
   ```bash
   make
## Project Structure
july_17_advanced_recursive_function/
├── include/
│   ├── gcd.h
│   ├── binaryRepresentation.h
│   └── firstUppercase.h
│   ├── findMinValueInArray.h
│   ├── printArrayElements.h
│   ├── printArrayInReverse.h
├── src/
│   ├── gcd.cpp
│   ├── binaryRepresentation.cpp
│   └── firstUppercase.cpp
│   ├── findMinValueInArray.cpp
│   ├── printArrayElements.cpp
│   ├── printArrayInReverse.cpp
├── main.cpp
└── CMakeLists.txt


## Tasks
1. **GCD Calculation**:
   - **Function**: `int gcd(int a, int b)`
   - **Description**: Computes the greatest common divisor of two integers using recursion.

2. **Binary Representation**:
   - **Function**: `void binaryRepresentation(int num)`
   - **Description**: Converts a number to its binary representation using recursion.

3. **First Uppercase Letter**:
   - **Function**: `char firstUppercase(const char *str)`
   - **Description**: Returns the first uppercase letter found in a string using recursion.

4. **Find Minimum Value in Array**:
   - **Function**: `int findMinValueInArray(int arr[], int size)`
   - **Description**: Finds the minimum value in an array using recursion.

5. **Print Array Elements**:
   - **Function**: `void printArrayElements(int arr[], int size);`
   - **Description**: Prints all elements of an array using recursion.

6. **Print Array Elements in Reverse**:
   - **Function**: `void printArrayElementsInReverse(int arr[], int size)`
   - **Description**: Prints the elements of an array in reverse order using recursion.