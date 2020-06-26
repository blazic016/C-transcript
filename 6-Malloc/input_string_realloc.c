#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    char buf[80];
    char *message;
    puts("Enter a line of text: ");
    gets(buf);

    message = realloc(NULL, strlen(buf)+1 ); /* Inicijalna alokacija. */
    strcpy(message, buf);
    printf("%s",message);
    //puts(message);

    puts("\nEnter a another line of text: ");
    gets(buf);

    message = realloc(message, strlen(message)+1 + strlen(buf)+1 ); /* Povecaj alokaciju, i apenduj string na prethodni */
    strcat(message, buf);
    printf("%s",message);
    //puts(message);

    free(message);

    return 0;
}