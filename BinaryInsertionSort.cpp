#include "BinaryInsertionSort.h"

template <typename A>
int BinarySearch(A arr[], A item, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == item) {
            return mid + 1;
        }
        else if (arr[mid] < item) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return low;
}

template <typename A>
void BinaryInsertionSort(A arr[], int size) {
    for (int i = 1; i < size; i++) {
        A key = arr[i];
        int location = BinarySearch(arr, key, 0, i - 1);

        for (int j = i - 1; j >= location; j--) {
            arr[j + 1] = arr[j];
        }

        arr[location] = key;
    }
}

template void BinaryInsertionSort<int>(int[], int);
template void BinaryInsertionSort<double>(double[], int);