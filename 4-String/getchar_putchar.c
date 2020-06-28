#include <stdio.h>

#define MAX 80


int main() {

/*getchar() je buffer-ovana unosna funkcija, nikakvi karakteri se ne primaju dok ne pritisnete enter.*/

/* int ch;
while ((ch = getchar()) != '\n') {
    putchar(ch);
}
 */
 
// Upotreba getchar() funkcije za unoos cijele linije texta.
char ch, buffer[MAX+1];
int x = 0;
while ((ch = getchar()) != '\n' && x < MAX)
    buffer[x++] = ch;
buffer[x] = '\0';
printf("%s\n", buffer);

return 0;
}