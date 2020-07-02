#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char source[] = "The source string.";

int main() {
    char dest1[80];
    char *dest2, *dest3;

    printf("\nsource: %s", source );

    strcpy(dest1, source); /*dest1 ima 80 bajta alociranog prostora. */
    printf("\ndest1: %s", dest1);

    /* za kopiranje na dest2, najpre moramo alocirati prostor*/
    dest2 = (char *)malloc(strlen(source) +1);
    strcpy(dest2, source);
    printf("\ndest2: %s\n", dest2);

    /* Bez alociranja prostora bi moglo prouzrokovati ozbiljne probleme.*/
    //strcpy(dest3, source);


    return 0;
}