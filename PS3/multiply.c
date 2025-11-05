// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n, m;   // sore the size of a
    printf("Enter the number of rows and columns for matrix a: ");
    /* TODO: read the size of a */
    scanf("%d %d", &n, &m);
    
    int p, q;       // store the size of b
    printf("Enter the number of rows and columns for matrix b: ");
    scanf("%d %d", &p, &q);
    
    int a[n][m], b[p][q], c[n][q];
    //c[n][q]=0;
    
    // check if sizes are compatible
    if(m!=p)
    {
        printf("The given matrix sizes are not compatible!\n");
        return -1;
    }
    // holds num of values in ea array
    int matA = n*m;
    int matB = p*q;

    // matrix A reading
    printf("Enter %d values for matrix a: ", matA);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    // matrix B reading
    printf("Enter %d values for matrix b: ", matB);
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    // matrix A printing
    printf("Matrix a:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", a[i][j]);
            //printf(" ");
        }
        printf("\n");
    }
    
    // matrix B printing
    printf("Matrix b:\n");
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            printf("%d ", b[i][j]);
            //printf(" ");
        }
        printf("\n");
    }
    
    // matrix math
    printf("Matrix c:\n");
    for(int i=0; i<n; i++)      // iterates through matrix A rows
    {
        //printf("Outer\n");
        for(int j=0; j<q; j++)  // iterates through matrix B columns
       {
          //c[i][j]=0;            // clearing it(j is now defn)
          //printf("Middle\n");
           for(int k=0; k<m; k++)  // iterate throughh matA col(same as p-matB rows)
           {
               //printf("Inner\n");
               c[i][j]+= a[i][k] * b[k][j];
           }
           printf("%d ", c[i][j]);
       }
       printf("\n");
    }
    return 0;
}