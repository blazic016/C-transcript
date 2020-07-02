/*
strcspn() traži jedan string za prvo pojavljivanje bilo kojih od karaktera u drugom stringu.
    size_t strcspn(char *str1, char *str2);
    strcspn() počinje pretragu sa prvim karakterom od str1, gledajući na bilo koji od pojedinačnih karaktera koji su sadržani u str2.
    Ako funkcija pronađe poklapanje (match), ona vraća offset (pomak) sa početka od str1,
    Ako funkcija ne pronađe poklapanje, strcspn() vraća vrijednost od strlen(str1).
*/

#include <stdio.h>
#include <string.h>

int main() {
    char buf1[80], buf2[80];
    size_t loc;

    printf("Enter the string to be searched: ");
    gets(buf1);
    printf("Enter the string containing target characters: ");
    gets(buf2);

    loc = strcspn(buf1, buf2);

    if ( loc == strlen(buf1) )
        printf("No match was found.");
    else
        printf("The first match was found at position %d.\n", loc);


    /*TRAZI PRVO NEPOKLAPANJE*/
    printf("Enter the string to be searched: ");
    gets(buf1);
    printf("Enter the string containing target characters: ");
    gets(buf2);

    loc = strspn(buf1, buf2);

    if ( loc == 0 )
        printf("No match was found.\n");
    else
        printf("Characters match up to position %d.\n", loc-1);

/* na primer:
Enter the string to be searched: How now Brown Cow?
Enter the string containing target characters: How now what?
Characters match up to position 7.
*/

    return 0;
}