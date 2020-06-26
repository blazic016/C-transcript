#include <stdio.h>
#include <stdlib.h> /* !!! */

#define MAX 20

int intcmp(const void *v1, const void *v2);

int main() {
    int arr[MAX], count, key, *ptr;

    printf("Enter %d integer values; press Enter after each.\n", MAX);
    for (count = 0; count < MAX; count++)
        scanf("%d", &arr[count]);

    puts("Press Enter to sort the values.");
    getc(stdin);

    qsort(arr, MAX, sizeof(arr[0]), intcmp); /* Sortiraj niz u opadajucem (ascending) redosljedu. */

    for (count = 0; count < MAX; count++) { /* Prikazi sortiran niz. */
        printf("\narr[%d] = %d.", count, arr[count]);
    }
    puts("\nPress Enter to continue.");
    getc(stdin);

    printf("Enter a value to search for: ");
    scanf("%d", &key);

    ptr = (int *)bsearch(&key, arr, MAX, sizeof(arr[0]),intcmp);
    if ( ptr != NULL )    /* bsearch() vraća pointer na lokaciju pronađenog ključa ili NULL ako ključ nije pronađen. */
    printf("%d found at arr[%d].", key, (ptr - arr));
    else
    printf("%d not found.", key);
    
    return(0);
}



/* intcmp() Vraca razliku dve vrednosti kojoj su joj prosledjene. 
    Ako su elementi jednaki, 0 treba biti vraćena. Ako je element one veći od
    element two, pozitivan broj treba biti vraćen. Ako je element one manji od element two, negativan
    broj treba biti vraćen.
*/
int intcmp(const void *v1, const void *v2) {
    return (*(int *)v1 - *(int *)v2);    
}