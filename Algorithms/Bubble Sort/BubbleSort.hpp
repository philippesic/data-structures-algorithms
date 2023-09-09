class BubbleSort {
public:
    // Function to perform bubble sort on an array
    static void sort(int arr[], int n);
};

void BubbleSort::sort(int arr[], int n) {
    // Outer loop for number of passes
    for (int i = 0; i < n - 1; i++) {
        // Inner loop for each pass
        // Last i elements are already in place, so we don't need to check them again
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
