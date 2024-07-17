## Compilation Instructions
    1. **Compile `Lib files` into an Objects Files:**
    ```sh
        g++ -c lib/factorialLib.cpp -o lib/factorialLib.o    
        g++ -c lib/printDownLib.cpp -o lib/printDownLib.o
        g++ -c lib/fibonacciLib.cpp -o lib/fibonacciLib.o
        g++ -c lib/arrayLib.cpp -o lib/arrayLib.o

    2. Compile main.cpp into an Object File:
         g++ -c main.cpp -o main.o
  
    3. Link Object Files and Create Executable (tasks):
         g++ main.o lib/factorialLib.o lib/printDownLib.o lib/fibonacciLib.o lib/arrayLib.o -o tasks


Running the Executable
To run the compiled program, use the following command:

./tasks
