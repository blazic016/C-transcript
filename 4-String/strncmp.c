#include <stdio.h>
#include<string.h>

char str1[] = "The first string.";
char str2[] = "The second string.";

int main() {

    size_t n, x;
    puts(str1);
    puts(str2);

    while (1) {
        puts("\n\nEnter number of characters to compare, 0 to exit.");
        scanf("%d", &n);
        if (n <= 0)
            break;
        x = strncmp(str1, str2, n);
        printf("\nComparing %d characters, strncmp() returns %d.", n, x);

    }


    return 0;
}