/*
Kao i strukture, sluze za kolekciju vise razlicitih tipova podataka.
Medjutim sa UNIONS se moze skladistiti informacije samo u jednom polju u bilo koje vreme.
Koriste manje memorije od struktura.

*/



#include<stdio.h>
#include<string.h>

//Definicija
union Courses {
    char  WebSite[50];
    char  Subject[50];
    int   Price;
  };


int main() {    

  union Courses C;

  strcpy( C.WebSite, "w3schools.in");
  printf( "WebSite : %s\n", C.WebSite);

  strcpy( C.Subject, "The C");    
  printf( "Author : %s\n", C.Subject);
   
  C.Price = 0;
  printf( "Price : %d\n", C.Price);

}