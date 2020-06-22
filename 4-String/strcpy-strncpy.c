#include <stdio.h>
#include <string.h>
void main(void)
{


char rec1[50], rec2[50];
//dodeli vrednost promenljivoj rec1
strcpy(rec1, "trivijalni tekst");

//kopiraj prvih 8 elemenata stringa rec1 u string rec2
strncpy(rec2, rec1, 8);   // strncpy(), za razliku od strcpy(), ne dodaje znak za kraj stringa pa ga moramo izricito dodati.
rec2[8] = '\0';
printf("Rec2 je -> %s.\n", rec2);
}