#include <stdio.h>

void clear_kb(void);


int main() {
    int age;
    char name[20];

    puts("Enter your age.");
    scanf("%d", &age);
    clear_kb(); /* npr, ako bismo uneli "29 testiraj me", clear_kb ce ocistiti visak */

    puts("Enter your first name.");
    scanf("%s", name);

    printf("Your age is %d.\n", age);
    printf("Your name is %s.\n", name);


    // drugi nacin - ciscenje sa fflush() funkcijom
    puts("AGAIN - Enter your age.");
    scanf("%d", &age);
    fflush(stdin); /* Ocisti stdin od bilo kojih dodatnih karaktera. */

    puts("Enter your first name.");
    scanf("%s", name);

    printf("Your age is %d.\n", age);
    printf("Your name is %s.\n", name);




return 0;
}

void clear_kb(void) { /* Cisti stdin od bilo kojih karaktera koji cekaju. */
    char junk[80];
    gets(junk);
}