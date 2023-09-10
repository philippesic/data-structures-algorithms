#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP
#include <algorithm>

class QuickSort {
public:
    // Declaration of a static function 'quickSort' that takes an array of integers, its left index, and its right index.
    static void quickSort(int arr[], int left, int right);

private:
    // Declaration of a static function 'partition' used internally for partitioning the array.
    static int partition(int arr[], int left, int right);
};

void QuickSort::quickSort(int arr[], int left, int right) {
    if (left < right) {
        // Partition the array and get the index of the pivot element.
        int pivotIndex = partition(arr, left, right);

        // Recursively apply quickSort to the subarrays on both sides of the pivot.
        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
    }
}

int QuickSort::partition(int arr[], int left, int right) {
    // Choose the rightmost element as the pivot.
    int pivot = arr[right];
    int i = left - 1;

    // Iterate through the array and move elements smaller than the pivot to the left.
    for (int j = left; j <= right - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    // Place the pivot element in its correct position.
    std::swap(arr[i + 1], arr[right]);
    return i + 1;
}

#endif // QUICKSORT_HPP
