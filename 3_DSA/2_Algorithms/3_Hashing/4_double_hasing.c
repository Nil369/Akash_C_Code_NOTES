#include <stdio.h>
#define TABLE_SIZE 10

typedef struct {
    int key;
    int value;
} HashItem;

HashItem* hashTable[TABLE_SIZE];

unsigned int hashFunction(int key) {
    return key % TABLE_SIZE;
}

unsigned int hashFunction2(int key) {
    return 7 - (key % 7);  // Second hash function
}

void insert(int key, int value) {
    int index = hashFunction(key);
    int index2 = hashFunction2(key);

    while (hashTable[index] != NULL && hashTable[index]->key != -1) {
        index = (index + index2) % TABLE_SIZE;  // Double hashing
    }

    HashItem* item = (HashItem*) malloc(sizeof(HashItem));
    item->key = key;
    item->value = value;
    hashTable[index] = item;
}

int search(int key) {
    int index = hashFunction(key);
    int index2 = hashFunction2(key);

    while (hashTable[index] != NULL) {
        if (hashTable[index]->key == key) {
            return hashTable[index]->value;
        }
        index = (index + index2) % TABLE_SIZE;
    }

    return -1;  // Key not found
}

void display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] != NULL && hashTable[i]->key != -1) {
            printf("Index %d: Key = %d, Value = %d\n", i, hashTable[i]->key, hashTable[i]->value);
        } else {
            printf("Index %d: Empty\n", i);
        }
    }
}

int main() {
    insert(1, 10);
    insert(11, 20);
    insert(21, 30);

    display();

    printf("Value for key 11: %d\n", search(11));
    return 0;
}
