#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

/*
Ovaj program koristi niiz pointera na stringove, vi možete “sortirati” stringove tako što im sortirate niiz pointera.
Ovoj funkciji su prosljeđeni pointeri na dva predmeta u niizu u kojem se uporedjuju.
Svaki argument na comp() je pointer na element niza, i zato što je svaki element niza sam po sebi pointer (na string), argument je tako pointer na pointer.


*/



int comp(const void *s1, const void *s2);

int main() {
    char *data[MAX], buf[80], *ptr, *key, **key1;
    int count;

    printf("Enter %d words, pressing Enter after each.\n",MAX);

    for (count = 0; count < MAX; count++) {
        printf("Word %d: ", count+1);
        gets(buf);
        data[count] = malloc(strlen(buf)+1);
        strcpy(data[count], buf);
    }

    qsort(data, MAX, sizeof(data[0]), comp);   /* Sortiraj reci (u stvari, sortiraj pointere). */


    for (count = 0; count < MAX; count++) { /* Prikazi sortirane reci. */
        printf("\n%d: %s", count+1, data[count]);
    }
 
    printf("\n\nEnter a search key: ");    /* Get a search key */
    gets(buf);

    /* Obavi pretrazivanje. Prvo, napravi key1 kao pointer */
    /* na pointer na ključ (key) za pretrazivanje.*/
    key = buf;
    key1 = &key;
    ptr = bsearch(key1, data, MAX, sizeof(data[0]), comp);
    if (ptr != NULL)
        printf("%s found.\n", buf);
    else
        printf("%s not found.\n", buf);
    return(0);

}




int comp(const void *s1, const void *s2) {  /*argumenti koji su prosljeđeni ka comp() su pointeri na pointere,*/
    return (strcmp(*(char **)s1, *(char **)s2));
}