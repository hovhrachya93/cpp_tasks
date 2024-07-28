#ifndef DYNAMIC_MEMORY_H
#define DYNAMIC_MEMORY_H

int *getSquaresArray(int n);
int *initializeDynamicArray(int size);
int findMaxElement(int *array, int size);
int *copyDynamicArray(int *array, int size);
char *reverseDynamicString(const char *str);
void reverseDynamicArray(int *array, int size);
int *deleteElement(int *array, int &size, int index);

#endif
