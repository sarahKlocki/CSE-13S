#include <stdlib.h>
#include <stdio.h>

/* This function copies integers from file infp to file outfp. */
int copy_integers(FILE *outfp, FILE *infp, int start, int end)
{
    /* TODO: Copy integers from start to end. 
	     You may like to use the functions fseek(), fread() and fwrite() to accomplish this task. Check man pages for details.
	     Return 0 upon successful completion. Otherwise, return -1. */	

        int intValue;       // stores the int that we read
       
        if(fseek(infp, start* sizeof(int), SEEK_SET) != 0) {
            perror("problem with fseek");
            return -1;
        }
        for(int i = start; i <=end; i++) {
            // read ints in the file into your variable
            if(fread(&intValue, sizeof(int), 1, infp) != 1) {
                perror("problem with fread");
                return -1;
            }
            // buffer: intValue
            // size_t size: sizeof(int)
            // size_t count: i (index)
            // file: infp
            if(fwrite(&intValue, sizeof(int), 1, outfp) != 1) {
                perror("problem with fwrite");
                return -1;
            }
            // string: intValue
            // size_t size: sizeof(int)
            // size_t nmemb: 1    // only asking for 1 number going thru loop
            // file: outfp
        }
        
        return 0;
}

int main(int argc, char *argv[])
{
    if (argc < 4) {
        printf("Usage: %s <input-filename> <output-filename> range [range ..]\n", argv[0]);
        return -1;
    }

    FILE *infp, *outfp;

    /* TODO: Open the input and output files for read and write operations respectively. If the operations fail, return -1. */
    //infp = fopen(argv[1], "rb");     // returns NULL if file doesn't exist
    infp = fopen(argv[1], "rb");
    if(infp == NULL) {
        perror("Cannot open input file to read");
        //fclose(infp);
        return -1;
   }
   
    //outfp = fopen(argv[2], "wb");
    outfp = fopen(argv[2], "wb");
    if(outfp == NULL) {
        perror("Cannot open output file to write");
        fclose(infp);
       return -1;
    }

    for (int i=3; i<argc; i++) {
        int start, end;
        if (sscanf(argv[i], "%d-%d", &start, &end) != 2) {
            if (sscanf(argv[i], "%d", &start) != 1) {
		printf("Invalid range!\n");
		return -1;
	    } 
            end = start;
        }

        if (start < 0 || end < 0 || end < start) {
	  printf("Start and end must be >= 0 and start must be <= end\n");
	  return -1;
	}
        if (copy_integers(outfp, infp, start, end)) {
	  printf("copy_integers() returned an error.\n");
	  return -1;
	}
    } 

    /* TODO: Close the files. If the operations fail, return -1. */
    //if(fclose (&argv[1]!= 0))
    if(fclose(infp) != 0) {
        perror("Cannot close input file");
        return -1;
    }

    //if(fclose (argv[2]!= 0)) {
    if(fclose(outfp) != 0) {
        perror("Cannot close output file");
        return -1;
    }
    return 0;
}
