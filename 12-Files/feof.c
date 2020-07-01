#include <stdlib.h>
#include <stdio.h>

#define BUFSIZE 100

int main() {
    char buf[BUFSIZE];
    char filename[60];
    FILE *fp;

    puts("Enter name of text file to display: ");
    gets(filename);

    if ( (fp = fopen(filename, "r")) == NULL) { /* read text file*/
        fprintf(stderr, "Error opening file.");
        exit(1);
    }

    /*Sve dok ne dodje do kraja, citaj liniju i prikazi je. FEOF vraca 0 ako nije doslo do kraja. FEOF vraca nenula vrednost kad dodje na kraj. */
    while ( !feof(fp) ) {
        fgets(buf, BUFSIZE, fp);
        printf("%s",buf);
    }
    fclose(fp);

    return 0;
}