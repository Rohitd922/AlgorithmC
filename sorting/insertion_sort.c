#include <stdio.h>

void insertionSort(int *arr, int n) {
    for (int i = 1; i < n; i++) {  // Step 1: Start from the second element
        int key = *(arr + i);      // Step 2: Store current element as key
        int j = i - 1;             // Step 3: Start comparing with previous elements

        // Step 4: Shift elements of arr[0..i-1] that are greater than key
        while (j >= 0 && *(arr + j) > key) {
            *(arr + j + 1) = *(arr + j);  // Move elements one step forward
            j--;
        }
        *(arr + j + 1) = key;  // Step 5: Insert the key at the correct position
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {9, 5, 1, 4, 3, 1000, 122, 14, 54, 67, 65, 5443, 8900, 0, 80};  // Input array
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    // C does not pass the whole array, but instead, it passes the memory address of the first element.
    insertionSort(&arr[0], n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
