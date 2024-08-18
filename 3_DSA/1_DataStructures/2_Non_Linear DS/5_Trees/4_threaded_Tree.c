#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left, *right;
    int isThreaded; // Indicates if the right pointer is a thread
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    node->isThreaded = 0;
    return node;
}

// In-order traversal of a threaded binary tree
void inOrder(Node* root) {
    Node* current = root;

    while (current != NULL) {
        // Go to the leftmost node
        while (current->left != NULL) {
            current = current->left;
        }

        // Print the current node's data
        printf("%d ", current->data);

        // Use the thread to move to the successor
        while (current->isThreaded) {
            current = current->right;
            printf("%d ", current->data);
        }

        // Move to the right child
        current = current->right;
    }
}

// Insert a new node in the threaded binary tree
Node* insert(Node* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }

    Node* parent = NULL;
    Node* current = root;

    while (current != NULL) {
        parent = current;

        if (key < current->data) {
            if (current->left == NULL) {
                break;
            }
            current = current->left;
        } else if (key > current->data) {
            if (current->isThreaded) {
                break;
            }
            current = current->right;
        } else {
            return root; // Duplicate keys are not allowed
        }
    }

    Node* newNode = createNode(key);

    if (key < parent->data) {
        parent->left = newNode;
        newNode->right = parent;
        newNode->isThreaded = 1;
    } else {
        newNode->right = parent->right;
        parent->right = newNode;
        parent->isThreaded = 0;
        newNode->isThreaded = 1;
    }

    return root;
}

int main() {
    Node* root = NULL;
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 5);
    root = insert(root, 15);

    printf("In-order Traversal of Threaded Binary Tree: ");
    inOrder(root);

    return 0;
}
