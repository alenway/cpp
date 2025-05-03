// Merge sort implementation
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Divide
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Conquer
        merge(arr, left, mid, right);
    }
}
