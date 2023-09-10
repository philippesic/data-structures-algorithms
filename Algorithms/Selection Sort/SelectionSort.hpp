#ifndef SELECTIONSORT_HPP
#define SELECTIONSORT_HPP
#include <algorithm>

class SelectionSort {
public:
    // Declaration of a static function 'selectionSort' that takes an array of integers and its size.
    static void selectionSort(int arr[], int size);
};

void SelectionSort::selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Assume the current index is the minimum.
        int minIndex = i;

        // Find the minimum element in the unsorted portion of the array.
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the first element of the unsorted portion.
        std::swap(arr[i], arr[minIndex]);
    }
}

#endif // SELECTIONSORT_HPP
