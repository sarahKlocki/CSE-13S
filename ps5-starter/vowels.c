/* Counting the number of vowels in a string */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int countVowels(char *str) {
    /* TODO: return the number of vowels in the string str */

}

int main() {
    int n;
    printf("Enter the maximum length of the string: ");
    scanf("%d", &n);

    char *str;  //pointer to the string
    int vowelCount; //variable to store the number of vowels

    /* TODO: Allocate memory to store the string. 
             If allocation is successful, then read a string and call count the number of vowels. 
                You can use fgets to read the string from stdin. Look up the man page for its syntax.
                You may wish to consume any leftover newline character before reading your string using scanf(" ");
             If allocation is not successful, print "Memory allocation failed!" and exit with a return value of 1
             Tip: do not forget to free any memory that you allocated.
              */
             

    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}
