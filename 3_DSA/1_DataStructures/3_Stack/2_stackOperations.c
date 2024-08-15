#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};


// Function to check underflow condition
int isEmpty(struct stack* ptr) {
    return ptr->top == -1;
}


// Function to check overflow condition
int isFull(struct stack* ptr) {
    return ptr->top == ptr->size - 1;
}


// Function to create a Push elements in the stack
void push(struct stack* ptr, int val) {
    if(isFull(ptr)) {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}


// Function to create a remove elements in the stack
int pop(struct stack* ptr) {
    if(isEmpty(ptr)) {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    } else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}


// Function to get the index of element of the stack
int peek(struct stack* sp, int i){
    int arrayInd = sp->top -i + 1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}


// Function to traverse and print the stack elements from top to bottom
void traverseStack(struct stack* ptr) {
    if(isEmpty(ptr)) {
        printf("The stack is empty.\n");
    } else {
       // Printing values from the stack
    for (int j = 1; j <= ptr->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(ptr, j));
    }
    }
}


// Function to get the top element of the stack
int stackBottom(struct stack* sp){
    return sp->arr[0];
}


//Function to get the bottom element of the stack
int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}

// Driver code to test the stack operations
int main() {
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");

    printf("Before pushing, Full: %d\n", isFull(sp));
    printf("Before pushing, Empty: %d\n\n", isEmpty(sp));

    push(sp, 1);
    push(sp, 23);
    push(sp, 99);
    push(sp, 75);
    push(sp, 3);
    push(sp, 64);
    push(sp, 57);
    push(sp, 46);
    push(sp, 89);
    push(sp, 6); // ---> Pushed 10 values 

    printf("After pushing, Full: %d\n", isFull(sp));
    printf("After pushing, Empty: %d\n\n", isEmpty(sp));
    traverseStack(sp); // Traverse and print stack elements


    printf("\n\nPopped %d from the stack\n", pop(sp)); // --> Last in first out!
    printf("Popped %d from the stack\n\n", pop(sp)); // --> Last in first out!
    traverseStack(sp); // Traverse and print stack elements after popping

    printf("\n\nThe top most value of this stack is %d\n", stackTop(sp));
    printf("The bottom most value of this stack is %d\n", stackBottom(sp));

    return 0;
}
