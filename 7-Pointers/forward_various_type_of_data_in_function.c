#include <stdio.h>

void half(void *x, char type);


int main() {

    int i = 20;
    long l = 100000;
    float f = 12.456;
    double d = 123.044444;

    half(&i, 'i');
    half(&l, 'l');
    half(&d, 'd');
    half(&f, 'f');

    printf("\n%d", i);
    printf("\n%ld", l);
    printf("\n%f", f);
    printf("\n%lf\n", d);
    return(0);

}

/* 
        (int *)x  - Govorimo programu da je x pointer na tip int 
        *(int *)x  - Govorimo programu da pristupi int-u na koji pokazuje x
        Kada nam treba f-ja koja radi sa vise razlicitih tipova podataka, mozemo koristiti makroe umesto funkcije.
*/

/* Zavisno od vrijednosti tipa */
void half(void *x, char type) {
    switch (type) {
        case 'i':{
            *((int *)x) /= 2;
            break;
        }   
        case 'l': {
            *((long *)x) /= 2;
            break;
        }
        case 'f': {
            *((float *)x) /= 2;
            break;
        }
        case 'd': {
            *((double *)x) /= 2;
            break;
        }
    }
}