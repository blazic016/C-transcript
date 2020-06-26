#include <stdio.h>
#include <math.h>

/* Sve math funkcije vracaju tip double.*/




int main() {

    double x = 25.1;

    printf("\nCeil: %lf", ceil(x));
    printf("\nFloor: %lf", floor(x));

    if( x >= 0 ) {   /* Po definiciji, negativni brojevi nemaju kvadratni koren. */
        printf("\nSquare root: %lf", sqrt(x) );
    } else {
        printf("\nNegative number" );
    }
    



    return 0;
}