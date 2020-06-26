
#include <stdio.h>

/* Opsti oblik  -  type *func(parameter_list); 
To deklariše func() koja vraća pointer na type.
Ne treba mešati funkciju koja vraća pointer sa pointerom na funkciju.
double (*func)(...);  -  Pointer na funkciji koja vraća double.
double *func(...);  -  Funkcija koja vraća pointer na double
*/

int larger1(int x, int y);
int *larger2(int *x, int *y); 

int main() {
    int a, b, bigger1, *bigger2;
    printf("Enter two integer values: ");
    scanf("%d %d", &a, &b);

    bigger1 = larger1(a, b);
    printf("\nThe larger value is %d.", bigger1);

    bigger2 = larger2(&a, &b);
    printf("\nThe larger value is %d.\n", *bigger2);

    return 0;
}

int larger1(int x, int y){
    if (y > x) {
        return y;
    }
    return x;
}

int *larger2(int *x, int *y) { /* Prima dva pointera na varijabli int i vraca pointer na int */
    if (*y > *x) {
        return y;
    }
    return x;
}