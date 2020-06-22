#include<stdio.h>
#include<conio.h>



int main() {

    int myArray[] = { 22, 33, 44, 55, 66, 77, 88 };
    int n = 0;

    // Initializing elements of array seperately
    for(n=0;n<sizeof(myArray)/sizeof(myArray[0]);n++)
    {
    //myArray[n] = n;
    printf("%d @ %d \n", n, myArray[n]);
    }

  return 0;
}