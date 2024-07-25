# Matrix Manipulations and Binary Search

This project demonstrates the use of various matrix manipulations and binary search algorithm in C++.

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
   ./matrix_manipulations_and_recursive_algorithms 
## Project Structure
matrix_manipulations/
├── include/
│   └── matrixInputOutputHelpers.h
│   └── matrixManipulationsAndRecursiveAlgorithms.h
├── src/
│   ├── binarySearch.cpp
│   ├── matrixInputOutput.cpp
│   └── matrixMainDiagonalSum.cpp
│   └── inputMatrixAndFindMax.cpp
│   └── replaceEvenIndexedRowsWithZero.cpp
│   └── secondaryDiagonalSum.cpp
│   └── swapDiagonals.cpp
│   └── helpers/
│       └── matrixInputOutput.cpp
├── main.cpp
└── CMakeLists.txt

## Helpers
### Matrix Input and Output
1. **Print Matrix**:
   - **Function**: `void printMatrix(int matrix[][MAX_SIZE], int rows, int cols=-1)`
   - **Description**: Prints the contents of a matrix. If cols is set to -1, it assumes the matrix is square (i.e., cols equals rows). The function outputs the matrix elements in a formatted manner with dimensions.

2. **Input Matrix:**:
   - **Function**: `void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols)`
   - **Description**: Prompts the user to input matrix elements for a matrix of size rows x cols. The function provides prompts for each element of the matrix, asking the user to enter values row by row.

## Functionality
1. **Binary Search**:
   - **Function**: `int binarySearch(int arr[], int left, int right, int target)`
   - **Description**: Finds the index of the target element in a sorted array using the binary search algorithm.

2. **Matrix Input and Output**:
   - **Function**: `void inputSquareMatrix(int matrix[][100], int size)`
   - **Description**: Inputs a square matrix from the user.
   - **Function**: `void printSquareMatrix(int matrix[][100], int size)`
   - **Description**: Prints a square matrix.

3. **Matrix Main Diagonal Sum**:
   - **Function**: `int matrixMainDiagonalSum(const int matrix[][3], int size)`
   - **Description**: Calculates and returns the sum of the main diagonal elements of a square matrix.

4. **Input Matrix and Find Maximum Value**:
   - **Function**: `int inputMatrixAndFindMax(int matrix[][100], int rows, int cols)`
   - **Description**: Inputs a matrix from the user and finds the maximum value in the matrix.

5. **Replace Even Indexed Rows with Zero:**:
   - **Function**: `void replaceEvenIndexedRowsWithZero(int matrix[][100], int size)`
   - **Description**: Replaces the elements of even indexed rows in a square matrix with zeros and returns the modified matrix.

6. **Secondary Diagonal Sum:**:
   - **Function**: `int secondaryDiagonalSum(const int matrix[][100], int size)`
   - **Description**: Calculates and returns the sum of the elements in the secondary diagonal of a square matrix.

7. **Swap Diagonals:**:
   - **Function**: `void swapDiagonals(int matrix[][100], int size)`
   - **Description**: Swaps the elements of the main diagonal with those of the secondary diagonal in a square matrix.

7. **Sum of Elements Above the Main Diagonal:**:
   - **Function**: `int sumAboveMainDiagonal(const int matrix[][100], int size)`
   - **Description**: Calculates and returns the sum of all elements above the main diagonal of a square matrix.