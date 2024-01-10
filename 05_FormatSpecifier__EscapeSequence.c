#include <stdio.h>
#define PI 3.14 //#define pre-processor

int main()
{
    int a = 8;
    const float b = 7.333;
    //b = 7.22; //cannot do this since b is a constant  //=> Values can't be changed THROWS ERROR
    //PI = 7.33; //cannot do this since PI is a constant // => Throws Error

    printf(" tab character \t\t my backslash  %f", PI);
    
    
    // printf("Hello World\n");
    // printf("The value of a is %d and the value of b is %2.4f\n", a, b); => 2--> Offset matlabh utna space chor dega terminal me
    // printf("%18.4f this",b);

    /* Escape Sequence: 

        \a = Produces beep sound => May not work in some systems as terminals mute them
        \t = Inserts a tab
        \b = Inserts a backspace
        \n = Inserts a newline.
        \r = Inserts a carriage return.
        \f = Inserts a form feed.
        \’ = Inserts a single quote character.
        \” = Inserts a double quote character.
        \\ = Inserts a backslash character.
    
    */

    return 0;
}

