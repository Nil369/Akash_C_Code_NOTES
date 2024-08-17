#include<stdio.h>   
#include<stdlib.h>  


struct node{
    int data;             // Data stored in the node
    struct node* left;    // Pointer to the left child
    struct node* right;   // Pointer to the right child
};

// Function to create a new node
struct node* createNode(int data){
    struct node *n;  // Creating a node pointer
    n = (struct node *) malloc(sizeof(struct node));  // Allocating memory in the heap
    n->data = data;  // Setting the data of the node
    n->left = NULL;  // Initializing the left child as NULL
    n->right = NULL; // Initializing the right child as NULL
    return n;  // Returning the created node
}

// Function to perform pre-order traversal of the BST
void preOrder(struct node* root){
    if(root != NULL){
        printf("%d ", root->data);  // Print the root's data
        preOrder(root->left);  // Recursively traverse the left subtree
        preOrder(root->right); // Recursively traverse the right subtree
    }
}

// Function to perform post-order traversal of the BST
void postOrder(struct node* root){
    if(root != NULL){
        postOrder(root->left);  // Recursively traverse the left subtree
        postOrder(root->right); // Recursively traverse the right subtree
        printf("%d ", root->data);  // Print the root's data
    }
}

// Function to perform in-order traversal of the BST
void inOrder(struct node* root){
    if(root != NULL){
        inOrder(root->left);  // Recursively traverse the left subtree
        printf("%d ", root->data);  // Print the root's data
        inOrder(root->right); // Recursively traverse the right subtree
    }
}

// Function to check if a binary tree is a BST
int isBST(struct node* root){
    static struct node *prev = NULL;  // Static variable to store the previous node in in-order traversal
    if(root != NULL){
        if(!isBST(root->left)){  // Recursively check the left subtree
            return 0;  // If the left subtree is not a BST, return false
        }
        if(prev != NULL && root->data <= prev->data){  // Check the current node's data with the previous node
            return 0;  // If the current node's data is less than or equal to the previous node's data, return false
        }
        prev = root;  // Update the previous node
        return isBST(root->right);  // Recursively check the right subtree
    }
    else{
        return 1;  // If the tree is empty, it is a BST
    }
}

// Function to search for a node with a given key using iterative method
struct node* searchIter(struct node* root, int key){
    while(root != NULL){
        if(key == root->data){  // If the key is found, return the node
            return root;
        }
        else if(key < root->data){  // If the key is smaller, move to the left subtree
            root = root->left;
        }
        else{  // If the key is larger, move to the right subtree
            root = root->right;
        }
    }
    return NULL;  // If the key is not found, return NULL
}

// Function to insert a new node in the BST
void insert(struct node *root, int key){
    struct node *prev = NULL;  // Pointer to track the previous node
    while(root != NULL){
        prev = root;  // Update the previous node
        if(key == root->data){  // If the key already exists, do not insert and return
            printf("Cannot insert %d, already in BST", key);
            return;
        }
        else if(key < root->data){  // If the key is smaller, move to the left subtree
            root = root->left;
        }
        else{  // If the key is larger, move to the right subtree
            root = root->right;
        }
    }
    struct node* new = createNode(key);  // Create a new node
    if(key < prev->data){  // If the key is smaller, insert as the left child
        prev->left = new;
    }
    else{  // If the key is larger, insert as the right child
        prev->right = new;
    }
}

// Function to find the in-order predecessor of a node
struct node *inOrderPredecessor(struct node* root){
    root = root->left;  // Move to the left subtree
    while(root->right != NULL){  // Find the rightmost node in the left subtree
        root = root->right;
    }
    return root;  // Return the in-order predecessor
}

// Function to delete a node from the BST
struct node *deleteNode(struct node *root, int value){
    struct node* iPre;
    if (root == NULL){  // If the tree is empty, return NULL
        return NULL;
    }
    if (root->left == NULL && root->right == NULL){  // If the node is a leaf, delete it
        free(root);  // Free the memory
        return NULL;  // Return NULL
    }

    // Searching for the node to be deleted
    if (value < root->data){  // If the value is smaller, move to the left subtree
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data){  // If the value is larger, move to the right subtree
        root->right = deleteNode(root->right, value);
    }
    // Deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);  // Find the in-order predecessor
        root->data = iPre->data;  // Replace the node's data with the predecessor's data
        root->left = deleteNode(root->left, iPre->data);  // Delete the predecessor node
    }
    return root;  // Return the updated root
}

int main(){
     
    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    
    // The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  
 
    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);  // Perform in-order traversal before deletion
    printf("\n");
    deleteNode(p, 3);  // Delete the node with value 3
    inOrder(p);  // Perform in-order traversal after deletion

    return 0;  // Exit the program
}
