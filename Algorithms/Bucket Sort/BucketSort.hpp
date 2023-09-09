#include <iostream>

class BucketSort {
public:
    // Function to perform bucket sort on an array
    static void sort(int arr[], int n);
};

void BucketSort::sort(int arr[], int n) {
    // Find the maximum and minimum values in the array
    int max_val = arr[0];
    int min_val = arr[0];
    for (int i = 1; i < n; i++) {
        max_val = std::max(max_val, arr[i]);
        min_val = std::min(min_val, arr[i]);
    }

    // Create buckets
    std::vector<int> buckets[max_val - min_val + 1];

    // Distribute elements into buckets
    for (int i = 0; i < n; i++) {
        buckets[arr[i] - min_val].push_back(arr[i]);
    }

    // Sort each bucket
    for (int i = 0; i <= max_val - min_val; i++) {
        std::sort(buckets[i].begin(), buckets[i].end());
    }

    // Concatenate buckets back into the original array
    int index = 0;
    for (int i = 0; i <= max_val - min_val; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
        }
    }
}