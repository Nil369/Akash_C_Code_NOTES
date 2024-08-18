# Stack Data Structure
<img src = "https://media.geeksforgeeks.org/wp-content/uploads/20240606180735/Stack-representation-in-Data-Structures-(1).webp" height="300" align="right">

A **stack** is a linear data structure that follows the **LIFO (Last In First Out)** principle. This means that the last element inserted into the stack is the first one to be removed. The stack allows insertion and deletion of elements only at one end, referred to as the **top** of the stack.

### Key Concepts of Stack

- **LIFO Principle**: The element that is inserted last will be removed first. A real-life example is a stack of plates where the last plate added is the first one to be removed.


  
### Types of Stack

1. **Fixed Size Stack**: Has a predefined size. If the stack is full, an overflow error occurs when trying to add more elements.
2. **Dynamic Size Stack**: Can grow and shrink dynamically. Implemented using a linked list, allowing flexible resizing.

---
### Basic Operations on Stack

1. **push()**: Inserts an element into the stack.
2. **pop()**: Removes the top element from the stack.
3. **top()**: Returns the top element without removing it.
4. **isEmpty()**: Checks if the stack is empty.
5. **isFull()**: Checks if the stack is full.
   
---
### Algorithms for Stack Operations

<img src = "https://miro.medium.com/v2/resize:fit:1400/1*W2cK1baYQ5nt5vEEFgICeQ.png" height="300" align="right">

- **Push Operation**: 
  - Check if the stack is full. If not, increment the top pointer and insert the element.
  
- **Pop Operation**: 
  - Check if the stack is empty. If not, decrement the top pointer and remove the element.

- **Top Operation**: 
  - Check if the stack is empty. If not, return the element at the top.

- **isEmpty Operation**: 
  - Return `true` if the top pointer is `-1`, indicating an empty stack.

- **isFull Operation**: 
  - Return `true` if the top pointer equals `capacity - 1`, indicating a full stack.
  

## Stack Implementation

#### Using Array

In an array-based implementation, the stack uses an array to store elements. The top pointer is incremented or decremented during push and pop operations.

```c
// C program for array implementation of stack
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

void push(struct Stack* stack, int item) {
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

int pop(struct Stack* stack) {
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}
```
---
#### Using Linked List

In a linked list-based implementation, each element is stored in a node, and the nodes are linked together.

```c
// C program for linked list implementation of stack
struct StackNode {
    int data;
    struct StackNode* next;
};

void push(struct StackNode** root, int data) {
    struct StackNode* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
}

int pop(struct StackNode** root) {
    if (isEmpty(*root))
        return INT_MIN;
    struct StackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}
```

## Complexity Analysis

| Operation | Time Complexity | Space Complexity |
|-----------|-----------------|------------------|
| push()    | O(1)            | O(1)             |
| pop()     | O(1)            | O(1)             |
| top()     | O(1)            | O(1)             |
| isEmpty() | O(1)            | O(1)             |
| isFull()  | O(1)            | O(1)             |

### Advantages of Stack

1. **Simplicity**: Easy to implement and understand.
2. **Efficiency**: Constant time operations (O(1)) for push and pop.
3. **Memory-Efficient**: Only stores elements that are pushed.

### Disadvantages of Stack

1. **Limited Access**: Only the top element can be accessed.
2. **Overflow Risk**: Fixed-size stacks can overflow.
3. **No Random Access**: Cannot access elements randomly.

### Applications of Stack

1. **Expression Evaluation**: Conversion from infix to postfix/prefix.
2. **Function Calls**: Handling function call sequences.
3. **Memory Management**: Used in managing memory in many systems.
4. **Redo-Undo Operations**: Common in editors and browsers.