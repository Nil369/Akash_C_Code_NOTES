#include <stdio.h>  
#include <stdlib.h> 

struct Node
{
    int key;                 // Key or value of the node
    struct Node *left;       // Pointer to the left child node
    struct Node *right;      // Pointer to the right child node
    int height;              // Height of the node
};

// Function to get the height of a node
int getHeight(struct Node *n)
{
    if (n == NULL)  // If node is NULL, return 0
        return 0;
    return n->height;  // Otherwise, return the height of the node
}

// Function to create a new node with the given key
struct Node *createNode(int key)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));  // Allocate memory for the node
    node->key = key;         // Set the key value
    node->left = NULL;       // Initialize left child as NULL
    node->right = NULL;      // Initialize right child as NULL
    node->height = 1;        // Initialize height as 1 (leaf node)
    return node;             // Return the created node
}

// Utility function to find the maximum of two integers
int max(int a, int b)
{
    return (a > b) ? a : b;  // Return the greater value
}

// Function to get the balance factor of a node (difference between heights of left and right subtrees)
int getBalanceFactor(struct Node *n)
{
    if (n == NULL)
    {
        return 0;  // If node is NULL, balance factor is 0
    }
    return getHeight(n->left) - getHeight(n->right);  // Calculate and return the balance factor
}

// Function to perform right rotation on the subtree rooted at y
struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->left;  // Set x as y's left child
    struct Node *T2 = x->right;  // Store x's right child (T2) temporarily

    x->right = y;  // Perform rotation: x's right child becomes y
    y->left = T2;  // y's left child becomes T2

    // Update heights of y and x after rotation
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return x;  // Return the new root (x)
}

// Function to perform left rotation on the subtree rooted at x
struct Node *leftRotate(struct Node *x)
{
    struct Node *y = x->right;  // Set y as x's right child
    struct Node *T2 = y->left;  // Store y's left child (T2) temporarily

    y->left = x;  // Perform rotation: y's left child becomes x
    x->right = T2;  // x's right child becomes T2

    // Update heights of x and y after rotation
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;

    return y;  // Return the new root (y)
}

// Function to insert a new key into the AVL tree and maintain its balance
struct Node *insert(struct Node *node, int key)
{
    // Perform the normal BST insertion
    if (node == NULL)
        return createNode(key);

    if (key < node->key)  // If key is smaller, insert it in the left subtree
        node->left = insert(node->left, key);
    else if (key > node->key)  // If key is larger, insert it in the right subtree
        node->right = insert(node->right, key);

    // Update the height of the current node
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));

    // Get the balance factor to check if the node became unbalanced
    int bf = getBalanceFactor(node);

    // Perform rotations to balance the tree if necessary

    // Left Left Case
    if (bf > 1 && key < node->left->key)
    {
        return rightRotate(node);  // Perform right rotation
    }

    // Right Right Case
    if (bf < -1 && key > node->right->key)
    {
        return leftRotate(node);  // Perform left rotation
    }

    // Left Right Case
    if (bf > 1 && key > node->left->key)
    {
        node->left = leftRotate(node->left);  // Perform left rotation on left child
        return rightRotate(node);  // Then perform right rotation on the current node
    }

    // Right Left Case
    if (bf < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);  // Perform right rotation on right child
        return leftRotate(node);  // Then perform left rotation on the current node
    }

    return node;  // Return the unchanged node pointer if no rotation is needed
}

// Function to perform a pre-order traversal of the AVL tree
void preOrder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);  // Print the root's key
        preOrder(root->left);  // Recursively traverse the left subtree
        preOrder(root->right);  // Recursively traverse the right subtree
    }
}

// Main function
int main()
{
    struct Node *root = NULL;  // Initialize the root of the AVL tree as NULL

    // Insert nodes into the AVL tree
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    /* The constructed AVL Tree would be
              30
             /  \
           20   40
          /  \     \
         10  25    50
    */

    printf("Preorder traversal : \n");
    preOrder(root);  // Print the pre-order traversal of the tree

    return 0;  // Exit the program
}
