## What is an Array?
An array is a `linear data structure` that stores a **collection of items of the same data type in contiguous memory locations**. Each item in an array is indexed starting with 0. We can **directly access an array element by using its index value**.

<img src ="https://media.geeksforgeeks.org/wp-content/uploads/20240405101013/Memory-Representation-of-Array-(1).webp" height="400" width="800">

### Basic Terminologies of Array
- **Array Index**: In an array, elements are identified by their indexes. Array index starts from 0.
- **Array Element**: Elements are items stored in an array and can be accessed by their index.
- **Array Length**: The length of an array is determined by the number of elements it can contain.

### Memory Representation of Array
In an array, all the elements are stored in contiguous memory locations. So, if we initialize an array, the elements will be allocated sequentially in memory. This allows for efficient access and manipulation of elements.

### Importance of Array
Assume there is a class of five students and we need to keep records of their marks in an examination. We can do this by declaring five individual variables. But what if the number of students becomes very large? It would be challenging to manipulate and maintain the data.

This is where arrays become useful. Instead of using normal variables for each student, we can represent all the marks in one array, making data management much easier.

### Types of Arrays

#### Types of Arrays on the Basis of Size
1. **Fixed-Sized Arrays**:
   - The size of this array cannot be altered or updated after declaration. Here, a fixed size of memory is allocated for storage.
   - Example:
   ```c
   // Method 1 to create a fixed-sized array (allocated at compile time)
   int arr1[5];
   // Another way (creation and initialization)
   int arr2[5] = {1, 2, 3, 4, 5};
   ```

   ```c
   // Method 2: Dynamically allocate memory at runtime
   int *arr = (int*)malloc(n * sizeof(int));
   ```

2. **Dynamic-Sized Arrays**:
   - The size of the array can change as per user requirements during code execution. Memory is dynamically allocated and deallocated.
   - Note: C does not support dynamic-sized arrays directly.

#### Types of Arrays on the Basis of Dimensions

<img src = "https://media.geeksforgeeks.org/wp-content/uploads/20240731124259/Types-of-Arrays.webp">

1. **One-Dimensional Array (1-D Array)**:
   - Imagine a 1-D array as a row where elements are stored one after another.

2. **Multi-Dimensional Array**:
   - A multi-dimensional array has more than one dimension. It can be used to store complex data in the form of tables, matrices, etc.
   - **Two-Dimensional Array (2-D Array or Matrix)**: An array of arrays, structured in rows and columns.
   - **Three-Dimensional Array (3-D Array)**: An array of 2-D arrays.


### Declaration of Array
Arrays can be declared in various ways in different languages. For better illustration, below are some language-specific array declarations:

```c
// This array will store integer type element
int arr[5];      
// This array will store char type element
char arr[10];   
// This array will store float type element
float arr[20];  
```

### Initialization of Array
Arrays can be initialized in different ways in different languages. Below are some language-specific array initializations:

```c
int arr[] = { 1, 2, 3, 4, 5 };
char arr[5] = { 'a', 'b', 'c', 'd', 'e' };
float arr[10] = { 1.4, 2.0, 24, 5.0, 0.0 };
```

### Operations on Array
1. **Array Traversal**: Visiting all elements of the array once.
   ```c
   int arr[] = { 1, 2, 3, 4, 5 };
   int len = sizeof(arr) / sizeof(arr[0]);
   // Traversing the array
   for (int i = 0; i < len; i++) {
       printf("%d ", arr[i]);
   }
   ```

2. **Insertion in Array**: Adding one or multiple elements at any position.
   ```c
   // Function to insert an element at a specific position
   void insertElement(int arr[], int n, int x, int pos) {
       for (int i = n - 1; i >= pos; i--)
           arr[i + 1] = arr[i];
       arr[pos] = x;
   }
   ```

3. **Deletion in Array**: Removing an element at any index.
   ```c
   // Function to delete an element
   int deleteElement(int arr[], int n, int key) {
       int pos = findElement(arr, n, key);
       if (pos == -1) {
           printf("Element not found");
           return n;
       }
       for (int i = pos; i < n - 1; i++)
           arr[i] = arr[i + 1];
       return n - 1;
   }
   ```

4. **Searching in Array**: Traversing the array to find an element.
   ```c
   // Function to search for an element
   int findElement(int arr[], int n, int key) {
       for (int i = 0; i < n; i++)
           if (arr[i] == key)
               return i;
       return -1;  // Key not found
   }
   ```

## Complexity Analysis of Operations on Array

### Time Complexity:

| Operation  | Best Case | Average Case | Worst Case |
|------------|-----------|--------------|------------|
| Traversal  | Ω(N)      | θ(N)         | O(N)       |
| Insertion  | Ω(1)      | θ(N)         | O(N)       |
| Deletion   | Ω(1)      | θ(N)         | O(N)       |
| Searching  | Ω(1)      | θ(N)         | O(N)       |

### Space Complexity:

| Operation  | Best Case | Average Case | Worst Case |
|------------|-----------|--------------|------------|
| Traversal  | Ω(1)      | θ(1)         | O(1)       |
| Insertion  | Ω(1)      | θ(N)         | O(N)       |
| Deletion   | Ω(1)      | θ(N)         | O(N)       |
| Searching  | Ω(1)      | θ(1)         | O(1)       |


### Advantages of Array
- Allows random access to elements, making accessing elements by position faster.
- Better cache locality, improving performance.
- Represents multiple data items of the same type using a single name.
- Used to implement other data structures like linked lists, stacks, queues, trees, and graphs.

### Disadvantages of Array
- Fixed size: Memory cannot be increased or decreased once allocated.
- Homogeneous nature: Cannot store values of different data types.
- Contiguous memory locations make deletion and insertion difficult.

### Applications of Array
- Used in implementing other data structures like array lists, heaps, hash tables, vectors, and matrices.
- Used to store database records.
- Commonly used in lookup tables.

