#include <stdio.h>
#include <stdlib.h>

int* functionDangling()
{
    int a, b, sum;
    a =34;
    b = 364;
    sum = a + b;
    return sum;
}


int summ(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello world my user good morning%d\n");
}


int main()
{
    // ==================== 1. Void Pointers: ==========================
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));

    // ========================== 2. NULL pointers: =====================

    int c = 34;
    int * ptr0 = NULL;
    if (ptr0 != NULL){
    printf("The address of a is %d\n", ptr);
    }
    else{
        printf("The pointer is a null pointer and cannot be dereferenced");
    }

    // ========================3. Dangling Pointers: =======================
    // This is basically a hanging pointer.
    // The memory location which it used to point has been deleted 😢

    // Case 1: De allocation of a memory block
    int *ptr1= (int *) malloc(7* sizeof(int));
    ptr1[0] = 34;
    ptr1[1] = 36;
    ptr1[2] = 64;
    ptr1[3] = 5;
    free(ptr); // ptr is now a dangling pointer

    // Case 2: Function returning local variable address
    int * dangPtr = functionDangling(); // dangPtr is now a dangling pointer

    int * danglingPtr3;
    // Case 3: If a variable goes out of scope
    {
        int a = 12;

        danglingPtr3 = &a;
    }
    // Here variable a goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer


    // ============================== 4. Wild Pointers: ==============================
    // This is basically a uninitialised pointer

    int a =4354;
    int *ptr2; // This is a wild pointer
    // *ptr = 34; // This is not a good thing to do
    ptr2 = &a; // ptr is no longer a wild pointer
    printf("The value of a is %d\n", *ptr2);

    // ============================ 5. Function Pointer: =============================

    printf("The sum of 1 and 2 is %d\n", summ(1,2)); // Testing the function
    int (*fPtr) (int, int); // Declaring a function pointer
    fPtr = summ;// Creating a function pointer
    int d = (*fPtr)(4, 6); // Dereferencing a function pointer
    printf("The value of d is %d\n", d);


    return 0;
}
