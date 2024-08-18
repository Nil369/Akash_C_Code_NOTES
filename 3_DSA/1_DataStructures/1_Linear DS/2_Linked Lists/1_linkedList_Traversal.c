#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* link; // self referencing structure
};


void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->link;
    }
}

int main(){

    struct Node* head;
    struct Node* first;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    // allocate memory for nodes
    head = (struct Node*) malloc(sizeof(struct Node));
    first = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));

    // Link 1st and 2nd nodes
    head->data = 9;
    head->link = first;

    // Link second and third nodes
    second->data = 11;
    second->link = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->link = fourth;
 
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->link = NULL;

    
    return 0;
}