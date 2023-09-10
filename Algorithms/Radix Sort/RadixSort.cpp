#include "RadixSort.hpp"
#include <iostream>

// Function to print a sorted array
void printSorted(int arr[], int size, const std::string& testName) {
    std::cout << "Sorted " << testName << ": ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Unsorted Test Cases
    int test1[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int test2[] = {418, 132, 322, 43, 60, 533, 110};
    int test3[] = {5, 0, 512, 51, 12, 123};

    // Determine size of test cases
    int size1 = sizeof(test1) / sizeof(test1[0]);
    int size2 = sizeof(test2) / sizeof(test2[0]);
    int size3 = sizeof(test3) / sizeof(test3[0]);

    // Sort
    RadixSort::radixSort(test1, size1);
    RadixSort::radixSort(test2, size2);
    RadixSort::radixSort(test3, size3);

    // Output sorted arrays
    printSorted(test1, size1, "Test 1");  // Expected output: 2 24 45 66 75 90 170 802
    printSorted(test2, size2, "Test 2");  // Expected output: 43 60 110 132 322 418 533
    printSorted(test3, size3, "Test 3");  // Expected output: 0 5 12 51 123 512

    return 0;
}
