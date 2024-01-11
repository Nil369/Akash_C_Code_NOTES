<img src="https://github.com/Nil369/My-C_Code_NOTES/assets/148447931/1a952c71-bd90-4a92-875a-f7965838e35f" alt="image" width="1100" height="300">


# C_Notes

These are my C crisp notes revising them will be very benefitial. But for clear understanding of each & every concept refer my souce code based notes

<h1>Refer my Source Code for better understanding of these concepts </h1>

<h1>1. Introduction:</h1>
<img align="right" src="https://intellipaat.com/wp-content/uploads/2015/12/c-features.png" alt="C icon" width="400px">
<h3>
1.  Developed by Dennis Ritchie at Bell Labs in the early 1970s.
  
2.  Known for its efficiency, simplicity, and low-level system access.
   
3.  Follows a procedural programming paradigm.
   
4.  Focuses on functions and structured programming.
   
5.  Highly portable language, allowing programs written in C to run on different platforms with minimal modifications.
   
6.  C uses a syntax that includes variables, data types, operators, and control structures (loops and conditionals).

7.  To run C/C++ in your system you need 2 things:
          <h4> ► MinGW compiler => Just search mingw compiler downloader in google => Install it & then set the environment variable by giving the compiler path </h4>
          <h4> ► Code Editor/ IDE => Download VS Code </h4><p>I know many people will suggest you to install DevC++/ Turbo C ... But all of these are discontinuos software</p>
          <h4> ► Make a file in that editor =>with ".c " extension in the file name.</h4>
          <h4> ► Install Code Runner Plugin if u r using VS code => Will run the code easily in the IDE or you have to write some individual code in the terminal.</h4>
</h3>

<h1>2. How is it different from C++?</h1>
<h3>

►  The syntax of C++ is almost identical to that of C, as C++ was developed as an extension of C.

►  In contrast to C, C++ supports classes and objects, while C does not.

►  C gives most of the control to the hand of users. Things like memory allocation and manipulation are totally in the hands of the programmer. Being a flexible language, it provides more access to the programmer because of which it is more efficient.

►  C is POP(procedure oriented programming) whereas c++ is OOP(Object oriented programming)
</h3>

<h1>3. Basic Structure & Syntax</h1>
<p>Programming in C involves following a basic structure throughout. Here’s what it can be broken down to.</p>

<h3>

•  Pre-processor commands

•  Functions

•  Variables

•  Statements

•  Expressions

•  Comments

</h3>

<h2>Pre-processor commands</h2>
<p>Pre-processor commands are commands which tell our program that before its execution, it must include the file name mentioned in it because we are using some of the commands or codes from this file.
They add functionalities to a program.
One example could be,
</p>

```
#include <stdio.h>

# include<conio.h>

#include <math.h>
```
<p>We include math.h to be able to use some special functions like power and absolute. #include<filename.h> is how we include them into our programs.
Detailed explanations of everything else in the structure will follow in the later part of the tutorial.</p>

<h2>Header files</h2>
<p>
·       Collection of predefined/built in functions developed

·       It is always declares on heading side of program hence it is called header file

·       It is identified with the extension(.h)

·       It gets installed while installing IDE(integrated development environment)

·       It stores functions as per their categories hence they are called library</p>

<img align="right" src="https://i.redd.it/nmuax05zxoab1.gif" alt="C logo" width="450px">

<h2>Syntax</h2>
<p>An example below shows how a basic C program is written.</p>

<div class="code-toolbar"><pre class="language-c" tabindex="0"><code class="language-c">Declaration of header file   		<span class="token comment">//name of the header files of which functions are been used</span>
<span class="token function">main</span><span class="token punctuation">(</span><span class="token punctuation">)</span>	                           <span class="token comment">/*it is called main function which stores the execution of program*/</span>
<span class="token punctuation">{</span>	                                              <span class="token comment">//start of the program</span>
              <span class="token comment">//program statements</span>
<span class="token punctuation">}</span>                                                <span class="token comment">//end of the program</span></code></pre><div class="toolbar"><div class="toolbar-item"><button class="copy-to-clipboard-button" type="button" data-copy-state="copy"></button></div></div></div>

