#include "ShakerSort.h"

template <typename A>
void ShakerSort(A arr[], int size) {
    bool swapped = true;
    int start = 0;
    int end = size - 1;

    while (swapped) {
        swapped = false;

        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                A temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) break;

        swapped = false;
        --end;

        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                A temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }
        ++start;
    }
}

// Explicit template instantiation
template void ShakerSort<int>(int[], int);
template void ShakerSort<double>(double[], int);