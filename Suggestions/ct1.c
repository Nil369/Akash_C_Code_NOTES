//Q1. What are the datatypes available in C programming ?

/* Ans 1. 
|-- Fundamental Data Types
|       |-- int
|       |-- char
|       |-- float
|       |-- double
|
|-- Derived Data Types
|       |-- arrays         // Collection of elements of the same data type
|       |-- pointers       // Variables that store memory addresses
|       |-- structures     // User-defined data type to group items of possibly different types
|       |-- unions         // Special data type that allows storing different data types in the same memory location
|       |-- enums          // User-defined data type used to assign names to integral constants
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



// Q4. Write the diff . between i++ & ++i

/* Ans 4.

| Feature              | `i++` (Post-increment)                                         | `++i` (Pre-increment)                                             |
|----------------------|-------------------------------------------------------------------------------------------------------------------------------------
| Operation            | Increment `i` after using its current value in the expression. | Increment `i` before using its current value in the expression.   |
| Value                | Returns the current value of `i`, then increments it.          | Increments `i` first, then returns its updated value.             |
| Effect on `i`        | Increases the value of `i` by 1 after the expression evaluation| Increases the value of `i` by 1 before the expression evaluation. |
| Example              | ```c int i = 5; int a = i++; // a = 5, i = 6; ```              | ```c int i = 5; int a = ++i; // a = 6, i = 6; ```                 |
| Common Use Case      | When you need to use the current value of `i` and then ⬆️ it   | When you need to increment `i` before using its value.            |

*/



// Q5. What is type casting? What is implicit & explicit type casting ?

/* Ans 5. 
Type casting is the process of converting a value from one data type to another. 
In C, type casting allows you to change the data type of an expression's result to a different data type.

There are two types of type casting in C:
1. Implicit Type Casting: This type of casting is performed automatically by the compiler when necessary, without requiring any explicit instructions from the programmer. It's also known as "coercion".
2. Explicit Type Casting: This type of casting is performed explicitly by the programmer using casting operators. It's done by specifying the desired data type in parentheses before the value to be cast.
*/

#include <stdio.h>

int main() {
    // Implicit type casting
    int a = 10;
    float b = 5.5;
    float sum = a + b; // Implicitly casts 'a' to float before addition

    printf("Implicit type casting:\n");
    printf("Sum = %f\n", sum); // Output:  Sum = 15.500000

    // Explicit type casting
    float c = 15.7;
    int d = (int)c; // Explicitly casts 'c' to int

    printf("\nExplicit type casting:\n");
    printf("d = %d\n", d); // Output: 15

    return 0;
}
// In this example:
// - Implicit type casting occurs when `a` (integer) is added to `b` (float). The integer `a` is implicitly converted to a float before the addition operation.
// - Explicit type casting is demonstrated when `c` (float) is explicitly cast to an integer `d` using `(int)c`. This truncates the fractional part of `c`.



// Q6. Waht is a loop? Explain the type of loops. what are break & continue statements?
// What are the difference between entry controlled & exit controlled loop?

/* Ans6.
► Loops are control structures that allow the execution of a block of code repeatedly as long as a specified condition is met.
►  Common types of loops in C are:  for, while, and do-while.
*/
#include <stdio.h>

