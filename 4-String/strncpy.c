/*
strncpy()  je slična sa strcpy(), izuzev što vam strncpy() dopušta da navedete koliko karaktera da kopirate.

prototip:
char *strncpy(char *destination, char *source, size_t n);
    destination - pointer na odrediste
    source      - pointer na izvor
    n - max broj karaktera koji ce da se kopira, ako je source duzi od n onda se ne dodaju terminator \0  
*/

#include <stdio.h>
#include <string.h>

char dest[] = "..........................";
char source[] = "abcdefghijklmnopqrstuvwxyz";

int main() {
    size_t n;

    while (1) {
        puts("Enter the number of characters to copy (1-26)");
        scanf("%d", &n);
        if (n > 0 && n< 27)
            break;
    }

    printf("\nBefore strncpy destination = %s", dest);

    strncpy(dest, source, n);
    printf("\nAfter strncpy destination = %s\n", dest);

    return 0;
}

/* NAPOMENA
Budi siguran da broj karaktera kopiranih ne pređe alociranu veličinu odredišta !!!
*/