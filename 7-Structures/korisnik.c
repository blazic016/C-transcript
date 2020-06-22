#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//napravi(definisi) novi tip podatka( strukturu)
struct Osoba_st {
int god;
char ime[25];
char prezime[25];
};



void main(void)
{
    //deklarisi promenljivu tipa Osoba_st
    struct Osoba_st korisnik;

    //deklarisi "obicnu" promenljivu tipa INT

    //uzmi podatke i smesti ih u promenljivu "korisnik"
    printf("Unesi Ime: ");
    scanf("%s", &korisnik.ime);

    printf("Unesi Prezime: ");
    scanf("%s", &korisnik.prezime);

    printf("Unesi godiste: ");
    scanf("%d", &korisnik.god );

    printf("%s %s %d", korisnik.ime, korisnik.prezime, korisnik.god);   
}