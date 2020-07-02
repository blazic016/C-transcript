/*
Funkcija strrev() obrće redosljed svih karaktera u stringu.
char *strrev(char *str);
Redosljed svih karaktera u str je obrnut, sa terminirajućim null karakterom, koji ostaje, na kraju.
Funkcija vraća str.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char buf[80];
    while (1) {
        puts("Enter a line of text, a blank to exit.");
        gets(buf);
        if ( strlen(buf) == 0 )
            break;
        puts(strrev(buf));
    }
    return 0;
}