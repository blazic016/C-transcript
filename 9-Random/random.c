#include <stdio.h>
#include <stdlib.h>
#include <time.h> // mora time da bi random malo provrteo brojeve

int main () {
   int i, n;
   time_t t;
   

   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < 5 ; i++ ) {
      printf("%d\n", rand() % 50);
   }
   

    //drugi nacin
    int broj;
    int nule = 0, jedinice = 0;
    srand( time(NULL));
    for( i = 1 ; i <= 20 ; i++ ) {
    broj = rand() % 2;
    printf("%d. %d\n", i, broj);
    if (broj == 1) {
        nule++;
    } else {
        jedinice++;
    }
    }
    printf("Nule:%d, Jedinice:%d", nule, jedinice);


   return(0);
}