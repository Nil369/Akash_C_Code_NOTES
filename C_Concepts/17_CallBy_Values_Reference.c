/*
In function calls, one of the important concepts is the formal and actual parameters.
Formal Parameter: Formal parameters are the local variable which are assigned values from the arguments when the function is called.
Actual Parameter: When a function is called, the values(expression) that are passed in the call are called arguments or actual parameters. 

(1) Call by values:

In this method, the ‘call by value’ of each of the actual arguments in the calling function is copied into corresponding formal arguments of the called function. 
In this function call, the changes made to the formal arguments in the called function have no effect on the values of actual arguments in the calling function. 
Actual and formal arguments will be created in a different memory location. The following program is the example of ‘Call by Value’.


void swap(int x, int y)
{
int temp;
temp=x;
x=y;
y=temp;
}
void main()
{ 
int r=10, v=20; 
swap(r, v);  // passing value to function
printf("\nValue of r: %d",r);
printf("\nValue of v: %d",v);
} 


(b) Call by reference: **IMP**

In this method, the addresses of actual arguments in the calling function are copied into formal arguments of the called function. 
This means that using these addresses we could access the actual arguments and hence we would be able to manipulate them. 
The changes that are made to the parameter affect the argument. This is because the address is used to access the actual argument.
Formal and actual arguments will be created in the same memory location. The following program is the example of ‘Call by Reference’.

void swap(int *x, int *y)
{
int temp;
 temp=*x;
*x=*y;
*y=temp;
}
void main()
{ 
int r=10, v=20; 
swap(&r, &v);  // passing value to function
printf("\nValue of r: %d",r);
printf("\nValue of v: %d",v);
}
*/


//Another Example of call by reference: 
#include <stdio.h>

void changeValue(int* address)
{
    *address = 36979898;
}

int main()
{
    int a = 34, b =56;
    printf("The value of a now is %d\n", a);
    changeValue(&a);
    printf("The value of a now is %d\n", a);
    return 0;
}


