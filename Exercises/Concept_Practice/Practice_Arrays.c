// 1D ARRAY SAMPLE PROGRAM : 
/*
#include<stdio.h>

int main()
{
    // One dimensional array to store marks of 10 students
    int marks[10], sum = 0; // Initializing Array and a variable to store the sum of marks

    // Prompt the user to enter marks for 10 students
    printf("Enter marks of 10 students : \n\n");

    // Loop to input marks for each student
    for (int i = 0; i <= 9; i++)
    {
        // Prompt the user for the marks of the current student
        printf("Marks of %d student : ", i + 1);

        // Read the marks from the user and store them in the array
        scanf("%d", &marks[i]);

        // Add the entered marks to the sum
        sum += marks[i];
    }

    // Calculate the average marks
    int average = sum / 10;

    // Display the average marks of 10 students
    printf("\nThe average marks of 10 students are %d", average);

    // Return 0 to indicate successful completion of the program
    return 0;
}
*/

// 2D ARRAY SAMPLE PROGRAM : 

#include<stdio.h>

int main()
{
    // Two-dimensional array to store a 3x3 matrix
    int Matrice[3][3];

    // Prompt the user about the purpose of the program
    printf("This Program will print numbers from 1-9 in matrix form : \n\n");

    // Loop to input numbers from the user to fill the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Prompt the user to enter a number between 1-9
            printf("Enter number (1-9) for position (%d, %d): ", i + 1, j + 1);

            // Read the entered number and store it in the matrix
            scanf("%d", &Matrice[i][j]);
        }
    }

    // Displaying the entered matrix
    printf("\n\n\n");

    // Loop to print the matrix in a tabular form
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Print the element at position (i, j) in the matrix
            printf("%d\t", Matrice[i][j]);
        }
        // Move to the next line after printing a row
        printf("\n");
    }

    // Informing the user that the displayed matrix is the matrix form of numbers from 1-9
    printf("\n\n\n So that's the matrix form of numbers from 1-9");

    // Return 0 to indicate successful completion of the program
    return 0;
}
