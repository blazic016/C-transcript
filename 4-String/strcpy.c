#include <stdio.h>
#include <math.h>



void main(void)
{

    char rec1[50], rec2[50];

    strcpy(rec1, "halo");
    strcpy(rec2, "halo");

    // AKO UNOSIMO?
    //scanf("%s %s", rec1, rec2);


    if( strcmp(rec1, rec2) ) {   // strcmp VRACA 0 AKO SU ISTE. 
        printf("Reci su razlicite!\n");
    } else {
        printf("Reci su potpuno iste!\n");
    }

    //strlen
    char rec[50] = "duzina";
    printf( "%d\n", strlen(rec));

}