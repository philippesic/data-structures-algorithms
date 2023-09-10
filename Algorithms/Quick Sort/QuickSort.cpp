#include "QuickSort.hpp"
#include <iostream>

void printSorted(int arr[], int size, const std::string& testName) {
    std::cout << "Sorted " << testName << ": ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {

    // Unsorted Test Cases
    int test1[] = {112, 1, 51, 6, 3, 20};
    int test2[] = {8, 7, 43, 32, 23, 82, 11};
    int test3[] = {};

    // Determine size of test cases
    int size1 = sizeof(test1) / sizeof(test1[0]);
    int size2 = sizeof(test2) / sizeof(test2[0]);
    int size3 = sizeof(test3) / sizeof(test3[0]);

    // Sort
    QuickSort::quickSort(test1, 0, size1 - 1);
    QuickSort::quickSort(test2, 0, size2 - 1);
    QuickSort::quickSort(test3, 0, size3 - 1);

    // Output sorted arrays
    printSorted(test1, size1, "Test 1");  // Expected output: 5 6 7 11 12 13
    printSorted(test2, size2, "Test 2");  // Expected output: 3 9 10 27 38 43 82
    printSorted(test3, size3, "Test 3");  // Expected output: Empty Array

    return 0;
}
