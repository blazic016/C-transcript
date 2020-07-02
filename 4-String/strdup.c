/*
strdup() je slična sa strcpy(), osim sto strdup() obavlja vlastitu alokaciju memorije za odredisni string sa pozivom malloc.

Prototip: char *strdup( char *source );
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char source[] = "The source string.";

int main() {
    char *dest;

    if ( (dest = strdup(source)) == NULL){  /* strdup() vraca NULL ako memorija ne moze biti alocirana*/
        fprintf(stderr, "Error allocating memory.");
        exit(1);
    }
    
    printf("The destination = %s\n", dest);

    return 0;
}