#include <stdio.h>

void merge_sort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    merge_sort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void merge_sort(int arr[], int left, int right) {
    /* TODO: Implement merge sort by using divide and conquer recursively. This function should call the merge sub-routine. */ 
    if(left<right)         
    {
        int mid == (left + right)/2
        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

void merge(int arr[], int left, int mid, int right) {
    /* TODO: Implement the merge logic. */
    int sizeLeft = mid - left+1;
    int sizeRight = right - mid;
    l[sizeLeft+1];            // left array
    r[sizeRight+1];           // right array
    for(int i = 0; i<sizeLeft; i++)
    {
        l[i] =arr[left + i -1];
    }
    for(int i=1; i< sizeRight; i++)
    {
        r[i] =arr[right + i -1];
    }
    int i = 1;
    int j = 1;
    int k = left;

   while(i<a && j < b)
   {
    if(l[i]<= r[j])
    {
        arr[k] = l[i];
        i++;
    }
    else{
        arr[k] = r[j];
        j++;
    }
    k++;
   }

   while(i< a)
   {
    arr[k] = l[i];
    i++;
    k++;
   }
   while(j<b)
   {
    arr[k] = r[j];
    k++;
    j++;
   }

}
