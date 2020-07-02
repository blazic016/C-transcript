/*
strrchr() je indentična sa strchr(), osim što ona pronalazi (traži) string za posljednje pojavljivanje navedenog karaktera u stringu.
char *strrchr(char *str, int ch);
    strrchr() vraća pointer na zadnje pojavljivanje od ch i NULL ako ga ne pronađe.

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

    loc = strrchr(buf, ch);

    if ( loc == NULL )
        printf("The character %c was not found.", ch);
    else
        printf("The character %c was found at position %d.\n", ch, loc-buf);

    return 0;
}