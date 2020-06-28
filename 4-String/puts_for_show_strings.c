#include <stdio.h>

char *messages[5] = { "This", "is", "a", "short", "message." };

int main() {
    int x;
    for (x=0; x<5; x++)
        puts(messages[x]);
    return 0;
}