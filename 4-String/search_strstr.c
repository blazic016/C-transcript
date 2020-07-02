/*
funkcija traži prvo pojavljivanje jednog stringa unutar drugog, i traži cijeli string, a ne pojedinačne karaktere unutar stringa.
char *strstr(char *str1, char *str2);
Funkcija strstr() vraća pointer na prvo pojavljivanje str2 unutar str1.
Ako ne pronađe poklapanje, funkcija vraća NULL.
Ako je dužina od str2 0, funkcija vraća str1.
Kada strstr() pronađe poklapanje, vi možete dobiti offset (pomak) od str2 unutar str1 sa oduzimanjem pointera, kako je objašnjeno ranije za strchr().
Poklapajuće procedure koje strstr() koristi su osjetljive na veličinu slova.
*/

#include <stdio.h>
#include <string.h>


int main() {
    char *loc, buf1[80], buf2[80];
    printf("Enter the string to be searched: ");
    gets(buf1);
    printf("Enter the target string: ");
    gets(buf2);

    loc = strstr(buf1, buf2);
    if ( loc == NULL )
        printf("No match was found.\n");
    else
        printf("%s was found at position %d.\n", buf2, loc-buf1);

    return 0;
}