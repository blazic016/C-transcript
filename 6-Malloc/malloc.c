#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {    
  char *mem_alloc;
  mem_alloc = malloc( 15 * sizeof(char) ); //dinamicka alokacija memorije

  if(mem_alloc== NULL ) {      
    printf("Couldn't able to allocate requested memory\n");
  } else {      
    strcpy( mem_alloc,"w3schools.in");
  }

  printf("Dynamically allocated memory content : %s\n\n\n", mem_alloc );
  free(mem_alloc);
  
}