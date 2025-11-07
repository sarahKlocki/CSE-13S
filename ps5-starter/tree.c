/* Implementing a binary search tree in C */

#include <stdio.h>
#include <stdlib.h>

/* Structure of a node in BST */ 
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value) {
    /* TODO: create a new node. */
}

Node* insert(Node* root, int value) {
    /* TODO: insert the given value in the BST. The BST property must not be violated. */

}

Node* search(Node* root, int value) {
    /* TODO: search the tree for the given value. You must use the BST property. */

}

void inOrderTraversal(Node* root) {
    /* TODO: traverse the tree in order to print values in ascending order. */

}

void freeTree(Node* root) {
    /* TODO: free any allocated memory */

}

int main() { 
    int n;
    printf("Enter the number of values to be inserted: ");
    scanf("%d", &n);

    int values[n];
    printf("Enter %d integers in random order: ", n);
    for(int i=0; i< n; i++) {
        scanf("%d", values+i);
    }

    Node* root = NULL;
    /* Insert values into BST */ 
    for (int i = 0; i < n; i++) {
        root = insert(root, values[i]);
    }

    /* Print values in a sorted manner using in-order traversal */
    printf("In-order traversal: ");
    inOrderTraversal(root);
    printf("\n");

    /* Search for a value in BST */
    int searchValue;
    printf("Enter a value to be searched: ");
    scanf("%d", &searchValue);
    if (search(root, searchValue)) {
        printf("%d found in BST.\n", searchValue);
    } else {
        printf("%d not found in BST.\n", searchValue);
    }

    freeTree(root); /* free the tree */

    return 0;
}
