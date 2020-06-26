#include <stdio.h> 
#include <time.h>
#include <string.h> 

/* tip varijable time_t je definisana u time.h, kao sinonim za long.
Funkcija time() vraca br sekundi koje su protekle nakon ponoci.
Ako je prosledjen Null (ili 0) funkcija time() smesta vrednost u varijablu tipa time_t.


strftime()  -  Veća kontrola nad formatom vremna.
    %a Skraćeno ime dana u sedmici (Abbreviated weekday name).
    %A Puno ime dana u sedmici (Full weekday name).
    %b Skraćeno ime mjeseca.
    %B Puno ime mjeseca.
    %c Predstavljanje datuma i vremena (npr., 10:41:50 30-Jun-91).
    %d Dan u mjesecu kao decimalni broj 01 do 31.
    %H Sat (24-satni saat) kao decimalni broj od 00 do 23.
    %I Sat (12-satni saat) kao decimalni broj od 00 do 11.
    %j Dan godine kao decimalni broj od 001 do 366.
    %m Mjesec kao decimalni broj od 01 do 12.
    %M Minuta kao decimalni broj od 00 do 59.
    %p AM ili PM.
    %S Sekunde kao decimalni broj od 00 do 59.
    %U Sedmica u godini kao decimalni broj od 00 do 53. Nedjelja se smatra prvim danom u
    sedmici.
    %w Dan u sedmici kao decimalni broj od 0 do 6 (Nedjelja = 0).
    %W Sedmica u godini kao decimalni broj od 00 do 53. Ponedjeljak se smatra prvim danom u
    sedmici.
    %x Predstavljanje datuma (npr., 30-Jun-91).
    %X Predstavljanje vremena (npr., 10:41:50).
    %y Godina, bez vijeka, kao decimalni broj od 00 do 99.
    %Y Godina, sa vijekom, kao decimalan broj.
    %Z Ime vremenske zone ako je informacija dostupna, ili blank ako ne.
    %% Jedan znak postotka %.


*/


  
int main() { 
  
/*     time_t now_1;
    now_1 = time(0);
    printf("%d", now_1);
    // Moze i preko pokazivaca.
    time_t now_2;
    time_t *ptr_now_2 = &now_2;
    time(ptr_now_2);
 */

    time_t now;
    struct tm *ptr_time;
    char buffer[80];

    time(&now);
    ptr_time = localtime(&now);

    strftime(buffer, 80, "Today is %A\nDate: %x\nTime: %X", ptr_time);
    printf("%s", buffer); // OR puts(buf1);




/*   // Default format
    struct tm* local; 
    time_t t = time(NULL); 
    local = localtime(&t); 
    printf("Local time and date: %s\n", 
    asctime(local));  // ascitime prosledjuje vreme kao struktura tipa tm */
  
    return 0; 
} 