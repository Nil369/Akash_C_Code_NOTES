/*Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format:
The first line contains a string,  which is the given number.
All the elements of num are made of english alphabets and digits.

Output Format:
Print ten space-separated integers in a single line denoting the frequency of each digit from  to .

Sample Input: a11472o5t6
Sample Output: 0 2 1 0 1 1 1 1 0 0 

Explanation:
In the given string:
occurs two times.
and  occur one time each.
The remaining digits  and  don't occur at all.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char num[1000];
    // printf("Enter a string: ");
    scanf("%s", num); 

    
    int frequency[10] = {0};

    // Iterate through each character of the string
    for (int i = 0; num[i] != '\0'; i++) {
        // Check if the current character is a digit
        if (isdigit(num[i])) {
            // Convert the character to integer and increment the frequency
            int digit = num[i] - '0';
            frequency[digit]++;
        }
    }

    // Print the frequency of each digit
    for (int i = 0; i < 10; i++) {
        printf("%d ", frequency[i]);
    }

    return 0;
}
