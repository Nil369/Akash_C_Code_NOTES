// Sorting of Arrays in C:

/*
🔵Bubble Sort Algorithm Overview:

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.
Steps for Bubble Sort:

🔵Start from the beginning of the array.
Compare the first two elements.
If the first element is greater than the second element, swap them.
Move to the next pair of elements and continue until the end of the array.
Repeat this process for each element in the array until no more swaps are needed.
*/



#include <stdio.h>
// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        // Last i elements are already in place, so no need to check them again
        for (j = 0; j < n-i-1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Original array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    bubbleSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


// OUTPUT: 
// Original array:
// 64 34 25 12 22 11 90
// Sorted array:
// 11 12 22 25 34 64 90
