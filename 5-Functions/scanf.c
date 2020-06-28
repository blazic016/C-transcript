#include <stdio.h>

int main() {
    int i1, i2;
    long l1;

    double d1;
    char buf1[80], buf2[80];

    puts("Enter an integer and a floating point number.");
    scanf("%ld %lf", &l1, &d1);
    fflush(stdin);
    printf("\nYou entered %ld and %lf.\n",l1, d1);

    puts("Enter a 5 digit integer (for example, 54321).");
    scanf("%2d%3d", &i1, &i2);
    printf("\nYou entered %d and %d.\n", i1, i2);
    fflush(stdin);

    puts("Enter your first and last names separated by a space.");
    scanf("%[^ ]%s", buf1, buf2);
    printf("\nYour first name is %s\n", buf1);
    printf("Your last name is %s\n", buf2);



return 0;
}