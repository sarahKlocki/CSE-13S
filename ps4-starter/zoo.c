#include <stdio.h>
#include <string.h>

#define MAXN 100

typedef struct {
    char name[50];
    char species[50];
    int age;
    float weight;
} Animal;

int has_b(const char *s) {

    /* TODO: Return true (1) if the name s has the character 'b' in it. Otherwise, return false (0). 
             The strchr() function may come in handy. Use the man page to understand how it works. */
    
    int i = 0;
    while(s[i] != '\0') {
        if(s[i] == 'b')
        {
            return 1;
        }
        i++;
    }
    return 0;
}

int should_keep(Animal *a) {
    /* TODO: Return true (1) if the animal meets the filtering criteria. Otherwise, return false (0). */

    if(has_b(a->name) == 1 || a->age > 15 || a->weight > 200.0) {
        return 1;
    }
    else {
        return 0;
    }
}

int compare_animals(Animal *A, Animal *B) {
    /* TODO: Compare animals pointed to by A and B based on the sorting criteria.
    Return 0 if the animal pointed to by A is equal to the animal pointed to by B.
    Return a negative value if the animal pointed to by A is smaller than the animal pointed to by B.
             Else, return a positive value. */
    int cmpSpecies = strcmp(A->species, B->species);
    int cmpName = strcmp(A->name, B->name);

    if(cmpSpecies != 0) {                                 // if theyre different
        return cmpSpecies;
    }
    if(A->age != B->age) {          // age
        return A->age - B->age;     // is this legal??
    }
        return cmpName;        
}

void sort_animals(Animal *arr, int size) {
    /* TODO: Sort the animals stored in the array arr using Bubble Sort. 
             Your implementation must call the function compare_animals(). */
    // bubble sort: check first and second-swap if needed
    // check second and third-swap if needed
    // cont. that
    // then reiterate through total size -1 each time until its all sorted
    
    // loop for size of array

    //size=0;
    //while(arr[size]!='\0') {
    //  size++;
    //}


    // outer loop: number of times we go thru array
    for(int i=0; i<size; i++) {             // not int i to Animal i  
        // inner loop: goes thru the array and swaps
        for(int j=0; j<size-i-1; j++) {   // nothing to the right of last one to compare to
            //if(arr[j]>arr[j+1]) {        // not in proper order (one on left > than one on right)
            //if(compare_animals(Animal *A, Animal *B)) {
            if(compare_animals(&arr[j], &arr[j+1])>0) { // whats being swapped. right > left, swap
                Animal tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }          
        } 

    }
}

int main() {
    int n;
    printf("Enter the number of animals: ");
    scanf("%d", &n);

    Animal animals[MAXN], filtered[MAXN];
    int filtered_count = 0;

    /* Read info for n animals from the user */
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %f", animals[i].name, animals[i].species, &animals[i].age, &animals[i].weight);
    }

    /* Input animals */
    printf("\n");
    printf("Input animals: \n");
    for (int i = 0; i < n; i++) {
        printf("%s %s %d %.2f\n", animals[i].name, animals[i].species, animals[i].age, animals[i].weight);
    }
    printf("\n");
    
    /* Filter the animals based on the given criteria */
    for (int i = 0; i < n; i++) {
        if (should_keep(&animals[i])) {
            filtered[filtered_count++] = animals[i];
        }
    }

    /* Sort the filtered animals and print them */
    sort_animals(filtered, filtered_count);

    /* Filtered and sorted animals */
    printf("Filtered and Sorted animals: \n");
    for (int i = 0; i < filtered_count; i++) {
        printf("%s %s %d %.2f\n", filtered[i].name, filtered[i].species, filtered[i].age, filtered[i].weight);
    }

    return 0;





}
