#include <stdio.h>

int main(){
    
    // This is a single line comment: This will be ignored by  GCC compiler

    /*
    This is a
    multiline comment:
    This will also be ignored by the compiler
    */

    int a1 = 3; // 2-4 byte
    //   unsigned short integer = 9; //2 bytes
    //   long integer1 = 99; //4 bytes
    //   short integer1 = 69; //2 bytes

    float b1 = 6; // 4 bytes-->6 decimal places precission
                  //  double myfloat1 = 7.888889; //8 bytes-->15 decimal places precission
                  //  long double myfloat2 = 8.999999999999999; //10 bytes-->19 decimal places precission

    char c1 = 'A'; // 1 byte1

    /*
    for int type--> %d ;
    for float type-->%f;
    for char type--> %c;
    */

    printf("Hello %d %f %c \n", a1, b1, c1); // for single value to be printed -->printf "%d",a

    //%lu is used for unsigned long
    
    printf("The size taken by integer is %lu \n", sizeof(int));// sizeof => function => tells us how many bytes the datadatype(here, {int}) is taking in our system
    
    printf("The size taken by integer is %d\n", sizeof(int));
    printf("The size taken by unsigned integer is %d\n", sizeof(unsigned int));
    printf("The size taken by long integer is %d\n", sizeof(long int));
    printf("The size taken by short  integer is %d\n", sizeof(short int));
    printf("The size taken by float is %f\n", sizeof(float));
   
    return 0;
}