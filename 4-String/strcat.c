#include <stdio.h>
#include <string.h>
void main(void)
{
    //deklaracija promenljivih
    char rec1[50];

    //dodeli vrednost promenljivoj rec1
    strcpy(rec1, "trivijalni tekst.");
    
    //dodaj jos teksta promenljivoj rec1
    strcat(rec1, " I jos jedan!");
    printf("Rec1 je -> %s\n", rec1);
}