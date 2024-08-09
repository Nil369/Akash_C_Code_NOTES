#include <stdio.h>

int main()
{
    int num, i = 0; // variable decleration
    
    //Taking input from user: 

    printf("Enter a number upto which you want to print the number:");
    scanf("%d", &num);

    // Executing do-while loop:
    do
    {
        printf("%d\n", i + 1);
        i = i + 1;
    } while (i < num);

    return 0;
}
