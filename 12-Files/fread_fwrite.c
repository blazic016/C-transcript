#include <stdlib.h>
#include <stdio.h>

#define SIZE 20

int main() {
    int count, array1[SIZE], array2[SIZE];
    FILE *fp;

    for (count = 0; count < SIZE; count++) /*init array*/
        array1[count] = 2 * count;

    if ( (fp = fopen("direct.txt", "wb")) == NULL) { /* binnary mode file*/
        fprintf(stderr, "Error opening file.");
        exit(1);
    }

    if (fwrite(array1, sizeof(int), SIZE, fp) != SIZE) { /*save array1 to file*/
        fprintf(stderr, "Error writing to file.");
        exit(1);
    }

    fclose(fp);

    if ( (fp = fopen("direct.txt", "rb")) == NULL) { /*open direrct.txt for reading in binnary mode */
        fprintf(stderr, "Error opening file.");
        exit(1);
    }


    if (fread(array2, sizeof(int), SIZE, fp) != SIZE) { /* save data in array2*/
        fprintf(stderr, "Error reading file.");
        exit(1);
    }

    fclose(fp);

    for (count = 0; count < SIZE; count++) /*print arrays*/
        printf("%d\t%d\n", array1[count], array2[count]);
    

    return 0;
}