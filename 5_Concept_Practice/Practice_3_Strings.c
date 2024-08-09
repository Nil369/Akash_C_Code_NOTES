/* allow user to enter strings and then concatenate them by saying that :
 i) Hi,___username___
ii) str1 is a friend of str2
*/

#include <stdio.h>
#include <string.h>

int main() {
    char nam[100];
    char s1[] = "Hi, ";  // Add space after "Hi" to separate it from the name
    printf("Enter your name: ");
    
    gets(nam);
    // i) printf(strcat(s1,nam));
    // ii) printf("%s is a friend of Akash\n", nam);

    return 0;
}

