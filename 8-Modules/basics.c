
/* COMPILE
Create a.out, gcc basics.c calc.c
or, gcc basics.c calc.c -o finish
*/


#include <stdio.h>
#include <stdlib.h>
#include "calc.h"


int main() {
int x = 2;
///printf("Enter an integer value: ");
//scanf("%d", &x);
int y;
y = na_kvadrat(x);

printf("The square of %d is %d \n", x, y );
return 0;
}

