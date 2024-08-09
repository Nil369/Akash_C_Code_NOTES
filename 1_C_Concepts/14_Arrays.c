#include <stdio.h>

int main()
{
    // Initialize a 2x4 array named 'marks' with some sample values
    int marks[2][4] = {{45, 234, 2, 3},
                       {3, 2, 3, 3}};


    // for(int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array\n", i);
    //     scanf("%d", &marks[i]);
    // }


    // Loop to display the values of the 'marks' array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            /* code */

            // printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
            // This code now prints the values of the 'marks' array in a tabular format.
            printf("%d ", marks[i][j]);
           
        }
        printf("\n"); // Move to the next line after printing a row
    }

    // marks[0] = 34;
    // printf("Marks of student 1 is %d\n", marks[0]);
    // marks[0] = 4;
    // marks[1] = 24;
    // marks[2] = 34;
    // marks[3] = 44;
    // printf("Marks of student 1 is %d\n", marks[0]);
    return 0;
}

