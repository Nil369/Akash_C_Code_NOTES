<img src = "https://logicmojo.com/assets/dist/new_pages/images/hash%20table.jpg" alt="hash table" width="900" height="450">

# 1. Hash Function:

🔵 Def:  A hash function is a function that takes an input (or "key") and returns 
a fixed-size string of bytes, usually in the form of an integer. The output 
is called a hash code or hash value.

🔵 Purpose: Hash functions are used to map data of arbitrary size to data of fixed size. 
They are commonly used in hash tables to quickly locate a data record.

🔵 Properties:

-> Deterministic: The same input will always produce the same output.

-> Fast: The hash function should compute the hash value quickly.

-> Uniform Distribution: The hash function should distribute the data evenly across the hash table to avoid clustering.

example:

```c
unsigned int hashFunction(int key) {
    return key % 10;  // Modulus operator gives the remainder
}
```

# 2. Hash Tables:

🔵 Definition: A hash table is a data structure that stores key-value pairs. It uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.

🔵 Purpose: Hash tables provide a way to implement associative arrays, which are abstract data types that map keys to values.

🔵 Efficiency: The average **`time complexity for searching, inserting, and deleting in a hash table is O(1)`**, assuming a good hash function and low collision rate.



# 3. Collision Resolution Techniques:
Collisions occur when two keys hash to the same index in the hash table. Here are common techniques to handle collisions:

<img src="https://media.geeksforgeeks.org/wp-content/uploads/chain-hashing-1.png" alt="chaining" align = "right" width="300" height="200">

## a. Chaining:
🔵 Def: In chaining, each bucket of the hash table points to a linked list of entries that have the same hash index.

🔵 Pros: Easy to implement and handles collisions well.

🔵 Cons: Can lead to increased search time if the linked lists become long.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/Linear-Probing-1-1.jpg" alt="chaining" align = "left" width="300" height="200">

## b. Open Addressing (Linear Probing):
🔵Def: In open addressing, all elements are stored in the hash table itself. If a collision occurs, the next available slot is found using a probing sequence.

🔵Pros: Avoids the use of linked lists.

🔵Cons: Clustering can occur, leading to longer search times.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/double-hash-function.png" alt="chaining" align = "right" width="300" height="200">

## Double Hashing:
🔵Def: Double hashing uses two hash functions to calculate the probe sequence. If a collision occurs, the second hash function is used to find the next available slot.

🔵Pros: Reduces clustering compared to linear probing.

🔵Cons: More complex than linear probing.





