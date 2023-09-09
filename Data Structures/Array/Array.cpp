#include "Array.hpp"
#include <iostream>

// Define a simple function to check if two integers are equal
bool testEqual(int result, int expected) {
    return result == expected;
}

int main() {
    // Test for 1D array
    Array arr1d(5);

    for (int i = 0; i < 5; ++i) {
        arr1d.set(i, 0, i + 1);
    }

    std::cout << "1D Array:" << std::endl;
    arr1d.print();

    // Perform assertions to check if the class functions as expected
    bool test1 = testEqual(arr1d.get(2, 0), 3);
    bool test2 = testEqual(arr1d.getRows(), 5);
    bool test3 = testEqual(arr1d.getCols(), 1);

    if (test1 && test2 && test3) {
        std::cout << "1D Array Tests Passed!" << std::endl;
    } else {
        std::cout << "1D Array Tests Failed!" << std::endl;
    }

    // Test for 2D array
    Array arr2d(3, 4);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr2d.set(i, j, (i + 1) * (j + 1));
        }
    }

    std::cout << "\n2D Array:" << std::endl;
    arr2d.print();

    // Perform assertions for the 2D array
    bool test4 = testEqual(arr2d.get(1, 2), 6);
    bool test5 = testEqual(arr2d.getRows(), 3);
    bool test6 = testEqual(arr2d.getCols(), 4);

    if (test4 && test5 && test6) {
        std::cout << "2D Array Tests Passed!" << std::endl;
    } else {
        std::cout << "2D Array Tests Failed!" << std::endl;
    }

    return 0;
}
