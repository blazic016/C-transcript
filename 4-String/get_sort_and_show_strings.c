#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAXLINES 25

int get_lines(char *lines[]);
void sort(char *p[], int n);
void print_strings(char *p[], int n);


char *lines[MAXLINES];

int main() {
    int number_of_lines;
    number_of_lines = get_lines(lines);

    if ( number_of_lines < 0 ) {
        puts(" Memory allocation error");
        exit(-1);
    }

    sort(lines, number_of_lines);

    print_strings(lines, number_of_lines);

}



int get_lines(char *lines[]){
    int n = 0;
    char buffer[80]; /* Privremeno smjestanje za svaku liniju. */
    puts("Enter one line at time; enter a blank when done.");
    while ((n < MAXLINES) && (gets(buffer) != 0) && (buffer[0] != '\0')) 
    {
        if ((lines[n] = (char *)malloc(strlen(buffer)+1)) == NULL)
            return -1;
        strcpy( lines[n++], buffer );
    }
    return n;
}

void sort(char *p[], int n) {
    int a, b;
    char *x;
    for (a = 1; a < n; a++){
        for (b = 0; b < n-1; b++){
            if (strcmp(p[b], p[b+1]) > 0){
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