int main(){
    printf("\n\n*******Loop in C*********\n\n");
    int index = 0;
    while (index <= 10) // WHILE LOOP =>The while loop allows code to be executed multiple times, depending upon a boolean condition that is given as a test expression. While studying for loop, we have seen that the number of iterations is known, whereas while loops are used in situations where we do not know the exact number of iterations of the loop. The while loop execution is terminated on the basis of the Boolean (true or false) test condition.
    {
        printf("%d\n", index);
        index++;
    }

    for(int j = 0; j <= 100; j++) //FOR LOOP=> A for loop is a repetition control structure that allows us to efficiently write a loop that will execute a specific number of times.
    {
        printf("%d\n", j);
    }

    int j=0;
    do
    {
        printf("do while loop is runnig"); //DOWHILE LOOP => The main difference between the do-while loop and while loop is that, in the do-while loop, the condition is tested at the end of the loop body, whereas the other two loops are entry controlled loops.

                                            //Note: In do-while loop, the loop body will execute at least once irrespective of the test condition.
    } while (j>5);
    

    return 0;
}
/*
⫸break statement:
When a break statement is encountered inside a loop whether it is a for loop or a while loop, the loop is terminated and the program continues with the statement immediately following the loop.
It is also used use in Switch-case statement to come out of the case

⫸continue statement:
Using a continue statement in the loop will cause the control to go directly to the test-condition and then it will continue the loop process.

⫸Entry-Controlled Loop:
In an entry-controlled loop, the condition is checked before the loop body is executed. If the condition is false initially, the loop body will not be executed at all.
These loops are also known as pre-tested loops.
Examples include while loop and for loop.

⫸Exit-Controlled Loop:
In an exit-controlled loop, the condition is checked after the loop body is executed. The loop body is executed at least once before the condition is evaluated.
These loops are also known as post-tested loops.
Example: do-while loop.
*/



// Q7. Explain different components of a computer system

/* Ans 7.
1. Input Unit:
   - Accepts data and programs from users and external sources.
   - Converts input into binary code for processing.
   - Examples: Keyboard, mouse, scanner.

2. Output Unit:
   - Presents results stored in the computer memory to users.
   - Converts binary results into human-readable form.
   - Examples: Monitor, printer, speaker.

3. Storage Unit:
   - Stores data and instructions before processing and after processing.
   - Divided into Primary and Secondary memory.
   - Primary Memory (RAM, ROM): Fast, volatile memory.
   - Secondary Memory (e.g., magnetic disks, optical disks): External, permanent storage.

4. Central Processing Unit (CPU):
   - Main unit responsible for all activities within the computer.
   - Consists of Arithmetic Logic Unit (ALU) and Control Unit (CU).
   - ALU performs arithmetic and logical operations.
   - CU coordinates and controls all internal and external devices.

Arithmetic Logic Unit (ALU):
   - Executes instructions during processing operations.
   - Performs arithmetic (e.g., addition, subtraction) and logical (e.g., AND, OR) operations.
   - Contains registers for temporary storage.

In summary, a computer system comprises input and output units for data interaction, storage units for data retention, and a central processing unit (CPU)
for coordinating and executing instructions. The CPU includes an Arithmetic Logic Unit (ALU) for performing arithmetic and logical operations.
*/



// Q8. What are the difference between primary & secondary memory?

/* Ans 8.

| Feature             | Primary Memory                                      | Secondary Memory                                                          |
|---------------------|-----------------------------------------------------|---------------------------------------------------------------------------|                                   
| Volatility          | Volatile memory                                     | Non-volatile memory                                                       |
| Accessibility       | Directly accessible by the CPU                      | Slower access compared to primary memory, accessed indirectly through CPU |
| Size                | Smaller in size                                     | Larger in size                                                            |
| Speed               | Faster access speed                                 | Slower access speed                                                       |
| Persistence         | Loses data when power is turned off                 | Retains data even when power is turned off                                |
| Examples            | RAM (Random Access Memory), ROM (Read-Only Memory)  | Hard disk drives, SSDs, flash drives, optical disks (CD-ROMs, DVDs)       |

*/



// Q9. What is Syntax Error & Compilation Error ? Give suitable Examples.

/* Ans 9.
🟦 Syntax Error:
A syntax error occurs when the code violates the rules of the C programming language syntax.
These errors are detected by the compiler during the parsing phase.
Syntax errors prevent the compiler from understanding the code and generating executable files.
*/
#include <stdio.h>

int main() {
    // printf("Hello, World!\n")  // Missing semicolon.The compiler will report an error indicating a missing semicolon, and compilation will fail.
    return 0;
}
/*🟦Compilation Error:
A compilation error occurs when the compiler encounters issues that prevent it from generating executable code, apart from syntax errors.
These errors may include missing header files, undefined symbols, type mismatches, etc.
Compilation errors occur after syntax analysis during semantic analysis.*/
#include <stdio.h>

