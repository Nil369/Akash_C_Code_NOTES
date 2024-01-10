//Q1. Print the multiplication Table of the number entered by the user upto 10 [WITHOUT USING LOOPS. Since we haven't learnt that yet]...{This Q can be solved using loops but for now do it manually}


#include <stdio.h>

int main(){
    // Declare a variable 'a' to store the number for which the multiplication table will be generated
    int a;

    // Prompt the user to enter a number and store it in the variable 'a' using scanf
    printf("\nEnter the number you want the Multiplication Table of: ");
    scanf("%d",&a);

    // Display the header for the multiplication table
    printf("***********  Multiplication Table of %d  *************\n", a );

    // Generate and display the multiplication table from 1 to 10

    printf("%d*1=%d\n",a,a*1); //The first %d is replaced by the value of a, which is the number entered by the user.The second %d is replaced by the result of the expression a * 1, which is just a itself.
    printf("%d*2=%d\n",a,a*2);
    printf("%d*3=%d\n",a,a*3);
    printf("%d*4=%d\n",a,a*4);
    printf("%d*5=%d\n",a,a*5);
    printf("%d*6=%d\n",a,a*6);
    printf("%d*7=%d\n",a,a*7);
    printf("%d*8=%d\n",a,a*8);
    printf("%d*9=%d\n",a,a*9);
    printf("%d*10=%d\n",a, a*10);

    return 0;
}
