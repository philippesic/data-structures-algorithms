#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array {
private:
    int* data;
    int rows;
    int cols;

public:
    // Constructors
    Array(int size) {
        data = new int[size];
        rows = size;
        cols = 1;
    }

    Array(int _rows, int _cols) {
        data = new int[_rows * _cols];
        rows = _rows;
        cols = _cols;
    }

    // Destructor
    ~Array() {
        delete[] data;
    }

    // Get the value at a particular index
    int get(int row, int col) const {
        return data[row * cols + col];
    }

    // Set the value at a particular index
    void set(int row, int col, int value) {
        data[row * cols + col] = value;
    }

    // Get the number of rows (for 2D arrays)
    int getRows() const {
        return rows;
    }

    // Get the number of columns (for 2D arrays)
    int getCols() const {
        return cols;
    }

    // Print the array
    void print() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << get(i, j) << " ";
            }
            std::cout << std::endl;
        }
    }
};

#endif // ARRAY_H
