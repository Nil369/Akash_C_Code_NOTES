/*Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

Input Format: The input will contain a single integer .
Constraints
1<= n <= 1000
*/

#include <stdio.h>

void numPattern(int num) {
    int size = 2 * num - 1; // Size of the matrix
    
    // Loop through each row
    for (int i = 0; i < size; i++) {
        // Loop through each column
        for (int j = 0; j < size; j++) {
            // Calculate the minimum distance from current position to the border
            int minDistance = i < j ? i : j;
            minDistance = minDistance < size - i ? minDistance : size - i - 1;
            minDistance = minDistance < size - j - 1 ? minDistance : size - j - 1;
            
            // Print the number based on the minimum distance
            printf("%d ", num - minDistance);
        }
        printf("\n"); // Move to the next row
    }
}

int main() {
    int n;
    // printf("Enter a number: ");
    scanf("%d", &n);
    
    // Print the pattern
    numPattern(n);
    
    return 0;
}

