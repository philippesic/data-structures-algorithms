#ifndef SHELLSORT_HPP
#define SHELLSORT_HPP

class ShellSort {
public:
    // Declaration of a static function 'shellSort' that takes an array of integers and its size.
    static void shellSort(int arr[], int size);
};

void ShellSort::shellSort(int arr[], int size) {
    // Start with a large gap, then reduce the gap size until it becomes 1
    for (int gap = size / 2; gap > 0; gap /= 2) {
        // Perform an insertion sort for elements at each gap
        for (int i = gap; i < size; i += 1) {
            int temp = arr[i];
            int j;

            // Shift elements of arr[0..i-gap], arr[0..i-2*gap], arr[0..i-3*gap], ...
            // until arr[j] is in its correct position
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            // Put temp (the original arr[i]) in its correct position
            arr[j] = temp;
        }
    }
}

#endif // SHELLSORT_HPP
