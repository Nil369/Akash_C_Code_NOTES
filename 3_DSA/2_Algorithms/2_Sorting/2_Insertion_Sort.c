/*

Insertion sort is a simple sorting algorithm that works by iteratively inserting each element 
of an unsorted list into its correct position in a sorted portion of the list. 
It is a stable sorting algorithm, meaning that elements with equal values maintain their relative
order in the sorted output.


🔵 To achieve insertion sort, we need follow these steps:

➡️ We start with second element of the array as first element in the array is assumed to be sorted.
➡️ Compare second element with the first element and check if the second element is smaller then swap them.
➡️ Move to the third element and compare it with the second element, then the first element and swap as necessary to put it in the correct position among the first three elements.
➡️ Continue this process, comparing each element with the ones before it and swapping as needed to place it in the correct position among the sorted elements.
➡️ Repeat until the entire array is sorted.

*/

#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

   void insert(int arr[], int i)
{
    int key = arr[i];
    int j = i - 1;

    // Move elements that are greater than the key to one position ahead
    // of their current position.
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}

    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        for (int i = 1; i < n; i++) {
        // Call the insert function to insert arr[i] into the sorted portion
        insert(arr, i);
    }
    }


int main(){
   // -1   0    1   2   3   4   5
   //      12,| 54, 65, 07, 23, 09 --> i=1, key=54, j=0
   //      12,| 54, 65, 07, 23, 09 --> 1st pass done (i=1)!

   //      12, 54,| 65, 07, 23, 09 --> i=2, key=65, j=1
   //      12, 54,| 65, 07, 23, 09 --> 2nd pass done (i=2)!

   //      12, 54, 65,| 07, 23, 09 --> i=3, key=7, j=2
   //      12, 54, 65,| 65, 23, 09 --> i=3, key=7, j=1
   //      12, 54, 54,| 65, 23, 09 --> i=3, key=7, j=0
   //      12, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1
   //      07, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1--> 3rd pass done (i=3)!

   // Fast forwarding and 4th and 5th pass will give:
   //      07, 12, 54, 65,| 23, 09 --> i=4, key=23, j=3
   //      07, 12, 23, 54,| 65, 09 --> After the 4th pass

   //      07, 12, 23, 54, 65,| 09 --> i=5, key=09, j=4
   //      07, 09, 12, 23, 54, 65| --> After the 5th pass 
    
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);
    return 0;
}
