#include <stdio.h>

int main(){
    printf("\n************* Types of Operations in C ***************\n");

    /*
       Arithmetic Operators
        Relational Operators
        Logical Operators
        Bitwise Operators
        Assignment Operators
        Misc Operators
       */
    
    // 1. Arithmetic Operators

    int a = 60, b = 7, c = 8;
    printf("The sum of a and b is %d\n", a + b);
    printf("The difference of a and b is %d\n", a - b);
    printf("The multiplication result of a and b is %d\n", a * b);
    printf("The division result of a and b is %d\n", a / b);
    printf("The modulo result of a and b is %d\n", a % b);
    printf("The increment result of a is %d\n", ++a);
    printf("The decrement result of a is %d\n", --b);

    // Relational Operators
    int harry = 9, rohan = 45;
    printf("%d\n", harry == rohan);
    printf("%d\n", harry != rohan);
    printf("%d\n", harry > rohan);
    printf("%d\n", harry < rohan);

    // Logical Operators
    int h = 0, j = 1;
    printf("The logical operator returned %d\n", h && j); // and operator
    printf("The logical operaTor returned %d\n", h || j); // or operator
    printf("The logical operator returned %d\n", !j);     // not operator
    printf("The logical operator returned %d\n", !h);     //  operator

    // Bitwise Operators
    // A = 60 B=13
    // A = 00111100
    // B = 00001101
    // R = 00001100
    int A = 60, B = 14;
    printf("Bitwise and operator returned %d\n", A & B);
    printf("Bitwise or operator returned %d\n", A | B);
    printf("Bitwise xor operator returned %d\n", A ^ B);
    printf("Bitwise ones complement operator returned %d\n", ~B);
    printf("Bitwise left shift operator operator returned %d\n", A << B);
    printf("Bitwise right shift operator operator returned %d\n", A >> B);

    // Assignment Operators
    // =, +=, -=, *=, %=, etc
    int ha = 9;
    ha += 9;
    printf("ha is %d\n", ha);

    // Misc Operators - &, *, ?:


    return 0;
}