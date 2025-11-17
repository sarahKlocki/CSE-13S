/* Reversing an array using pointers */

#include <stdio.h>

void reverseArray(int *arr, int size) { // arr is a ptr to an array
    /* TODO: reverse the array arr using pointers */
    int tmpValue;               // tmp value to store variables while reversing
    int *left = arr;            // deref array, get 0 index
    int *right = arr + size -1; // size-1 bc array is 0

    for(int i = 0; i < size/2; i++)
    {
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