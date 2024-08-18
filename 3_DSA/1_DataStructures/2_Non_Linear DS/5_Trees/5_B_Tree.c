#include <stdio.h>
#include <stdlib.h>

#define MAX 3  // Maximum degree of B-Tree (order)

// A B-Tree node structure
typedef struct BTreeNode {
    int keys[MAX - 1];     // Array of keys
    struct BTreeNode* children[MAX]; // Array of child pointers
    int n;                 // Number of keys
    int isLeaf;            // 1 if the node is a leaf node, 0 otherwise
} BTreeNode;

// Function to create a new B-Tree node
BTreeNode* createNode(int isLeaf) {
    BTreeNode* newNode = (BTreeNode*)malloc(sizeof(BTreeNode));
    newNode->isLeaf = isLeaf;
    newNode->n = 0;
    for (int i = 0; i < MAX; i++) {
        newNode->children[i] = NULL;
    }
    return newNode;
}

// Function to traverse the B-Tree
void traverse(BTreeNode* root) {
    if (root != NULL) {
        for (int i = 0; i < root->n; i++) {
            if (!root->isLeaf) {
                traverse(root->children[i]);
            }
            printf("%d ", root->keys[i]);
        }
        if (!root->isLeaf) {
            traverse(root->children[root->n]);
        }
    }
}

// Function to search a key in the B-Tree
BTreeNode* search(BTreeNode* root, int key) {
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

// Function to insert a key in the B-Tree
void insert(BTreeNode** root, int key);

// Split the child of a B-Tree node
void splitChild(BTreeNode* parent, int i, BTreeNode* child) {
    BTreeNode* newChild = createNode(child->isLeaf);
    newChild->n = MAX / 2;

    for (int j = 0; j < MAX / 2; j++) {
        newChild->keys[j] = child->keys[j + MAX / 2];
    }

    if (!child->isLeaf) {
        for (int j = 0; j <= MAX / 2; j++) {
            newChild->children[j] = child->children[j + MAX / 2];
        }
    }

    child->n = MAX / 2 - 1;

    for (int j = parent->n; j >= i + 1; j--) {
        parent->children[j + 1] = parent->children[j];
    }
    parent->children[i + 1] = newChild;

    for (int j = parent->n - 1; j >= i; j--) {
        parent->keys[j + 1] = parent->keys[j];
    }
    parent->keys[i] = child->keys[MAX / 2 - 1];
    parent->n++;
}

void insertNonFull(BTreeNode* root, int key) {
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
        if (root->children[i]->n == MAX - 1) {
            splitChild(root, i, root->children[i]);
            if (key > root->keys[i]) {
                i++;
            }
        }
        insertNonFull(root->children[i], key);
    }
}

void insert(BTreeNode** root, int key) {
    if ((*root)->n == MAX - 1) {
        BTreeNode* newRoot = createNode(0);
        newRoot->children[0] = *root;
        splitChild(newRoot, 0, *root);
        *root = newRoot;
        insertNonFull(*root, key);
    } else {
        insertNonFull(*root, key);
    }
}

int main() {
    BTreeNode* root = createNode(1);  // Create an empty B-Tree

    insert(&root, 10);
    insert(&root, 20);
    insert(&root, 5);
    insert(&root, 6);
    insert(&root, 12);
    insert(&root, 30);
    insert(&root, 7);
    insert(&root, 17);

    printf("Traversal of the B-Tree: ");
    traverse(root);

    BTreeNode* found = search(root, 6);
    if (found != NULL) {
        printf("\nKey 6 found in the B-Tree.");
    } else {
        printf("\nKey 6 not found in the B-Tree.");
    }

    return 0;
}
