      /* Getting the frequency of leading digits */

#include <stdio.h>

int getMSDigit(int x) {
   
   while(x>10)              // if the number >10, thats 2 digits not the leading one
   {
       x=x/10;              // will div x by 10 until there's a single digit
   }
       return x;            // will return the single digit which is the first one
   /* TODO: extract the leading digit of integer x and return it */
}

int main() {
   /* TODO: 
    * Read input from the stdin till EOF
    * For each integer, obtain the leading digit
    * Calculate the frequencies of the leading digits
    * Print the frequencies on stdout */
    int num;
    int lead[10]={};                           // creating an array to store 0-9-leading digits
    //scanf("%d", &num);
    while(scanf("%d", &num)==1)                 // reads in the number as long as its valid(>=0)
    {
        //printf("whileloop\n");
        if(num>=1)
        {
            int ld=getMSDigit(num);                  // call the function to extract first digit
            lead[ld]++;                              // increment number of leading digits
        }
        // once it goes through get MSDigit, ld = the returned x
        // do some shit right here so that the first digit is counted and incremented
    }
    for(int i=0; i<=9; i++)                     // i represents numbers 0-9
    {
        printf("%d:%d ", i, lead[i]);
    }
    return 0;
}
