#include <stdio.h>

int sum = 69;
int myfunc(int a, int b)
{   
    // Use of auto int sum which is basically same as declaring int sum
//    auto int sum;
//    sum = a + b;
extern int sum;
   return sum;
}

int myfunc1(int a, int b)
{
    // auto int myVar;
    static int myVar;
    myVar ++;
    printf("The myVar is %d\n", myVar);

    // myVar = a+b;
    return myVar;
}

int main()
{
    // Declaration - Telling the compiler about the variable (No space reserved)
    // Definition - Declaration + space reservation
    
    // int sum = myfunc(3,5);
    // printf("The sum is: %d\n", sum);
    
    // int myVar = myfunc1(3, 5);
    register int myVar = myfunc1(3,5);
    myVar = myfunc1(3, 5);
    myVar = myfunc1(3, 5);
    myVar = myfunc1(3, 5);
    myVar = myfunc1(3, 5);

    return 0;
}
