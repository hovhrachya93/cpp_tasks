# Dynamic Memory 

This project demonstrates various dynamic memory management tasks in C++. It includes functions for dynamic array allocation, resizing, and manipulation of arrays, strings, and finding the maximum element in an array.


## Building the Project
1. **Generate Build System Files:**
   ```bash
   mkdir build
   cd build
2. **Generate Build System Files:**:
   ```bash
   cmake ..
3. **Build the Project:**:
   ```bash
   make
3. **Run the Project:**:
   ```bash
   ./dynamic_memory 
## Project Structure
dynamic_memory/
├── include/
│   └── dynamic_memory.h
├── src/
│   ├── copy_dynamic_array.cpp
│   ├── delete_element.cpp
│   ├── find_max_element.cpp
│   ├── get_squares_array.cpp
│   ├── initialize_dynamic_array.cpp
│   ├── reverse_dynamic_array.cpp
│   ├── reverse_dynamic_string.cpp
├── main.cpp
└── CMakeLists.txt

## Functionality
1. **Dynamic Array Initialization**:
   - **Function**: `int* initializeDynamicArray(int size)`
   - **Description**: Initializes a dynamic array with consecutive integers from 1 to size and returns a pointer to the array.

2. **Copy Dynamic Array**:
   - **Function**: `int* copyDynamicArray(int* oldArray, int size)`
   - **Description**: Copies elements from an old array to a new dynamic array and returns a pointer to the new array.

3. **Delete Specific Element:**:
   - **Function**: `int* deleteElement(int* arr, int size, int index)`
   - **Description**: Deletes an element at a specified index from the array and returns a pointer to the new array.

4. **Find Maximum Element:**:
   - **Function**: `int findMaxElement(int* arr, int size)`
   - **Description**: Finds the maximum element in an array and returns its value.

5. **Reverse Dynamic Array:**:
   - **Function**: `void reverseDynamicArray(int* arr, int size)`
   - **Description**: Reverses the elements in an array.

6. **Dynamic Array of Squares:**:
   - **Function**: `int* getSquaresArray(int size)`
   - **Description**: Generates an array of squares of integers from 0 to size-1 and returns a pointer to the array.

7. **Reverse Dynamic String:**:
   - **Function**: `char* reverseDynamicString(const char* str)`
   - **Description**: Reverses a given string and returns a pointer to the newly allocated reversed string.
   