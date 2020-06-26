/*


*/

#include<stdio.h>
 
int main() {


/*

  //ISPIS IZ FAJLA.
  FILE *fp = fopen("fileName.txt", "r");
  int ch = getc(fp);
  while (ch != EOF)
  {
    putchar(ch); //ispisi na terminal
    ch = getc(fp);
  }
   
  if (feof(fp))
     printf("\n KRAJ FAJLA");
  else
     printf("\n Something gone wrong.");
  fclose(fp);
*/

/*

//UPISI U FAJL.
  FILE * fileName;
  fileName = fopen("anything.txt","wt");
  for (ch = 'D' ; ch <= 'S' ; ch++) {
    putc (ch , fileName);
    }
  fclose (fileName);
  */   



  //getchar();





FILE *filee = NULL; 
char buf[50]; 
filee = fopen("anything.txt","r"); 
if(filee) 
    { 
         while(!feof(filee)) 
         { 
             fgets(buf, sizeof(buf), filee); 
             puts(buf); 
         } 
         fclose(filee); 
   } 






  return 0;
}