//Q1. Print the multiplication Table of the number entered by the user upto 10 
// i) Without Using Loops
// ii) Using Loops


#include <stdio.h>

int main(){
    // i) WITHOUT USING LOOPS:

    // Declare a variable 'a' to store the number for which the multiplication table will be generated
    int a;

    // Prompt the user to enter a number and store it in the variable 'a' using scanf
    printf("\nEnter the number you want the Multiplication Table of: ");
    scanf("%d",&a);

    // Display the header for the multiplication table
    printf("***********  Multiplication Table of %d  *************\n", a );

    // Generate and display the multiplication table from 1 to 10

    printf("%d X 1=%d\n",a,a*1); //The first %d is replaced by the value of a, which is the number entered by the user.The second %d is replaced by the result of the expression a * 1, which is just a itself.
    printf("%d X 2=%d\n",a,a*2);
    printf("%d X 3=%d\n",a,a*3);
    printf("%d X 4=%d\n",a,a*4);
    printf("%d X 5=%d\n",a,a*5);
    printf("%d X 6=%d\n",a,a*6);
    printf("%d X 7=%d\n",a,a*7);
    printf("%d X 8=%d\n",a,a*8);
    printf("%d X 9=%d\n",a,a*9);
    printf("%d X 10=%d\n",a, a*10);

    //ii) Using Loops: 

    return 0;
}
