#include <stdio.h>

/*
 int (*func1)(int x);   - Deklariše func1 kao pointer na funkciju koja uzima jedan argument tipa int i vraća tip int.
 int *func1(int x);     - Deklariše func1 kao funkciju koja vraća pointer na tip int.

char (*func)();         - pointer na func koja ne uzima argumente i vraća karakter:
char *func();           - func koja vraća pointer na karakter:

 */


double square(double x); /* Prototip funkcije. */
double (*p)(double x); /* Deklaracija pointera. */


void func1(int x);
void one(void);
void two(void);
void other(void);



int main() {
    p = square;  /* Inicijalizacija p da pokazuje na square(). */

    /* Poziv square()-a dva puta. */
    printf("%f %f\n", square(6.6), p(6.6));


    int a;
    for (;;) {
        puts("\nEnter an integer between 1 and 10, 0 to exit: ");
        scanf("%d", &a);
        if (a == 0)
            break;
        func1(a);
    }



    return 0;
}

double square(double x)
{
    return x * x;
}


void func1(int x){
/* Pointer od funkcije. */
    void (*ptr)(void);
    if (x == 1)
    ptr = one;
    else if (x == 2)
    ptr = two;
    else
    ptr = other;
    ptr();
}

void one(void)
{
    puts("You entered 1.");
}

void two(void)
{
    puts("You entered 2.");
}

void other(void)
{
    puts("You entered something other than 1 or 2.");
}