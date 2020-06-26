#include <stdio.h>
#include <stdarg.h> /* Varijabilna lista argumenata. */

/* 
va_list - Pointer tipa podataka (A pointer data type).
va_start() - Makro korišten za inicijalizaciju argumentne liste.
va_arg() - Makro korišten da dobije (retrieve) svaki argument, u povratku, iz varijabilne liste.
va_end() - Makro korišten za “čisćenje” kada su dobijeni (retrieved ) svi argumenti.
*/

float average(int num, ...);

int main () {
    float x;
    x = average(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    printf("\nFirst: %f.", x);
    x = average(5, 121, 206, 76, 31, 5);
    printf("\nSecond: %f.\n", x);
    return 0;
}

float average(int num, ...) {
    va_list arg_ptr; /* Deklarisi varijablu tipa va_list. */
    int total = 0;
    va_start(arg_ptr, num); /* Inicijalizacija argumentovane liste */

    for (int i = 0; i < num; i++) { /* Prodji kroz svaki argument u varijabilnoj listi. */
        total += va_arg( arg_ptr, int );
    }

    va_end(arg_ptr); /* Ocisti */

    return ((float)total/num);
}