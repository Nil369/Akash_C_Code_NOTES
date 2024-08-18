# What is a Linked List?

A **Linked List** is a linear data structure composed of a series of nodes, where each node contains two parts: **data** and a **next pointer**. Unlike arrays, elements in a Linked List are not stored in contiguous memory locations. The Linked List has a **head pointer** that points to the first element of the list. If the list is empty, the head pointer points to null.



## Basic Terminologies of Linked List

- **Head**: Pointer to the first node of the Linked List, marking the beginning of the list.
- **Node**: The fundamental unit of a Linked List, consisting of data and a next pointer.
- **Data**: The information stored in a node.
- **Next Pointer**: Points to the next node in the Linked List.



## Importance of Linked List

- **Dynamic Data Structure**: Memory can be allocated or de-allocated at runtime during insertion or deletion.
- **Ease of Insertion/Deletion**: Inserting or deleting elements is simpler than in arrays, as no elements need to be shifted.
- **Efficient Memory Utilization**: The dynamic nature of Linked Lists avoids memory wastage.
- **Implementation**: Advanced data structures like stacks, queues, graphs, and hash maps can be implemented using Linked Lists.



## Types of Linked Lists

1. **Singly Linked List**: Each node contains data and a next pointer. Traversal is possible only in the forward direction.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20220712172013/Singlelinkedlist.png">

2. **Doubly Linked List**: Each node contains data, a next pointer, and a previous pointer. Traversal is possible in both forward and backward directions.
   
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20220712180755/Doublylinkedlist.png">

3. **Circular Linked List**: The first and last nodes are connected, forming a circle, with no null at the end.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20220712181336/Circularlinkedlist.png">

---

### 1. Singly Linked List

- **Node Structure**:
    ```c
    struct Node {
        int data;
        struct Node* next;
    };
    ```
- **Basic Operations**:
    - **Insertion**: At the beginning, end, or specific location.
    - **Deletion**: From the beginning, end, or specific node.
    - **Traversal**: Displaying elements.
    - **Search**: Finding a specific node.

---

### 2. Doubly Linked List

- **Node Structure**:
    ```c
    struct Node {
        int data;
        struct Node* prev;
        struct Node* next;
    };
    ```
- **Basic Operations**:
    - **Insertion**: At the beginning, after/before a node, or at the end.
    - **Deletion**: From the beginning, end, or specific node.
    - **Display**: Showing elements.

---

### 3. Circular Linked List

- **Basic Operations**:
    - **Insertion**: In an empty list, at the beginning, end, or between nodes.
    - **Deletion**: From the beginning, end, or specific node.
    - **Display**: Showing elements.

---

## Linked List Implementation (C Example)

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf(" %d", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = createNode(2);
    head->next = createNode(3);
    head->next->next = createNode(4);
    head->next->next->next = createNode(5);
    head->next->next->next->next = createNode(6);

    printf("Linked List:");
    printList(head);

    return 0;
}
```

**Output**:
```
Linked List: 2 3 4 5 6
```

---

## Linked List vs. Array

| Feature                               | Array                                      | Linked List                                  |
|---------------------------------------|--------------------------------------------|---------------------------------------------|
| **Storage**                           | Contiguous location                        | Non-contiguous location                     |
| **Size**                              | Fixed                                      | Dynamic                                     |
| **Access Time**                       | O(1)                                       | O(N)                                        |
| **Insertion/Deletion**                | Slower due to shifting elements            | Faster, no shifting needed                  |

---

## Time Complexity Analysis

| Operation                     | Linked List | Array        |
|--------------------------------|-------------|--------------|
| **Random Access**              | O(N)        | O(1)         |
| **Insertion/Deletion at Beginning** | O(1)    | O(N)         |
| **Insertion/Deletion at End**  | O(N)        | O(1)         |
| **Insertion/Deletion at Random Position** | O(N) | O(N)      |

---

## Advantages of Linked List

- **Dynamic Size**: Resizable during runtime.
- **Memory Efficiency**: Avoids memory wastage.
- **Ease of Insertion/Deletion**: Faster operations compared to arrays.
- **Implementation**: Useful for stacks, queues, and graphs.

---

## Disadvantages of Linked List

- **Memory Usage**: Requires extra memory for pointers.
- **Accessing Nodes**: Slower due to lack of random access.
- **Search Operation**: Requires O(N) time complexity.
- **Reverse Traversal**: Not possible in singly linked lists.

---

## Applications of Linked List

- **Dynamic Memory Allocation**: Used in memory management.
- **Graphs**: Adjacency list representation.
- **Web Browsers**: Forward and backward navigation.
- **Fibonacci Heaps**: Implemented using circular doubly linked lists.

---

## Q & A about Linked Lists

1. **What is a Linked List data structure?**
   - A data structure consisting of nodes with data and pointers.

2. **What is a Linked List example?**
   - A garland of flowers, where each flower is a node.

3. **Why do we need Linked Lists?**
   - For dynamic resizing and easier insertion/deletion.

4. **What are Linked Lists used for?**
   - Efficient data storage and manipulation.

5. **What is the difference between an array and a Linked List?**
   - Arrays have fixed sizes; Linked Lists are dynamic.

6. **Why is a Linked List preferred over an array?**
   - For flexibility and easier manipulation of data.

7. **Which is better: array or Linked List?**
   - Depends on the use case; Linked Lists are better for dynamic data.

8. **What are the limitations of Linked Lists?**
   - More memory usage and slower access times.

9. **Why are insertion/deletion faster in a Linked List?**
   - No need to shift elements; just update pointers.

10. **What is the difference between a Singly and Doubly Linked List?**
    - Singly Linked List has one pointer, Doubly Linked List has two.

---
