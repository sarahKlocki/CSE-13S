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
    // make ptr var. allocate memory w malloc. initialize all variables. return ptr
    // creating node obj:
    Node *nodePtr;                              // deref get actual values
    nodePtr = (Node*)malloc(1 * sizeof(Node));  // allocate memory-want the num of bytes
    nodePtr->data = value;                      // nodePtr points towards the Node being created
    nodePtr->left = NULL;                       //                                                                     yh
    nodePtr->right = NULL;                      // 
    return nodePtr;
}

Node* insert(Node* root, int value) {
    /* TODO: insert the given value in the BST. The BST property must not be violated. */
    // recursion ea time go to a new node, just recursion
    // calling itself: left case, right case
    // base case: where to insert. insert when NULL
    // creating node once you reach a NULL. if nothing in tree, yay root. if shit in tree, yay found place for new node
    // works for inserting new node and root node
    //Node* root2 = root;
    // base case
    if(root == NULL) {
        root = createNode(value);
        return root;
    }

    // recursion for left
    if(value < root->data) {
        root->left = insert(root->left, value);
    }
  
    // obj name of root, root(obj) has nodePte var called left
    
    // recursion for right
    if(value > root->data ) {       // root is the node that we're at
        root->right = insert(root->right, value);
    }
    return root;
}

Node* search(Node* root, int value) {
    /* TODO: search the tree for the given value. You must use the BST property. */
    // search tree until yay u find the value or nay u dont find the value
   
    // base case: don't find value-searched whole tree value is NOT in that bitch
    if(root == NULL) {
        return root;        // same as just returning NULL
    }
    // yay found the value:
    if(root->data == value) {
        return root;   
    }

    // searching left
    if(root->data > value) {
        search(root->left, value);
    }

    // searching right
     if(root->data < value) {
        search(root->right, value);
    }
}

void inOrderTraversal(Node* root) {
    /* TODO: traverse the tree in order to print values in ascending order. */
    // in order: smallest to biggest
    // three lines one is print,one to go left, one to go right

    // base case
    if(root == NULL)        // reached the end of the tree
    {
        return;             // func is of type void so you return nothing
    }

    // left
    inOrderTraversal(root->left);
    // print
    printf("%d ", root->data);             // printing the node that we're at
    // right
    inOrderTraversal(root->right);
}

void freeTree(Node* root) {
    /* TODO: free any allocated memory */
    // however many times u call malloc you should call free same amount of times
    // traverse down tree recursively-check left keep checking until NULL(nothing there)
    // check right side if NULL then clear memory. traverse back up. do same thing until entire tree is cleared

    if(root != NULL) {              // base case
        freeTree(root->left);       // traverse to left
        freeTree(root->right);      // traverse to right
        free(root);                 // free memory in root
        //return;
    }
    // if root is NULL inplied- u don't need to do anything
    
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
