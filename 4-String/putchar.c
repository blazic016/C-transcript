#include <stdio.h>

#define MAXSTRING 80

int main() {
    int count;
    for (count = 14; count < 128; ) /*karakteri sa ASCII vrijednostima između 14 i 127.*/
        putchar(count++);
    printf("\n");

    /*Prikaz stringa sa putchar*/
    char message[] = "Displayed with putchar.";
    for (count = 0; count < MAXSTRING; count++) {
        if (message[count] == '\0') {
            putchar('\n');
            break;
        } else { /* Ako se ne nadje kraj stringa, prikazi sledeci karakter.*/
            putchar(message[count]); 
        }
    }


    return 0;
}