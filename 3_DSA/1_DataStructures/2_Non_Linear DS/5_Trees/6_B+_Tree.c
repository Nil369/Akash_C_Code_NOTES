#include <stdio.h>
#include <stdlib.h>

#define MAX 4  // Maximum degree of B+ Tree (order)

typedef struct BPlusTreeNode {
    int keys[MAX];            // Array of keys
    struct BPlusTreeNode* children[MAX + 1];  // Array of child pointers
    struct BPlusTreeNode* next;  // Pointer to the next leaf node (used in leaf nodes)
    int n;                   // Number of keys
    int isLeaf;              // 1 if the node is a leaf, 0 otherwise
} BPlusTreeNode;

// Function to create a new B+ Tree node
BPlusTreeNode* createNode(int isLeaf) {
    BPlusTreeNode* newNode = (BPlusTreeNode*)malloc(sizeof(BPlusTreeNode));
    newNode->isLeaf = isLeaf;
    newNode->n = 0;
    newNode->next = NULL;
    for (int i = 0; i < MAX + 1; i++) {
        newNode->children[i] = NULL;
    }
    return newNode;
}

// Function to traverse the B+ Tree
void traverse(BPlusTreeNode* root) {
    if (root != NULL) {
        int i;
        for (i = 0; i < root->n; i++) {
            if (!root->isLeaf) {
                traverse(root->children[i]);
            }
            printf("%d ", root->keys[i]);
        }
        if (!root->isLeaf) {
            traverse(root->children[i]);
        }
    }
}

// Function to search a key in the B+ Tree
BPlusTreeNode* search(BPlusTreeNode* root, int key) {
    int i = 0;
    while (i < root->n && key > root->keys[i]) {
        i++;
    }

    if (i < root->n && key == root->keys[i]) {
        return root;
    }

    if (root->isLeaf) {
        return NULL;
    }

    return search(root->children[i], key);
}

// Function to insert a key in the B+ Tree
void insert(BPlusTreeNode** root, int key);

// Split the child of a B+ Tree node
void splitChild(BPlusTreeNode* parent, int i, BPlusTreeNode* child) {
    BPlusTreeNode* newChild = createNode(child->isLeaf);
    newChild->n = MAX / 2;

    for (int j = 0; j < MAX / 2; j++) {
        newChild->keys[j] = child->keys[j + MAX / 2];
    }

    if (!child->isLeaf) {
        for (int j = 0; j <= MAX / 2; j++) {
            newChild->children[j] = child->children[j + MAX / 2];
        }
    } else {
        newChild->next = child->next;
        child->next = newChild;
    }

    child->n = MAX / 2;

    for (int j = parent->n; j >= i + 1; j--) {
        parent->children[j + 1] = parent->children[j];
    }
    parent->children[i + 1] = newChild;

    for (int j = parent->n - 1; j >= i; j--) {
        parent->keys[j + 1] = parent->keys[j];
    }
    parent->keys[i] = child->keys[MAX / 2];
    parent->n++;
}

void insertNonFull(BPlusTreeNode* root, int key) {
    int i = root->n - 1;

    if (root->isLeaf) {
        while (i >= 0 && key < root->keys[i]) {
            root->keys[i + 1] = root->keys[i];
            i--;
        }
        root->keys[i + 1] = key;
        root->n++;
    } else {
        while (i >= 0 && key < root->keys[i]) {
            i--;
        }
        i++;
        if (root->children[i]->n == MAX) {
            splitChild(root, i, root->children[i]);
            if (key > root->keys[i]) {
                i++;
            }
        }
        insertNonFull(root->children[i], key);
    }
}

void insert(BPlusTreeNode** root, int key) {
    if ((*root)->n == MAX) {
        BPlusTreeNode* newRoot = createNode(0);
        newRoot->children[0] = *root;
        splitChild(newRoot, 0, *root);
        *root = newRoot;
        insertNonFull(*root, key);
    } else {
        insertNonFull(*root, key);
    }
}

int main() {
    BPlusTreeNode* root = createNode(1);  // Create an empty B+ Tree

    insert(&root, 10);
    insert(&root, 20);
    insert(&root, 5);
    insert(&root, 6);
    insert(&root, 12);
    insert(&root, 30);
    insert(&root, 7);
    insert(&root, 17);

    printf("Traversal of the B+ Tree: ");
    traverse(root);

    BPlusTreeNode* found = search(root, 6);
    if (found != NULL) {
        printf("\nKey 6 found in the B+ Tree.");
    } else {
        printf("\nKey 6 not found in the B+ Tree.");
    }

    return 0;
}
