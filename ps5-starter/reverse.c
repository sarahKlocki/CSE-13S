/* Reversing an array using pointers */

#include <stdio.h>

void reverseArray(int *arr, int size) { // arr is a ptr to an array
    /* TODO: reverse the array arr using pointers */
    int tmpValue;               // tmp value to store variables while reversing
    int *left = arr;            // deref array, get 0 index
    int *right = arr + size -1; // size-1 bc array is 0

    for(int i = 0; i < size/2; i++)
    {
        // same shit as palindrome
        // last from size -> tmpVar
        // first from array -> 
        tmpValue = *left;            // first digit is in tmp
        *left = *right;             // value in left is now value of right
        *right = tmpValue;          // right is not whatever was in the tmp(not a ptr)
        
        left++;
        right--;
    }
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for(int i=0; i< n; i++) {
        scanf("%d", arr+i);
    }

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, n);    

    printf("Reversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}




// Pointer notes
// Memory: address and value
// Address: location of the memory- where it lives (stack)
// Value: the data stored at that location(what mem lives there)
// ptr is just a value that happens to be an address
// by setting the value of one variable equal to  the addy of another, that variable now points to the other
// 
// Syntax:
// 


//ex.
// Addy             Value
// 0x1000           0x4             int x = 4;
// 0x1004           0x1000          int *px = &x            // lives at 0x1004, value is 0x1000

// int x = 4;           // integer(4 bytes) named x is set to the value 4
// int * pX = &x;       // integer(4 bytes) pointer named pX is set to the address of x

// by using the ptr, we can access the variable(X) by reference instead of by value
// ex. copying value of x to a new var through use of a ptr:
// int y = *pX;
// int y (normal int) is set to the thing pointed to by pX


// * placed next to a type: modifies the type-variable is now a pointer to an integer eg. int * pX (will modify the int)
// in the above ex, the * points to a 4 byte value
// when * is not placed next to a type, its dereerencing eg. int y = *pX;
    // dereferencing: go to the addy being pointed to by the pointer and grab that value
// from the entire ex. int y = *pX; the deref will grab the value of x and set y equal to that
// can pass around x by reference instead of value


// array: collection of similar types of data
// printing out all variables of 


