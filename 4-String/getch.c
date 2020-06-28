#include <stdio.h>
#include <conio.h>

#define MAX 80

/*getch() vraća svaki karakter odmah nakon pritiskanja tipke, bez čekanja na korisnika da pritisne <enter>.
getch() funkcija uzima karaktere bez da ih eho-iše na ekran.
*/
int main() {
/*     int ch;
    while ((ch = getch()) != '\r')
        putchar(ch); */

//korištenje getch() funkcije za unos cijele linije.
char ch, buffer[MAX+1];
int x = 0;
while ((ch = getch()) != '\r' && x < MAX) /* imamo funkciju getche(), ista je kao i getch() samo ne eho-ise karaktere*/
buffer[x++] = ch;
buffer[x] = '\0';
printf("%s", buffer);


return 0;
}