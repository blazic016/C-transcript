/*
Prototip:
    char *strncat(char *str1, char *str2, size_t n);
Bibliotečna funkcija strncat() takođe obavlja string concetenation-aciju (append), ali vam dozvoljava da
navedete koliko karaktera iz izvornog stringa se dodaje na kraj odredišnog stringa.
Vi morate alocirati dovoljno prostora za str1 da drži rezultirajući string. Funkcija vraća pointer na str1.
*/

#include <stdio.h>
#include <string.h>

char str2[] = "abcdefghijklmnopqrstuvwxyz";

int main() {
    char str1[27];
    int n;

    for (n=1; n< 27; n++) {
        strcpy(str1, "");
        strncat(str1, str2, n);
        puts(str1);
    }

    return 0;
}