#include <stdlib.h>
#include <stdio.h>

void clear_kb(void);

int main() {
    FILE *fp;
    float data[5];
    int count;
    char filename[20];

    puts("Enter 5 floating-point numerical values.");
    for (count = 0; count < 5; count++)
        scanf("%f", &data[count]);

    clear_kb(); /*Ocisti stdin od bilo kojih drugih karaktera.*/

    puts("Enter a name for the file.");
    gets(filename);

    if ( (fp = fopen(filename, "w")) == NULL) {
        fprintf(stderr, "Error opening file %s.", filename);
        exit(1);
    }

    /* Pisi numericke podatke u file i u stdout. */
    for (count = 0; count < 5; count++) {
        fprintf(fp, "\ndata[%d] = %f", count, data[count]);
        fprintf(stdout, "\ndata[%d] = %f", count, data[count]);  /*isto kao printf. ako se kao stream argument navede stdout, onda radi kao printf*/
    }

    fclose(fp);
    printf("\n");

    return 0;
}


void clear_kb(void){
    char junk[80];
    gets(junk);
}