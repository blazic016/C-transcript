/*
Funkcija strcmp() upoređuje dva stringa, karakter po karakter.
Određivanje “veći” i “manji” se obavlja sa ASCII koodovima karaktera.
Prototip: int strcmp(char *str1, char *str2);
<0 str1 manji od str2
0 isti su
>0 str1 veci od str2
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[80], str2[80];
    int x;

    while(1) {
        printf("\n\nInput the first string, a blank to exit: ");
        gets(str1);
        if ( strlen(str1) == 0 )
            break;
        printf("\nInput the second string: ");
        gets(str2);
        x = strcmp(str1, str2);

        printf("\nstrcmp(%s,%s) returns %d", str1, str2, x);
    }

    return 0;
}