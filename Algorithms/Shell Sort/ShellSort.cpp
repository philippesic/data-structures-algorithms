#include "ShellSort.hpp"
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
    int test1[] = {9, 4, 7, 5, 2, 1};
    int test2[] = {55, 12, 89, 32, 7, 100, 42};
    int test3[] = {30, 30, 30, 10, 10, 10, 50, 50};

    // Determine size of test cases
    int size1 = sizeof(test1) / sizeof(test1[0]);
    int size2 = sizeof(test2) / sizeof(test2[0]);
    int size3 = sizeof(test3) / sizeof(test3[0]);

    // Sort
    ShellSort::shellSort(test1, size1);
    ShellSort::shellSort(test2, size2);
    ShellSort::shellSort(test3, size3);

    // Output sorted arrays
    printSorted(test1, size1, "Test 1");  // Expected output: 1 2 4 5 7 9
    printSorted(test2, size2, "Test 2");  // Expected output: 7 12 32 42 55 89 100
    printSorted(test3, size3, "Test 3");  // Expected output: 10 10 10 30 30 30 50 50

    return 0;
}
