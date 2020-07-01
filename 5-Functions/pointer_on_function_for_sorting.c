#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAXLINES 25

int get_lines(char *lines[]);
void sort(char *p[], int n, int sort_type);
void print_strings(char *p[], int n);
int alpha(char *p1, char *p2);
int reverse(char *p1, char *p2);

char *lines[MAXLINES];

int main() {
    int number_of_lines, sort_type;
    number_of_lines = get_lines(lines);  /* Ucitaj linije sa tastature. */

    if ( number_of_lines < 0 ) {
        puts("Memory allocation error");
        exit(-1);
    }

    puts("Enter 0 for reverse order sort, 1 for alphabetical:" );
    scanf("%d", &sort_type);

    sort(lines, number_of_lines, sort_type);

    print_strings(lines, number_of_lines);

    return 0;
}




int get_lines(char *lines[]){
    int n = 0;
    char buffer[80]; /* Privremeno smjestanje za svaku liniju. */
    puts("Enter one line at time; enter a blank when done.");
    while ((n < MAXLINES) && (gets(buffer) != 0) && (buffer[0] != '\0')) 
    /* - MAXLINES osigurava da maximalan broj linija nije unesen
      - gets(buffer) !=0 poziva gets() bibliotečnu funkciju da čita liniju sa tastature u buffer i verifikuje da se end-of-line ili neka druga greška, nije desila.
    - buffer[0] != ‘\0’ verifikuje (potvrđuje) da prvi karakter koji je upravo unesen nije null karakter, koji bi dao signal da je unesena prazna linija.

    */
    {
        if ((lines[n] = (char *)malloc(strlen(buffer)+1)) == NULL)
            return -1;
        strcpy( lines[n++], buffer );
    }
    return n;
}

void sort(char *p[], int n, int sort_type) {
    int a, b;
    char *x;

    int (*compare)(char *s1, char *s2); /* Pointer na funkciju. */
    /* Inicijaliziraj pointer da pokazuje na pravilnu uporedjujucu funkciju zavisno od argumenta sort_type.*/
    compare = (sort_type) ? reverse : alpha;
    for (a = 1; a < n; a++){
        for (b = 0; b < n-1; b++){
            if (compare(p[b], p[b+1]) > 0){
                x = p[b];
                p[b] = p[b+1];
                p[b+1] = x;
            }
        }
    }
}

void print_strings(char *p[], int n) {
    int count;
    for (count = 0; count < n; count++)
        printf("%s\n ", p[count]);
}

int alpha(char *p1, char *p2)
/* Alphabetical (abecedno) poredjenje. */
{
    return(strcmp(p2, p1));
}

int reverse(char *p1, char *p2)
/* Obratno abecedno (alphabetical) poredjenje. */
{
    return(strcmp(p1, p2));
}