
/* 
USTEDA MEMORIJE.
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(void)
{
    //deklaracija
    char *text;
    //alociranje memorije
    text = malloc( sizeof(char) * 50);

    //uzmi ime i prezime od korisnika
    printf("Unesi ime i prezime-> ");
    gets(text);

    //prikazi koliko memorije sada zauzima text(u bajtovima)
    printf("Kolicina sada zauzete memorije je %d bajtova.\n", sizeof(char) * 50);

    //“START“. realociraj memoriju
    text = realloc( text, sizeof(char) * (strlen(text) + 1));

    //nova kolicina memorije je
    printf("Posle realociranja memorije ona zauzima %d bajtova!\n", sizeof(char) * (strlen(text)+1));
}