#include <stdlib.h>
#include <stdio.h>

#define MAX 50

int main() {

    FILE *fp;
    int data, count, array[MAX];
    long offset;

    for (count = 0; count < MAX; count++) /*init array*/
        array[count] = count * 10;

    if ( (fp = fopen("RANDOM.DAT", "wb")) == NULL) { /* Otvori binarni file za pisanje. */
        fprintf(stderr, "\nError opening file.");
        exit(1);
    }

    if ( (fwrite(array, sizeof(int), MAX, fp)) != MAX) {  /* Upisi niz u file, onda ga zatvori. */
        fprintf(stderr, "\nError writing data to file.");
        exit(1);
    }
    fclose(fp);

    if ( (fp = fopen("RANDOM.DAT", "rb")) == NULL) {
        fprintf(stderr, "\nError opening file.");
        exit(1);
    }

/* Pitaj korisnika koji element da se procita. Unesi element i prikazi ga, izlaz kada je uneseno -1. */
    while (1) {
        printf("\nEnter element to read, 0-%d, -1 to quit: ",MAX-1);
        scanf("%ld", &offset);

        if (offset < 0)
            break;
        else if (offset > MAX-1)
            continue;

        /* Pomjeri indikator pozicije na navedeni element. */
        if ( (fseek(fp, (offset*sizeof(int)), SEEK_SET)) != 0) {
            fprintf(stderr, "\nError using fseek().");
            exit(1);
        }

        /* Procitaj u jednom integer-u. */
        fread(&data, sizeof(int), 1, fp);
        printf("\nElement %ld has value %d.", offset, data);
    }

    fclose(fp);

    return 0;
}