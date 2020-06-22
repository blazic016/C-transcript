
/*
Pokazivaci su varijabla, pokazivačka vrednost je adresa od memorijske lokacije.

*/


#include<stdio.h>


int main() {

  int  n = 20; 
  int *pntr;

  pntr = &n; // čuva adresu od n 

  printf("Adresa n: 0x%x\n", &n); //hex
  printf("Adresa pntr: 0x%x\n", pntr); //hex
  printf("Value *pntr: %d\n", *pntr); //value

  return 0;
}