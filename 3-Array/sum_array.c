#include <stdio.h>
void main(void)
{
    //deklaracija niza
    float broj[5];
    double rez = 0;


for(int i=0; i < 5; i++)
    {
    printf("Unesite broj %d : ", i+1);
    scanf("%f", &broj[i] );
     rez = rez + broj[i];
    }
    printf("Zbir unesenih brojeva je %lf \n", rez);


}