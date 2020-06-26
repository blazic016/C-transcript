/*
Strukture su kolekcija razlicitih vrsta podataka.
Slicne su nizovima, ali nizovi skladiste 1 tip podatka.
Varijable u strukturi su članovi strukture.

*/



#include<stdio.h>
#include<string.h>

//Definisanje
struct Courses {
    char  WebSite[50];
    char  Subject[50];
    int   Price;
};


int main() {    

  struct Courses C;

  //Initialization
  strcpy( C.WebSite, "w3schools.in");
  strcpy( C.Subject, "The C."); 
  C.Price = 0;

  //Print
   printf( "WebSite : %s\n", C.WebSite);
   printf( "Author : %s\n", C.Subject);
   printf( "Price : %d\n", C.Price);


}