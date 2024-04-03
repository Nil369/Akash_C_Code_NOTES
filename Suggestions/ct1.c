//Q1. What are the datatypes available in C programming ?

/* Ans 1. 
|-- Fundamental Data Types
|       |-- int
|       |-- char
|       |-- float
|       |-- double
|
|-- Derived Data Types
|       |-- arrays              // Collection of elements of the same data type
|       |-- pointers            // Variables that store memory addresses
|       |-- structures          // User-defined data type to group items of possibly different types
|       |-- unions              // Special data type that allows storing different data types in the same memory location
|       |-- enums               // User-defined data type used to assign names to integral constants
|
|-- Void Data Type
|       |-- void
|
|-- User-defined Data Types
        |-- typedef
*/



//Q2. What are the type of operators in C? 
// Ans 2. See the image of my notes 



// Q3. What are Ternary / Conditional Operator in C ?

/* Ans 3.   
The ternary operator, also known as the conditional operator, is a compact way to express conditional statements in C programming. 
It allows you to make decisions based on a condition and assign a value to a variable depending on whether the condition evaluates to true or false. 
The general syntax of the ternary operator is ==>  condition ? expression1 : expression2

*/

#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int max;

    // Using ternary operator to find the maximum value
    max = (a > b) ? a : b;

    printf("Maximum value is: %d\n", max);

    return 0;
} // OUTPUT => MAXIMUM VALUE IS 10



// Q4.