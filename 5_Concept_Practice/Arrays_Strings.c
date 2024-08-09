/*Given a sentence, , print each word of the sentence in a new line.
Constraints : 1<=n<=1000

Input Format:   The first and only line contains a sentence,s.
Output Format:  Print each word of the sentence in a new line.

Sample Input: This is C 
Sample Output:
This
is
C
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char)); 
    printf("Enter a string: ");
    scanf(" %[^\n]", s); 
    s = realloc(s, strlen(s) + 1); 

    // Tokenize the string and print each word and Complete the code
    char *token = strtok(s, " "); // Split the string by space
    while (token != '\0') {
        printf("%s\n", token); // Print each word
        token = strtok('\0', " "); // Move to the next word
    }

    free(s); // Free the allocated memory
    return 0;
}