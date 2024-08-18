/*
Abstract data types(ADTs)are the ways of classifying data structures by providing a minimal expected 
interface and some set of methods. It is very similar to when we make a blueprint before actually 
getting into doing some job, be it constructing a computer or a building. The blueprint comprises
all the minimum required logistics and the roadmap to pursuing the job.


✅Array - ADT
An array ADT holds the collection of given elements (can be int, float, custom) accessible by their index.

    🔵 Minimal required functionality:
        We have two basic functionalities of an array, a get function to retrieve the element at index i 
        and a set function to assign an element to some index in the array.

    get (i) – get element i
    set (i, num) – set element i to num.

    🔵 Operations:-
        can have a whole lot of different operations on the array we created, but we’ll limit ourselves to some basic ones.

        Max()
        Min()
        Search ( num )
        Insert ( i, num )
        Append (x)

✅Static and Dynamic Arrays:
Static arrays – Size cannot be changed
Dynamic arrays – Size can be changed

✅Memory Representations of Array:
Elements in an array are stored in contiguous memory locations.
Elements in an array can be accessed using the base address in constant time → O (1).
Although changing the size of an array is not possible, one can always 
reallocate it to some bigger memory location. Therefore resizing in an array is a costly operation.

*/


# include <stdio.h>
#include<stdlib.h>

// creating a structure / ADT
struct myArray
{
    int total_size;   // Total size of the array (maximum number of elements it can hold)
    int used_size;    // Number of elements currently in use in the array
    int *ptr;         // Pointer to the first element of the array (dynamically allocated)
};



// Function to initialize a 'myArray' structure with given total size and used size
// OR, Basically, Creating a function using an Abstract Data Type
void createArray(struct myArray *arr,int tSize, int uSize){

    // Eiher we can derefrence in this way using dereference operator & dot operator
    // (*arr).total_size = tSize;
    // (*arr).used_size = uSize;
    // (*arr).ptr = (int*)malloc(sizeof(int) * uSize);


    // Or we can use arrow operator
    arr->total_size = tSize;
    arr->used_size = uSize;
    arr->ptr = (int*)malloc(sizeof(int) * uSize); // Dynamically allocate memory for the array based on the used size
    

}


void setVal(struct myArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d = ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}


void showArray(struct myArray *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d ", (a->ptr)[i]);
    }
    
}

int main(){
    struct myArray marks;
    createArray(&marks, 10, 2);
    printf("Running setVal now...\n");
    setVal(&marks);
 
    printf("Running show now...\n");
    showArray(&marks);
return 0;
}