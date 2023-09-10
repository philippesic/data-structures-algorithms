#ifndef MERGESORT_HPP
#define MERGESORT_HPP

class MergeSort {
public:
    // Declaration of a static function 'mergeSort' that takes an array of integers and its size.
    static void mergeSort(int arr[], int size);

private:
    // Declaration of a static function 'merge' used internally for merging subarrays.
    static void merge(int arr[], int left, int mid, int right);
};

void MergeSort::merge(int arr[], int left, int mid, int right) {
    // Calculate the sizes of the two subarrays to be merged.
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays to hold the elements of the two subarrays.
    int leftArr[n1];
    int rightArr[n2];

    // Copy elements from the original array to the temporary subarrays.
    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    // Merge the two subarrays back into the original array.
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements from the left subarray.
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy any remaining elements from the right subarray.
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void MergeSort::mergeSort(int arr[], int size) {
    // Base case: If the size of the array is less than 2, it is already sorted.
    if (size < 2) return;

    // Calculate the midpoint of the array.
    int mid = size / 2;

    // Create subarrays for the left and right halves of the original array.
    int left[mid];            // Declare an array for the left half.
    int right[size - mid];    // Declare an array for the right half.

    // Copy elements from the original array to the left and right subarrays.
    for (int i = 0; i < mid; i++)
        left[i] = arr[i];
    for (int i = mid; i < size; i++)
        right[i - mid] = arr[i];

    // Recursively apply mergeSort to both subarrays.
    mergeSort(left, mid);
    mergeSort(right, size - mid);

    // Merge the sorted subarrays back into the original array.
    merge(arr, 0, mid - 1, size - 1);
}



#endif // MERGESORT_HPP
