/*
int atoi(char *ptr); - atoi() konvertuje string na koji pokazuje ptr u integer.
Osim cifara, string može sadržavati vodeći bijeli-znak i + ili – znak.
Ako ne pronađe konvertibilan karakter, atoi() vraća 0.

long atol(char *ptr); - atol() radi kao i atoi(), s razlikom da vraća tip long umesto int.

double atof(char *str); - atof() konvertuje string u tip double.
Broj može sadržavati cifre od 0 do 9, decimalnu tačku, i indikator exponenta E ili e. 
Ako nema konvertibilnih karaktera, atof() vraća 0.


*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char buf[80];
    double d;

    while(1) {
        printf("\nEnter the string to convert (blank to exit): ");
        gets(buf);
        if ( strlen(buf) == 0 )
            break;
        d = atof( buf );
        printf("The converted value is %f.", d);
    }



    return 0;
}