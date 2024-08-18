/* 
Traversal -> visting / itreating through every element of an array for some specific reasons
like printing,adding,product of all the elements in an Array
*/

#include <stdio.h>
 
int sum(int arr[], int n) {
    // Traversing the array to calculate the sum of all the elements
    int Sum = 0;
    for (int i = 0; i < n; i++)
        Sum += arr[i];
    return Sum;  // Return the calculated sum
}

int main() {
    int n, totalSum = 0;  // Renaming the variable 'sum' to 'totalSum' to avoid name conflict
    printf("Enter the size of the Array: ");
    scanf("%d", &n);

    int arr[n];

    // Traversing all the memory locations allocated to the array to store the elements
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    totalSum = sum(arr, n);  // Capture the returned sum
    printf("The sum of the array elements is: %d\n", totalSum);  // Print the sum
    
    return 0;
}
