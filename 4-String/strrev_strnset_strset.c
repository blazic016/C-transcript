/*
strrev(), strset() i strnset() nisu dio ANSI C standardne biblioteke.
Ove funkcije mijenjaju sve karaktere (strset()), ili navedeni broj karaktera (strnset()), u stringu na navedeni karakter.
char *strset(char *str, int ch);
char *strnset(char *str, int ch, size_t n);
Funkcija strset() mijenja sve karaktere u str na ch izuzev null terminirajućeg karaktera.
Funkcija strnset() mijenja prvih n karaktera od str na ch.
Ako n>=strlen(str), strnset() mijenja sve karaktere u str.
*/

#include <stdio.h>
#include <string.h>

char str[] = "This is the test string.";

int main() {
    printf("\nThe original string: %s", str);
    printf("\nCalling strrev(): %s", strrev(str));
    printf("\nCalling strrev() again: %s", strrev(str));
    printf("\nCalling strnset(): %s", strnset(str, 'A', 5));
    printf("\nCalling strset(): %s", strset(str, '!'));

    return 0;
}