/*A memory leak in C happens when dynamically allocated memory is not properly released, 
causing the program to consume more memory than necessary. It's caused by failing to 
deallocate memory using functions like free(). Here's a simple example:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    int *i2;
    while (i < 45545)
    {
        printf("Hi!! This is Akash \n");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2); // Without this we will encounter a situation of memory leak
    }
    return 0;
}

/*
1. Run this Program without using free(i2) & open your task manager -✅ Memory Leak 

2. Run this Program using free(i2) & open your task manager - ❌ Memory Leak

*/
