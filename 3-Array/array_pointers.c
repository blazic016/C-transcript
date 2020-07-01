#include <stdio.h>

void print_strings(char *p[], int n);

int main() {
    char *message[8] = { "Four", "score", "and", "seven", "years", "ago,", "our", "forefathers" };
    print_strings(message, 8);
    return 0;
}

void print_strings(char *p[], int n) { // 2 arggumenta, jedan je niz pointera na char, drugi je br elemenata u nizu.
    int count;
    for (count = 0; count < n; count++)
        printf("%s ", p[count]);
    printf("\n");
}