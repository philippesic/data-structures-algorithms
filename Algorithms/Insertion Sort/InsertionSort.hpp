#include <iostream>

class InsertionSort {
public:
    // Function to perform insertion sort on an array
    static void sort(int arr[], int n);
};

void InsertionSort::sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // Current element to be compared
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Place key at its correct position in sorted array
        arr[j + 1] = key;
    }
}