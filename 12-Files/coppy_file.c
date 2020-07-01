#include <stdio.h>

/* ALGORITAM
1. Otvorite izvorni file za čitanje u binarnom mode-u. (Koristeći binarni mode osigurava da
funkcija može kopirati sve vrste file-ova, ne samo textualne file-ove).
2. Otvorite odredišni file za pisanje u binarnom mode-u.
3. Čitaj karakter iz izvornog file-a. Zapamtite, kada je prvi file otvoren, pointer je na početku
file-a, tako da nema potrebe da explicitno pozicionirate pointer.
4. Ako funkcija feof() indicira da ste dostigli kraj-file-a u izvornom file-u, završili ste i možete
zatvoriti oba file-a i vratiti se pozivajućem programu.
5. Ako niste dostigli kraj-file-a, piši karakter u odredišni file, i onda peetljaj nazad na korak 3.
*/


/* pokretanje
Enter source file: TEXT.TXT
Enter destination file: TEXT2.TXT
*/

int file_copy( char *oldname, char *newname );

int main() {
    char source[80], destination[80];

    printf("\nEnter source file: ");
    gets(source);

    printf("\nEnter destination file: ");
    gets(destination);

    if ( file_copy( source, destination ) == 0 )
        puts("Copy operation successful");
    else
        fprintf(stderr, "Error during copy operation");

    return 0;
}


int file_copy( char *oldname, char *newname ) {
    FILE *fold, *fnew;
    int c;

     /* Otvori izvorni file za chitanje u binarnom mode-u. */
    if ( ( fold = fopen( oldname, "rb" ) ) == NULL )
        return -1;

    /* Otvori odredishni file za pisanje u binarnom mode-u. */
    if ( ( fnew = fopen( newname, "wb" ) ) == NULL ) {
        fclose ( fold );
        return -1;
    }
 
    /* Citaj jedan byte (at a time) sa izvora; ako kraj-file-a  nije dostignut, pishi byte na odrediste */
    while (1){
        c = fgetc( fold );
        if ( !feof( fold ) )
            fputc( c, fnew );
        else
            break;
    }

    fclose ( fnew );
    fclose ( fold );

    return 0;
}