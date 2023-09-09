#include "BucketSort.hpp"
#include <iostream>
#include <cassert>

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Test cases for BucketSort
void testBucketSort() {
    // Test Case 1
    int arr1[] = {3, 1, 7, 9, 5, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    std::cout << "Test Case 1:" << std::endl;
    std::cout << "Unsorted: ";
    printArray(arr1, n1);

    BucketSort::sort(arr1, n1);

    std::cout << "Sorted: ";
    printArray(arr1, n1);

    assert(arr1[0] == 1);
    assert(arr1[1] == 3);
    assert(arr1[2] == 5);
    assert(arr1[3] == 6);
    assert(arr1[4] == 7);
    assert(arr1[5] == 8);
    assert(arr1[6] == 9);

    // Test Case 2
    int arr2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "Test Case 2:" << std::endl;
    std::cout << "Unsorted: ";
    printArray(arr2, n2);

    BucketSort::sort(arr2, n2);

    std::cout << "Sorted: ";
    printArray(arr2, n2);

    assert(arr2[0] == 1);
    assert(arr2[1] == 2);
    assert(arr2[2] == 3);
    assert(arr2[3] == 4);
    assert(arr2[4] == 5);
    assert(arr2[5] == 6);
    assert(arr2[6] == 7);
    assert(arr2[7] == 8);
    assert(arr2[8] == 9);

    // Test Case 3 (Empty Array)
    int arr3[] = {};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    std::cout << "Test Case 3 (Empty Array):" << std::endl;
    std::cout << "Unsorted: ";
    printArray(arr3, n3);

    BucketSort::sort(arr3, n3);

    std::cout << "Sorted: ";
    printArray(arr3, n3);

    assert(n3 == 0);
}

int main() {
    testBucketSort();
    std::cout << "All test cases passed." << std::endl;
    return 0;
}
