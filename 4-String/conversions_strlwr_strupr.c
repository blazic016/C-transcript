/*
char *strlwr(char *str); - konvertuje sva karakterna slova u str iz velikih slova u mala slova;
char *strupr(char *str); - konvertujući sve karaktere iz str u velika slova
Neslova karakteri su netaknuti.
Obe funkcije vraćaju str.
Nijedna funkcija ne kreira novi string, već modifikuje postojeći string na mjesto.
Za kompajlerianje programa, koji koristi ne-ANSI funkcije, će možda biti potrebno da kažete vašem kompajleru da ne nameće ANSI standard.
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
        puts(strlwr(buf));
        puts(strupr(buf));
    }
    return 0;
}