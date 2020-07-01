#include <stdlib.h>
#include <stdio.h>

#define BUFLEN 6

char msg[] = "abcdefghijklmnopqrstuvwxyz";

int main() {
    FILE *fp;
    char buf[BUFLEN];

    if ( (fp = fopen("TEXT.TXT", "w")) == NULL) {
        fprintf(stderr, "Error opening file.");
        exit(1);
    }

    if (fputs(msg, fp) == EOF) {
        fprintf(stderr, "Error writing to file.");
        exit(1);
    }

    fclose(fp);

    if ( (fp = fopen("TEXT.TXT", "r")) == NULL) { /*open read*/
        fprintf(stderr, "Error opening file.");
        exit(1);
    }

    printf("\nImmediately after opening, position = %ld", ftell(fp));

    /* read 5 characters */
    fgets(buf, BUFLEN, fp);
    printf("\nAfter reading in %s, position = %ld", buf, ftell(fp));

  /* read next 5 characters */
    fgets(buf, BUFLEN, fp);
    printf("\n\nThe next 5 characters are %s, and position now = %ld",
    buf, ftell(fp));

    /* Rewind stream. */
    rewind(fp);
    printf("\n\nAfter rewinding, the position is back at %ld", ftell(fp));

    /* read in 5 characters */
    fgets(buf, BUFLEN, fp);
    printf("\nand reading starts at the beginning again: %s\n", buf);
    fclose(fp);

    return 0;
}