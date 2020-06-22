#include<stdio.h>
#include <string.h> // strlen


int main() {

  char name[] = "Cloud";
  //char name[6] = "Cloud"; // TERMINATOR \0, znaci 6 karaktera.
  //char name[6] = {'C', 'l', 'o', 'u', 'd', '\0'};

  printf("%s\n", name);
  printf("%c\n", name[0]);

  int len = strlen(name);
  printf("LEN: %d\n\n", len);



  return 0;
}