int main() {
    int x;
    printf("Value of x is: %d\n", x); // Using uninitialized variable
    return 0;
}



// Q10. What is Algorithm & Flowchart? Write few of its properties. Difference between Algorithm & flowchart

/* Ans 10. 

🟦Algorithm:
An algorithm is a step-by-step procedure or formula for solving a problem.
It provides a sequence of instructions to solve a particular problem or perform a specific task.
Algorithms are independent of any programming language and are more focused on problem-solving logic.
They can be represented in natural language, pseudocode, or programming languages.
Algorithms are used in various fields, including mathematics, computer science, and engineering.

Properties of an Algorithm:
Input: An algorithm should have zero or more inputs.
Output: An algorithm should produce one or more outputs.
Definiteness: Each step of the algorithm should be precisely defined and unambiguous.

🟦Flowchart:
A flowchart is a graphical representation of an algorithm using different symbols and shapes.
It visually depicts the sequence of steps and decision points in an algorithm.
Flowcharts are helpful in understanding the logic of an algorithm and visualizing the flow of control.
They are used to represent complex algorithms in a clear and concise manner.
Flowcharts are used in various fields, including software development, business processes, and engineering.

Properties of a Flowchart:
Symbols: Flowcharts use standard symbols and shapes to represent different operations, decisions, and actions.
Flow of Control: Flowcharts depict the flow of control from one step to another, indicating the sequence of execution.
Clarity: Flowcharts should be clear and easy to understand, even for non-technical users.


🟦Difference between Algorithm and Flowchart:

| Feature          | Algorithm                                                                      | Flowchart                                               |
|------------------|--------------------------------------------------------------------------------|---------------------------------------------------------|                     
| Definition       | Step-by-step procedure for solving a problem                                   | Graphical representation of an algorithm using symbols  |
| Nature           | Abstract and language-independent                                              | Visual and language-independent                         |
| Representation   | Can be represented in natural language, pseudocode, or programming languages   | Uses standard symbols and shapes for representation     |
| Focus            | Focuses on logic and problem-solving                                           | Focuses on visualizing the flow of control              |
| Execution        | Not directly executable; needs implementation in a programming language        | Not executable; serves as a visual aid for understanding|
| Usage            | Used for problem-solving in various fields                                     | Used for documentation, visualization, and analysis     |

In summary, an algorithm is a logical sequence of steps for solving a problem, while a flowchart is a graphical representation of an algorithm using symbols and shapes. 
While algorithms focus on logic and problem-solving, flowcharts focus on visualizing the flow of control and aiding in understanding and documentation.
*/



// Q11. Diff. b/w Variables & keywords: 

/* Ans. 11
| Feature          | Variables                                                      | Keywords                                                          |
|------------------|----------------------------------------------------------------|-------------------------------------------------------------------|
| Definition       | Represent named storage locations to hold data                 | Reserved words with special meaning in the programming language   |
| Purpose          | Used to store and manipulate data                              | Used to define the syntax and structure of the language           |
| Declaration      | Declared by the programmer using valid identifiers             | Predefined by the language and cannot be used as identifiers      |
| Types            | User-defined or built-in data types (int, float, char, etc.)   | Predefined by the language (e.g., if, else, while, int, etc.)     |
| Examples         | ```int x = 5; float pi = 3.14;```                              | ```if```, ```else```, ```while```, ```int```, ```float```, etc.   |
| Mutability       | Values can be assigned and changed during program execution    | Fixed and cannot be redefined or used as variable names           |
| Scope            | Local to the block or function where they are declared         | Language-wide scope and syntax-dependent                          |

In summary, variables are used to store and manipulate data during program execution, while keywords are reserved words with special meanings that define the syntax and structure of the programming language. 
Variables are declared by the programmer and can be assigned and changed, whereas keywords are predefined by the language and cannot be redefined or used as variable names.
*/