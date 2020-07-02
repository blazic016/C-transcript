/*
prototip:
    char *strcat(char *str1, char *str2);
Dodaje str2 na kraj od str1, pomjerajući terminirajući null karakter na kraj novog stringa.
Morate alocirati dovoljno prostora za str1 da drži rezultirajući string.
*/

#include <stdio.h>
#include <string.h>


char str1[27] = "a";
char str2[2];

int main() {
    int n;

    str2[1] = '\0';

    for (n = 98; n< 123; n++) { /* ASCII kood za slova od b do z su 98 do 122. */
        str2[0] = n;
        strcat(str1, str2);
        puts(str1);
    }

    return 0;
}