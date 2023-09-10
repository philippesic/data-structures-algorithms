#ifndef RADIXSORT_HPP
#define RADIXSORT_HPP

class RadixSort {
public:
    // Declaration of a static function 'radixSort' that takes an array of integers and its size.
    static void radixSort(int arr[], int size);
};

void RadixSort::radixSort(int arr[], int size) {
    // Find the maximum element to determine the number of digits.
    int maxElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    // Perform counting sort for each digit.
    for (int exp = 1; maxElement / exp > 0; exp *= 10) {
        int output[size];
        int count[10] = {0};

        // Count the frequency of each digit.
        for (int i = 0; i < size; i++) {
            count[(arr[i] / exp) % 10]++;
        }

        // Calculate the cumulative count.
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        // Build the output array.
        for (int i = size - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        // Copy the output array back to the original array.
        for (int i = 0; i < size; i++) {
            arr[i] = output[i];
        }
    }
}

#endif // RADIXSORT_HPP
