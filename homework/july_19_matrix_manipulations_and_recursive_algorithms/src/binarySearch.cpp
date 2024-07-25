#include "matrixManipulationsAndRecursiveAlgorithms.h"

// Իրականացնել բինար որոնման ալգորիթմը
// ռեկուրսիվ եղանակով։ Ֆունկցիայի prototype-ն է՝ int
int binarySearch(int arr[], int left, int right, int target)
{
    if (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[mid] > target)
        {
            return binarySearch(arr, left, mid - 1, target);
        }

        return binarySearch(arr, mid + 1, right, target);
    }

    return -1;
}
