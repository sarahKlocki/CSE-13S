#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[101];
    printf("Enter a string (max 100 characters): ");

    /* TODO: read an input string until the new-line character is read.
             remove the new line character and check if the string is a palindrome.
             your check should ignore all non alpha-numeric characters and case-sensitivity.
             print if the string is a palindrome or not.
             your print statements should match the sample output prints shown in the pdf. */
    
        gets(str);                              // reads input string until new-line char is read
        char basedString[101];                  // yay creating filter string
        int i = 0;                              // counter for og string
        int j = 0;                              // 
        while(str[i] !='\0')                    // going thru string
        {
             if(isalnum(str[i]))            // checking that the char is alphanumeric
             {
                basedString[j] = tolower(str[i]);            // okay yay alphanum convert it to lowercase
                j++;
             }
             i++;                                // increment so it actually iterates through the string
        }
        basedString[j] = '\0';

        // check if palindrome
        int k = j;
        for(int i = 0; i<k/2; i++)
        {
            if(basedString[i] != basedString[j-1])
            {
                printf("The string is not a palindrome.\n");
                return 0;
            }
            j--;
        }
    printf("The string is a palindrome.\n");
    return 0;
}