<ul style="list-style-type: square;">
<li>Here, the first line is a pre-processor command including a header file stdio.h.</li>
<li>C ignores empty lines and spaces.</li>
<li>There is a main() function then, which should always be there.</li>
<li> <b>"//(Single Line)"     ||     "/* */ (Multiline Comment)" </b> </li>
<li>This a comment in C language, meaning it will be ignored by the compiler while compiling but it will remain in your source code for other developers to see what does the code do.</li>
<li>In the souce code Notes/ Imp points are written like this refer that.</li>
</ul>

<p>A C program is <strong>made up of different tokens combined</strong>. These tokens include:</p>
<ul style="list-style-type: square;">
<li>Keywords</li>
<li>Identifiers</li>
<li>Constants</li>
<li>String Literal</li>
<li>Symbols</li>
</ul>

<h2>Keywords</h2>
<p>Keywords are reserved words that can not be used elsewhere in the program for naming a variable or a function. They have a specific function or task and they are solely used for that. Their functionalities are pre-defined.
One such example of a keyword could be return which is used to build return statements for functions. Other examples are auto, if, default, etc. Whenever we write any keyword in IDE  their colour slightly changes and it looks different from other variables or functions for example in turbo c all keywords are turns into white colour .</p>

<h2>Identifiers</h2>
<p>Identifiers are names given to variables or functions to differentiate them from one another. Their definitions are solely based on our choice but there are a few rules that we have to follow while naming identifiers. One such rule says that the name can not contain special symbols such as @, -, *, <, etc.

C is a case-sensitive language so an identifier containing a capital letter and another one containing a small letter in the same place will be different. For example, the three words: Code, code, and cOde can be used as three different identifiers.

Rules for naming identifier-
1. One should not name any identifier starting with numeric value or symbol. It should start only with underscore or alphabet 
2. They should not contain space
3. Giving logical names is recommended as per our program</p>

<h2>Constants & Variables in C</h2>
<p>Variables are containers for storing data values.
<b>In C, there are different types of variables. All these are mentioned in source code download refer that</b> </p>
  
<p>Constants are very similar to a variable and they can also be of any data type. The only difference between a constant and a variable is that a constant’s value never changes. We will see constants in more detail in the upcoming tutorial.</p>

<h2>String Literal</h2>
<p>String literals or string constants are a sequence of characters enclosed in double quotation marks. For example,  “This is a string literal!” is a string literal. C method printf() utilizes the same to format the output.</p>

<br>
<h1>4. Quick Reference on fundamental concepts of C language: </h1>

<img align="right" src="https://cdn.icon-icons.com/icons2/2415/PNG/512/c_original_logo_icon_146611.png" alt="C icon" width="400px">

<h2>Variables:</h2>

►  Variables are storage locations in a program that hold values.

►  They have a data type (e.g., int, float, char) that determines the type of data they can hold.

►  Variables can be assigned values and used to perform computations.</h3>

<h2> Data Types: </h2>


►  Data types define the type of data that a variable can hold.

►  Examples include int (for integers), float (for floating-point numbers), char (for characters), and more.

►  User-defined data types like structures and unions can also be created.

<h2>Loops:</h2>

►  Loops are control structures that allow the execution of a block of code repeatedly as long as a specified condition is met.

►  Common types of loops in C are for, while, and do-while.

<h2>Conditional Statements:</h2>

►  Conditional statements allow the execution of different code blocks based on certain conditions.

►  The primary conditional statement in C is <b>if-else</b>, which allows for branching based on true/false conditions.

<h2>Arrays:</h2>

►  Arrays are collections of elements of the same data type under one name.

►  Elements in an array are accessed using an index, which starts from 0.

►  Arrays are useful for storing and manipulating sets of data.

<h2>Strings:</h2>

►  In C, a string is an array of characters terminated by a null character \0.

►  String manipulation functions like strlen(), strcpy(), and strcat() are used for handling strings.

