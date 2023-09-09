#include "BubbleSort.hpp"
#include <iostream>
#include <cassert>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Test cases for BubbleSort
void testBubbleSort() {
    // Test Case 1
    int arr1[] = {5, 1, 4, 2, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    std::cout << "Test Case 1:" << std::endl;
    std::cout << "Unsorted: ";
    printArray(arr1, n1);

    BubbleSort::sort(arr1, n1);

    std::cout << "Sorted: ";
    printArray(arr1, n1);

    assert(arr1[0] == 1);
    assert(arr1[1] == 2);
    assert(arr1[2] == 4);
    assert(arr1[3] == 5);
    assert(arr1[4] == 8);

    // Test Case 2
    int arr2[] = {12, 11, 10, 5, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "Test Case 2:" << std::endl;
    std::cout << "Unsorted: ";
    printArray(arr2, n2);

    BubbleSort::sort(arr2, n2);

    std::cout << "Sorted: ";
    printArray(arr2, n2);

    assert(arr2[0] == 5);
    assert(arr2[1] == 6);
    assert(arr2[2] == 10);
    assert(arr2[3] == 11);
    assert(arr2[4] == 12);

    // Test Case 3 (Empty Array)
    int arr3[] = {};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    std::cout << "Test Case 3 (Empty Array):" << std::endl;
    std::cout << "Unsorted: ";
    printArray(arr3, n3);

    BubbleSort::sort(arr3, n3);

    std::cout << "Sorted: ";
    printArray(arr3, n3);

    assert(n3 == 0);
}

int main() {
    testBubbleSort();
    std::cout << "All test cases passed." << std::endl;
    return 0;
}
