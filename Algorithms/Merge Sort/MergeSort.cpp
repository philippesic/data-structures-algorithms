#include "MergeSort.hpp"
#include <iostream>

// Function to print the sorted array
void printSorted(int arr[], int size, const std::string& testName) {
    std::cout << "Sorted " << testName << ": ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Unsorted Test Cases
    int test1[] = {12, 11, 13, 5, 6, 7};
    int test2[] = {38, 27, 43, 3, 9, 82, 10};
    int test3[] = {5, 5, 5, 5, 5, 5};

    // Determine size of test cases
    int size1 = sizeof(test1) / sizeof(test1[0]);
    int size2 = sizeof(test2) / sizeof(test2[0]);
    int size3 = sizeof(test3) / sizeof(test3[0]);

    // Sort
    MergeSort::mergeSort(test1, size1);
    MergeSort::mergeSort(test2, size2);
    MergeSort::mergeSort(test3, size3);

    // Output sorted arrays
    printSorted(test1, size1, "Test 1");  // Expected output: 5 6 7 11 12 13
    printSorted(test2, size2, "Test 2");  // Expected output: 3 9 10 27 38 43 82
    printSorted(test3, size3, "Test 3");  // Expected output: 5 5 5 5 5 5

    return 0;
}