<h2> Functions:</h2>

►  Functions are blocks of code that perform a specific task.

►  They provide modularity, allowing code to be organized into reusable pieces.

►  Functions can have parameters (input) and return a value (output).

<h2>Pointers:</h2>

►  Pointers are variables that store memory addresses.

►  They allow direct access to memory locations and facilitate dynamic memory allocation.

<h2>Structures and Unions:</h2>

►  Structures allow the grouping of different types of variables under a single name.

►  Unions, like structures, can hold multiple variables, but they share the same memory location.

<h2>File Handling:</h2>

►  C provides functions to interact with files for reading from and writing to external storage.

►  Operations like opening, closing, reading, and writing files are supported.

<h2>Preprocessor Directives:</h2>

►  These are special commands preceded by a # symbol.
►  They are used to include files, perform conditional compilation, and define constants.

<h2>Dynamic Memory Allocation:</h2>

►  C provides functions like malloc(), calloc(), and realloc() to allocate memory dynamically during program execution.

►  This is useful for managing memory for data structures like linked lists and trees.

<h2>Bitwise Operators:</h2>

►  C supports bitwise operations (AND, OR, XOR, etc.) that work at the bit level.

►  These operations are useful in tasks involving low-level hardware manipulation.

<p><b>These are some of the foundational concepts in the C programming language. Understanding these concepts is crucial for writing effective and efficient C programs.</b></p>

<hr><br>

# C Programming Language Quick Reference

Welcome to the C Programming Language Quick Reference! This README.md file serves as a concise guide to important topics in C programming, providing simple code examples with comments for better understanding.

## Table of Contents

1. [Introduction](#introduction)
2. [Variables and Data Types](#variables-and-data-types)
3. [Control Flow](#control-flow)
4. [Functions](#functions)
5. [Arrays](#arrays)
6. [Pointers](#pointers)
7. [Structures](#structures)
8. [File Handling](#file-handling)

## Introduction

C is a powerful and versatile programming language known for its efficiency and low-level control. It is widely used in systems programming, embedded systems, and software development.

## Variables and Data Types

```c
#include <stdio.h>

int main() {
    // Integer variable
    int num = 10;

    // Floating-point variable
    float floatNum = 3.14;

    // Character variable
    char character = 'A';

    // Display values
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", floatNum);
    printf("Character: %c\n", character);

    return 0;
}
```

## Control Flow

```c
#include <stdio.h>

int main() {
    // If statement
    int x = 10;
    if (x > 0) {
        printf("Positive number\n");
    } else if (x < 0) {
        printf("Negative number\n");
    } else {
        printf("Zero\n");
    }

    // Switch statement
    char grade = 'B';
    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        default:
            printf("Average\n");
    }

    return 0;
}
```

## Functions

```c
#include <stdio.h>

// Function declaration
int add(int a, int b) {
    return a + b;
}

int main() {
    // Function call
    int result = add(5, 7);
    printf("Sum: %d\n", result);

    return 0;
}
```

## Arrays

```c
#include <stdio.h>

int main() {
    // Array declaration
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing array elements
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
```

## Pointers

```c
#include <stdio.h>

int main() {
    // Pointer declaration
    int num = 10;
    int *ptr = &num;

    // Accessing variable through pointer
    printf("Value of num: %d\n", *ptr);

    return 0;
}
```

## Structures

```c
#include <stdio.h>

// Structure declaration
struct Point {
    int x;
    int y;
};

int main() {
    // Creating and initializing a structure variable
    struct Point p1 = {2, 4};

    // Accessing structure members
    printf("Coordinates: (%d, %d)\n", p1.x, p1.y);

    return 0;
}
```

## File Handling

```c
#include <stdio.h>

int main() {
    // File handling
    FILE *file = fopen("example.txt", "w");
    if (file != NULL) {
        fprintf(file, "Hello, C Programming!");
        fclose(file);
    } else {
        printf("Error opening the file\n");
    }

    return 0;
}
```

<h1>Refer my Source Code for better & clear understanding of these concepts </h1>
