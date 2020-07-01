#include <stdio.h>

int main() {
    char buffer[10], *c;

    tmpnam(buffer); /* smesta privremeno ime u karakterni niz, buffer. */

    c = tmpnam(NULL);  /* pridružuje karakterni pointer na ime vraćeno od tmonam() na c. */


    printf("Temporary name 1: %s", buffer);
    printf("\nTemporary name 2: %s\n", c);



    return 0;
}