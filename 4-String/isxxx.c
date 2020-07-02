/* isxxxx() makroi.
isalnum() Vraća TRUE ako je ch slovo ili broj.
isalpha() Vraća TRUE ako je ch slovo.
isascii() Vraća TRUE ako je ch standardni ASCII karakter (između 0 i 127).
iscntrl() Vraća TRUE ako je ch kontrolni karakter.
isdigit() Vraća TRUE ako je ch broj (digit).
isgraph() Vraća TRUE ako je ch printajući karakter (svi osim space).
islower() Vraća TRUE ako je ch malo slovo.
isprint() Vraća TRUE ako je ch printajući karakter (uključujući space).
ispunct() Vraća TRUE ako je ch karakter punktacije.
isspace() Vraća TRUE ako je ch bijeli-znak karakter (space, tab, vertical tab, line feed, form feed, ili carriage return).
isupper() Vraća TRUE ako je ch veliko slovo.
isxdigit() Vraća TRUE ako je ch hexadecimalni broj (digit (od 0 do 9, a do f, A do F)).
*/

#include <stdio.h>
#include <ctype.h>

int get_int(void);

int main() {
    int x;
    x = get_int();
    printf("You entered %d.\n", x);
    return 0;
}

int get_int(void) {
    int ch, i, sign = 1;
    while ( isspace(ch = getchar()) ) /* Preskoci space*/
    ;

    /* Ako je prvi karakter nenumericki, onda unget  karakter i vrati 0. */
    if (ch != '-' && ch != '+' && !isdigit(ch) && ch != EOF) {
        ungetc(ch, stdin);  
        /* funkcija “ungets”, ili vraća, karakter na navedeni stream. Ovaj vraćeni karakter je prvi unos sljedeći put kada program čita karakter sa stream-a.
        Ovo je neophodno zato što, kada funkcija get_int() pročita nenumerički karakter sa stdin, 
        vi želite da stavite karakter nazad u slučaju da program treba da ga pročita kasnije.*/
        return 0;
    }

    /* Ako je prvi karakter znak minus, postavi znak prigodno (sign accordingly). */
    if (ch == '-')
        sign = -1;

    /* Ako je prvi karakter plus ili minus znak, uzmi (get) sljedeći karakter. */
    if (ch == '+' || ch == '-')
        ch = getchar();

    /* Citaj karaktere dok se ne unese nebroj. Pridruzi vrijednosti, pomnozene sa prigodnom vrijednosti dignutom na 10, sa i. */
    for (i = 0; isdigit(ch); ch = getchar() )
        i = 10 * i + (ch - '0');

    /* Make result negative if sign is negative. */
    i *= sign;

    /* Ako EOF nije susretnut, nebroj karakter mora da je procitan, tako da ga unget. */
    if (ch != EOF)
        ungetc(ch, stdin);
    
    return i; /* Vrati unesenu vrijednost. */
}