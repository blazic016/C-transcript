/*
strchr() funkcija pronalazi pojavljivanje navedenog karaktera u stringu.
char *strchr(char *str, int ch);
    traži str s lijeva na desno dok se ne nađe karakter ch ili se ne nađe null terminirajući karakter.
    Ako je ch pronađen, pointer na njega je vraćen. Ako ne, vraća se NULL.
 */
 
#include <stdio.h>
#include <string.h>

int main() {
    char *loc, buf[80];
    int ch;

    printf("Enter the string to be searched: ");
    gets(buf);

    printf("Enter the character to search for: ");
    ch = getchar();

    loc = strchr(buf, ch);

    if ( loc == NULL )
        printf("The character %c was not found.", ch);
    else
        printf("The character %c was found at position %d.\n", ch, loc-buf);

    return 0;
}