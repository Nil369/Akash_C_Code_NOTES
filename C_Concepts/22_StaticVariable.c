/*
What is a static variable?
A static variable is known to retain the value even after they exit the scope.
Static variables retain their value and are not initialized again in the new scope. 
The static variable until the end of the program is kept in the memory, whereas a normal variable is destroyed when a function is over. 
They can be defined inside or outside the function. Static variables are local to the block. 
The default value of static variables is zero.The keyword static is used to declare a static variable.

Syntax:
   static Datatype Variable_name = Variable_value;
*/

#include <stdio.h>

int b = 34; // This is a global variable since it is declared inside main()

int ret()
{
    return 43*3;
}

int func1(int b1)
{
    // static int myvar = ret(); //
    static int myvar = 0;
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    // printf("the value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);
    return b1 + myvar;
}
int main()
{
    int b = 344;
    // printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("The value of func1 is %d", val);
    // printf("%d", loc);
    return 0;
}
