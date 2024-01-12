/*
Take input from the user and ask the user to choose 0 for the triangular star pattern and 1 for the reserved triangular star pattern. When the user entered the number, your program should print the pattern accordingly.

*
**
***
**** 
*****-> Triangular star pattern


*****
****
***
**
* -> Reversed triangular star pattern

Hint: Ask the user to enter the number of rows and then use nested for loop to print rows and columns of triangular star pattern.
*/

// Sol:

#include <stdio.h>

//Function for printing Traingular Star pattern
void StarPattern(int rows){
    for (int i = 0; i < rows; i++)
    {
        
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        

        printf("\n");
    }
    
}

//Function for printing Reverse Traingular Star pattern
void ReverseStarPattern(int rows){
    for (int i = 0; i < rows; i++)
    {
        
        for (int j = 0; j <= rows-i-1; j++)
        {
            printf("*");
        }
        

        printf("\n");
    }
    
}

int main(){
    int rows,type;
    for(int i=0;;){
    printf("\nEnter:\n 0.For printing Triangular pattern\n 1.For printing Reverse Triangular pattern\n ");
    scanf("%d",&type);
    switch (type)
    {

    case 0:
        printf("Enter the number of rows = ");
        scanf("%d",&rows);
        StarPattern(rows);
        break;
    case 1:
        printf("Enter the number of rows for Reverse Triangle =  ");
        scanf("%d",&rows);
        ReverseStarPattern(rows);
        break;
    
    default:
        printf("INVALID CHOICE...Enter:\n 0.For printing triangular pattern\n 1.For printing triangular pattern\n ");
        break;
    }
    }
    
}